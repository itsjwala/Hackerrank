#!/bin/bash

if [ "$*" ]; then
	git add --all
	git commit -m "$*"
	git push -u origin master
else
	echo "Enter commit message"
fi