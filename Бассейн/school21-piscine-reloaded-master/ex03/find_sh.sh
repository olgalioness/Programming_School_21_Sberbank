#!/bin/sh

find . -type f -name "*.sh" | sed -E 's/.*\/(.*)\.sh/\1/g'
