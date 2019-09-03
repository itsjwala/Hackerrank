#!/bin/bash

if [ "$1" ]; then
	git add --all
	git commit -m "$1"
	git push -u origin master
else
	echo "Enter commit message"
fi