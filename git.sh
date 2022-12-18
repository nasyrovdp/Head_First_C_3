# simple push

#!/bin/bash

git add -A
echo what was done: 
read varname
git commit -m "$varname"
git push origin main
