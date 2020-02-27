ip=`ifconfig | grep "inet " | grep -v "127.0.0.1" | cut -d " " -f2`
if [ ip = "" ]
then
	echo "I am lost!"
else
	echo $ip
fi
