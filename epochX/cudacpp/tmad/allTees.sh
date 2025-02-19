#!/bin/bash

short=0
makeclean=
rmrdat=
add10x="+10x +100x"

while [ "$1" != "" ]; do
  if [ "$1" == "-short" ]; then
    short=1
    shift
  elif [ "$1" == "-makeclean" ]; then
    makeclean=$1
    shift
  elif [ "$1" == "-no100x" ]; then
    add10x="+10x"
    shift
  else
    echo "Usage: $0 [-short] [-makeclean] [-no100x]"
    exit 1
  fi
done

if [ "$short" == "1" ]; then
  ./tmad/teeMadX.sh -eemumu -ggtt -ggttg -ggttgg $makeclean $rmrdat $add10x
else
  ./tmad/teeMadX.sh -eemumu -ggtt -ggttg -ggttgg -ggttggg $makeclean $rmrdat $add10x
fi
