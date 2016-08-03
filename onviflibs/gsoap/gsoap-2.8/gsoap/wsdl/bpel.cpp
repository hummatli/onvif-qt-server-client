/*
	bpel.cpp

	BPEL 2.0 binding schema

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
This software is released under one of the following licenses:
GPL or Genivia's license for commercial use.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "wsdlH.h"
#include "includes.h"

extern const char *qname_token(const char*, const char*);
extern int is_builtin_qname(const char*);

////////////////////////////////////////////////////////////////////////////////
//
//	plnk:tRole
//
////////////////////////////////////////////////////////////////////////////////

plnk__tRole::plnk__tRole()
{
  portTypeRef = NULL;
}

wsdl__portType *plnk__tRole::portTypePtr() const
{
  return portTypeRef;
}

int plnk__tRole::traverse(wsdl__definitions& definitions)
{
  const char *token;
  if (vflag)
    cerr << "  Analyzing BPEL Partner Link tRole" << endl;
  portTypeRef = NULL;
  token = qname_token(portType, definitions.targetNamespace);
  if (token)
  {
    for (vector<wsdl__portType>::iterator portType = definitions.portType.begin(); portType != definitions.portType.end(); ++portType)
    {
      if ((*portType).name && !strcmp((*portType).name, token))
      {
	portTypeRef = &(*portType);
        if (vflag)
          cerr << "  Found tRole '" << (name?name:"") << "' portType '" << (token?token:"") << "'" << endl;
        break;
      }
    }
    // WSDL 2.0
    for (vector<wsdl__portType>::iterator i = definitions.interface_.begin(); i != definitions.interface_.end(); ++i)
    {
      if ((*i).name && !strcmp((*i).name, token))
      {
	portTypeRef = &(*i);
        if (vflag)
          cerr << "  Found tRole '" << (name?name:"") << "' interface '" << (token?token:"") << "'" << endl;
        break;
      }
    }
  }
  if (!portTypeRef)
  {
    for (vector<wsdl__import>::iterator import = definitions.import.begin(); import != definitions.import.end(); ++import)
    {
      wsdl__definitions *importdefinitions = (*import).definitionsPtr();
      if (importdefinitions)
      {
	token = qname_token(portType, importdefinitions->targetNamespace);
        if (token)
        {
	  for (vector<wsdl__portType>::iterator portType = importdefinitions->portType.begin(); portType != importdefinitions->portType.end(); ++portType)
          {
	    if ((*portType).name && !strcmp((*portType).name, token))
            {
	      portTypeRef = &(*portType);
              if (vflag)
                cerr << "  Found tRole '" << (name?name:"") << "' portType '" << (token?token:"") << "'" << endl;
              break;
            }
          }
	  // WSDL 2.0
          for (vector<wsdl__portType>::iterator i = importdefinitions->interface_.begin(); i != importdefinitions->interface_.end(); ++i)
          {
	    if ((*i).name && !strcmp((*i).name, token))
            {
	      portTypeRef = &(*i);
              if (vflag)
                cerr << "  Found tRole '" << (name?name:"") << "' interface '" << (token?token:"") << "'" << endl;
              break;
            }
          }
        }
      }
    }
  }
  if (!portTypeRef)
  {
    if (!Wflag)
      cerr << "Warning: no tRole '" << (name?name:"") << "' portType '" << (portType?portType:"") << "' in wsdl definitions '" << (definitions.name?definitions.name:"") << "' namespace '" << (definitions.targetNamespace?definitions.targetNamespace:"") << "'" << endl;
  }
  return SOAP_OK;
}

void plnk__tRole::plnkPtr(plnk__tPartnerLinkType *plnk)
{
  plnkRef = plnk;
}

plnk__tPartnerLinkType* plnk__tRole::plnkPtr() const
{
  return plnkRef;
}

////////////////////////////////////////////////////////////////////////////////
//
//	plnk:tPartnerLinkType
//
////////////////////////////////////////////////////////////////////////////////

int plnk__tPartnerLinkType::traverse(wsdl__definitions& definitions)
{
  if (vflag)
    cerr << "  Analyzing BPEL Partner Link Type" << endl;
  for (vector<plnk__tRole>::iterator i = role.begin(); i != role.end(); ++i)
  {
    (*i).plnkPtr(this);
    (*i).traverse(definitions);
  }
  return SOAP_OK;
}

////////////////////////////////////////////////////////////////////////////////
//
//	vprop:property
//
////////////////////////////////////////////////////////////////////////////////

int vprop__tProperty::traverse(wsdl__definitions& definitions)
{
  if (vflag)
    cerr << "  Analyzing BPEL Variable Properties" << endl;
  if (element && definitions.types)
  {
    for (vector<xs__schema*>::iterator schema = definitions.types->xs__schema_.begin(); schema != definitions.types->xs__schema_.end(); ++schema)
    {
      const char *token = qname_token(element, (*schema)->targetNamespace);
      if (token)
      {
	for (vector<xs__element>::iterator element = (*schema)->element.begin(); element != (*schema)->element.end(); ++element)
        {
	  if ((*element).name && !strcmp((*element).name, token))
          {
	    type = (*element).type;
            if (vflag)
              cerr << "   Found property '" << (name?name:"") << "' element '" << (token?token:"") << "'" << endl;
            break;
          }
        }
      }
    }
  }
  if (element && !type)
  {
    if (is_builtin_qname(element))
      definitions.builtinElement(element);
    else
      if (!Wflag)
        cerr << "Warning: no BPEL Variable Properties '" << (name?name:"") << "' element '" << element << "' in wsdl definitions '" << (definitions.name?definitions.name:"") << "' namespace '" << (definitions.targetNamespace?definitions.targetNamespace:"") << "'" << endl;
  }
  else if (type)
  {
    if (is_builtin_qname(type))
      definitions.builtinType(type);
  }
  return SOAP_OK;
}

////////////////////////////////////////////////////////////////////////////////
//
//	vprop:tPropertyAlias
//
////////////////////////////////////////////////////////////////////////////////

int vprop__tPropertyAlias::traverse(wsdl__definitions& definitions)
{
  if (vflag)
    cerr << "  Analyzing BPEL Variable Property Alias" << endl;
  vpropRef = NULL;
  for (vector<vprop__tProperty>::iterator vprop = definitions.vprop__property.begin(); vprop != definitions.vprop__property.end(); ++vprop)
  {
    const char *token = qname_token(propertyName, definitions.targetNamespace);
    if (token && !strcmp((*vprop).name, token))
    {
      vpropRef = &(*vprop);
      if (vflag)
	cerr << "   Found property alias '" << (propertyName?propertyName:"") << "' variable" << endl;
      break;
    }
  }
  if (!vpropRef)
  {
    for (vector<wsdl__import>::iterator import = definitions.import.begin(); !vpropRef && import != definitions.import.end(); ++import)
    {
      wsdl__definitions *importdefinitions = (*import).definitionsPtr();
      if (importdefinitions)
      {
	for (vector<vprop__tProperty>::iterator vprop = importdefinitions->vprop__property.begin(); vprop != importdefinitions->vprop__property.end(); ++vprop)
	{
	  const char *token = qname_token(propertyName, importdefinitions->targetNamespace);
          if (token && !strcmp((*vprop).name, token))
	  {
	    vpropRef = &(*vprop);
	    if (vflag)
	      cerr << "   Found property alias '" << (propertyName?propertyName:"") << "' variable" << endl;
	    break;
	  }
	}
      }
    }
  }
  xs__complexType *complexTypeRef = NULL;
  if (element && definitions.types)
  {
    for (vector<xs__schema*>::iterator schema = definitions.types->xs__schema_.begin(); schema != definitions.types->xs__schema_.end(); ++schema)
    {
      const char *token = qname_token(element, (*schema)->targetNamespace);
      if (token)
      {
	for (vector<xs__element>::iterator element = (*schema)->element.begin(); element != (*schema)->element.end(); ++element)
        {
	  if ((*element).name && !strcmp((*element).name, token))
          {
	    if ((*element).type)
	      type = (*element).type;
	    else
	      complexTypeRef = (*element).complexType;
            if (vflag)
              cerr << "   Found property alias '" << (propertyName?propertyName:"") << "' element '" << (token?token:"") << "'" << endl;
            break;
          }
        }
      }
    }
  }
  else if (messageType && part)
  {
    wsdl__message *messageRef = NULL;
    const char *token = qname_token(messageType, definitions.targetNamespace);
    if (token)
    {
      for (vector<wsdl__message>::iterator message = definitions.message.begin(); message != definitions.message.end(); ++message)
      {
	if ((*message).name && !strcmp((*message).name, token))
        {
	  messageRef = &(*message);
          if (vflag)
            cerr << "    Found property alias '" << (propertyName?propertyName:"") << "' message '" << (token?token:"") << "'" << endl;
          break;
        }
      }
    }
    if (!messageRef)
    {
      for (vector<wsdl__import>::iterator import = definitions.import.begin(); import != definitions.import.end(); ++import)
      {
	wsdl__definitions *importdefinitions = (*import).definitionsPtr();
        if (importdefinitions)
        {
	  token = qname_token(messageType, importdefinitions->targetNamespace);
          if (token)
          {
	    for (vector<wsdl__message>::iterator message = importdefinitions->message.begin(); message != importdefinitions->message.end(); ++message)
            {
	      if ((*message).name && !strcmp((*message).name, token))
              {
		messageRef = &(*message);
                if (vflag)
                  cerr << "    Found property alias '" << (propertyName?propertyName:"") << "' message '" << (token?token:"") << "'" << endl;
                break;
              }
            }
          }
        }
      }
    }
    if (messageRef)
    {
      for (vector<wsdl__part>::iterator parti = messageRef->part.begin(); parti != messageRef->part.end(); ++parti)
      {
	if ((*parti).name && !strcmp(part, (*parti).name))
        {
	  if ((*parti).element && definitions.types)
	  {
	    for (vector<xs__schema*>::iterator schema = definitions.types->xs__schema_.begin(); schema != definitions.types->xs__schema_.end(); ++schema)
	    {
	      if ((*parti).type)
	        type = (*parti).type;
	      else
	      {
		token = qname_token((*parti).element, (*schema)->targetNamespace);
		if (token)
		{
		  for (vector<xs__element>::iterator element = (*schema)->element.begin(); element != (*schema)->element.end(); ++element)
		  {
		    if ((*element).name && !strcmp((*element).name, token))
		    {
		      if ((*element).type)
		        type = (*element).type;
		      else
			complexTypeRef = (*element).complexType;
		      if (vflag)
			cerr << "   Found property alias '" << (propertyName?propertyName:"") << "' element '" << (token?token:"") << "'" << endl;
		      break;
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
  if (type && !complexTypeRef && definitions.types)
  {
    for (vector<xs__schema*>::iterator schema = definitions.types->xs__schema_.begin(); schema != definitions.types->xs__schema_.end(); ++schema)
    {
      const char *token = qname_token(type, (*schema)->targetNamespace);
      if (token)
      {
	for (vector<xs__complexType>::iterator complexType = (*schema)->complexType.begin(); complexType != (*schema)->complexType.end(); ++complexType)
        {
	  if ((*complexType).name && !strcmp((*complexType).name, token))
          {
	    complexTypeRef = &(*complexType);
            break;
          }
        }
      }
    }
  }
  if (query && query->__mixed && complexTypeRef)
  {
    // TODO query is an XPath expression, most often just the name of an element
    const char *tag = strchr(query->__mixed, ':');
    if (tag)
      ++tag;
    else
      tag = query->__mixed;
    if (complexTypeRef->all)
    {
      for (vector<xs__element>::iterator element = complexTypeRef->all->element.begin(); element != complexTypeRef->all->element.end(); ++element)
      {
	if ((*element).name && !strcmp((*element).name, tag))
	{
	  // element = (*element).name;
	  type = (*element).type;
	  break;
	}
      }
    }
    else if (complexTypeRef->sequence)
    {
      for (vector<xs__contents>::iterator content = complexTypeRef->sequence->__contents.begin(); content != complexTypeRef->sequence->__contents.end(); ++content)
      {
	if ((*content).__union == SOAP_UNION_xs__union_content_element && (*content).__content.element && (*content).__content.element->name && !strcmp((*content).__content.element->name, tag))
	{
	  element = (*content).__content.element->name;
	  type = (*content).__content.element->type;
	  break;
	}
      }
    }
  }
  if (element && !type)
  {
    if (is_builtin_qname(element))
      definitions.builtinElement(element);
  }
  else if (type)
  {
    if (is_builtin_qname(type))
      definitions.builtinType(type);
  }
  return SOAP_OK;
}

vprop__tProperty *vprop__tPropertyAlias::vpropPtr() const
{
  return vpropRef;
}
