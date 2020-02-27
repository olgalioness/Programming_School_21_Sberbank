# !/bin/bash
ifconfig -a | grep -w ether | tr -d 'ether ' | tr -d ' '
