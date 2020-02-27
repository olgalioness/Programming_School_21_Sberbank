IP=`ifconfig | grep "inet " | cut -d' ' -f2 | awk '($0 != "127.0.0.1") {print}'`
if [[ -z $IP ]]; then
	echo "I am lost!"
else
	echo "$IP"
fi
