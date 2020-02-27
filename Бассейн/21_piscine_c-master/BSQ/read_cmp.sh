for (( i=0; i<100; i++ ))
do
	rand1=$((1 + RANDOM % 3000))
	rand2=$((1 + RANDOM % 3000))
	rand3=$((1 + RANDOM % 10))
	printf "test $i : "
	./map_tool.sh $rand1 $rand2 $rand3 > ./tmp/m${i}.txt &&
	./run ./tmp/m${i}.txt ./tmp/m${i}.txt
done
