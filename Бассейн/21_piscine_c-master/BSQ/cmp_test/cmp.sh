for (( i=0; i<10000; i++ ))
do
	rand1=$((1 + RANDOM % 1000))
	rand2=$((1 + RANDOM % 1000))
	rand3=$((1 + RANDOM % 10))

	printf "test $i ($rand1, $rand2, $rand3): "
	
	./map_tool.sh $rand1 $rand2 $rand3 > ./src/m${i}.txt 
	./src/c0 ./src/m${i}.txt > ./report/rA${i}.txt 
	./src/c1 ./src/m${i}.txt > ./report/rB${i}.txt 
	diff ./report/rA${i}.txt ./report/rB${i}.txt > ./report/diff${i}.txt 
	
	if ["" = "$(cat ./report/diff${i}.txt)"]
        then
		echo "ok"
		rm -f ./report/diff${i}.txt;
		rm -f ./report/rA${i}.txt
		rm -f ./report/rB${i}.txt
		rm -f ./src/m${i}.txt
        else
        	echo "diff!"
        fi
done
