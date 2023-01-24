#!/bin/bash

echo "What would you like to remember forever? :)"
read title
echo "Any details on that?"
read description

count=27
dayShift=1
dayShiftAmount=1
date=`date +%D`

while [ $count -gt 0 ]
do
    date=$(date +%D -d "+$dayShift days")
    gcalcli --cal 'joystickus' add --title "$title" --description "$description" --when "$date 6am" --duration 0 --reminder 0 --color tangerine --noprompt
    dayShiftAmount=$[ $dayShiftAmount + 1 ]
    dayShift=$[ $dayShift + $dayShiftAmount ]
    count=$[ $count - 1 ]
done
