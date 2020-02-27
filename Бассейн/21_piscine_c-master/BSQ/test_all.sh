i=0
for filename in ./raw_test/inv*.txt
do
	./run "$filename"
	(( i++ ))
done
