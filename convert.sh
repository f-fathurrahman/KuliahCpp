#!/bin/bash

basnam=`basename $1 .md`

if [ $basnam == "$1" ]; then
  echo "Error: file name does not have *.md extension"
  exit 1
fi

pandoc -s $basnam.md -o ${basnam}_GENERATED.tex

pandoc -s $basnam.md -o ${basnam}_GENERATED.docx
