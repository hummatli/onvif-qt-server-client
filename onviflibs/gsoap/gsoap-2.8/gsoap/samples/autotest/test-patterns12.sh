#!/bin/sh
echo "test-patterns12.log generated " `date` > test-patterns12.log
for req in databinding/examples/6/09/*/*-soap12.xml; do
  echo "** $req **"
  echo "" >> test-patterns12.log
  echo "*** REQUEST $req ***" >> test-patterns12.log
  cat $req >> test-patterns12.log
  echo "" >> test-patterns12.log
  echo "*** RESPONSE ***" >> test-patterns12.log
  ./autotest 12288 < $req >> test-patterns12.log
done
