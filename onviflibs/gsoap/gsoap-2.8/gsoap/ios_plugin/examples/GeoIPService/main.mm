//
//  main.m
//  GeoIPService
//
//  Created by Wei Zhang on 5/27/12.
//  Copyright Genivia Inc. 2012. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "./Classes/GeoIPServiceSoap12.nsmap"

int main(int argc, char *argv[]) {
    
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    return retVal;
}
