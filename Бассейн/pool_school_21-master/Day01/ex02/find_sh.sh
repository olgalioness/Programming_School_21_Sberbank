#!/bin/sh

find . -type f  -name "*.sh"  | cut -c 3- | sed 's/\.sh//'

