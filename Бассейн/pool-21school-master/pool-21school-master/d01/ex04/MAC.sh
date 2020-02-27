#!/bin/sh
ifconfig -a | grep ether | sed -e '/media/d' -e 's/ //' | cut -b 7-24
