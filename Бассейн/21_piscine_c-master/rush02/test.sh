echo "exp : 00 0 0" && ./colle-00 0 0 | ./colle-2
echo "exp : 00 0 1" && ./colle-00 0 1 | ./colle-2
echo "exp : 00 1 0" && ./colle-00 1 0 | ./colle-2
echo "exp : 00 0 2" && ./colle-00 0 2 | ./colle-2
echo "exp : 00 2 0" && ./colle-00 2 0 | ./colle-2
echo "exp : 00 1 2" && ./colle-00 1 2 | ./colle-2
echo "exp : 00 2 1" && ./colle-00 2 1 | ./colle-2
echo "exp : 00 2 3" && ./colle-00 2 3 | ./colle-2
echo "exp : 00 3 2" && ./colle-00 3 2 | ./colle-2
echo "exp : 00 14 100" && ./colle-00 14 100 | ./colle-2
echo "exp : 00 10 14" && ./colle-00 10 14 | ./colle-2
echo "exp : 00 200 1" && ./colle-00 200 1 | ./colle-2
echo "exp : 00 2 27" && ./colle-00 2 27 | ./colle-2
echo "exp : 00 11 280" && ./colle-00 11 280 | ./colle-2

echo "exp : 01 0 0" && ./colle-01 0 0 | ./colle-2
echo "exp : 01 0 1" && ./colle-01 0 1 | ./colle-2
echo "exp : 01 1 0" && ./colle-01 1 0 | ./colle-2
echo "exp : 01 0 2" && ./colle-01 0 2 | ./colle-2
echo "exp : 01 2 0" && ./colle-01 2 0 | ./colle-2
echo "exp : 01 1 2" && ./colle-01 1 2 | ./colle-2
echo "exp : 01 2 1" && ./colle-01 2 1 | ./colle-2
echo "exp : 01 2 3" && ./colle-01 2 3 | ./colle-2
echo "exp : 01 3 2" && ./colle-01 3 2 | ./colle-2
echo "exp : 01 11 17" && ./colle-01 11 17 | ./colle-2   
echo "exp : 01 2 8" && ./colle-01 2 8 | ./colle-2
echo "exp : 01 20 0" && ./colle-01 20 0 | ./colle-2
echo "exp : 01 3 91" && ./colle-01 3 91 | ./colle-2
echo "exp : 01 200 280" && ./colle-01 200 280 | ./colle-2

echo "exp : 02 0 0" && ./colle-02 0 0 | ./colle-2
echo "exp : 02 0 1" && ./colle-02 0 1 | ./colle-2
echo "exp : 02 1 0" && ./colle-02 1 0 | ./colle-2
echo "exp : 02 0 2" && ./colle-02 0 2 | ./colle-2
echo "exp : 02 2 0" && ./colle-02 2 0 | ./colle-2
echo "exp : 02 1 2" && ./colle-02 1 2 | ./colle-2
echo "exp : 02 2 1" && ./colle-02 2 1 | ./colle-2
echo "exp : 02 2 3" && ./colle-02 2 3 | ./colle-2
echo "exp : 02 3 2" && ./colle-02 3 2 | ./colle-2
echo "exp : 02 4 10" && ./colle-02 4 10 | ./colle-2
echo "exp : 02 10 14" && ./colle-02 10 14 | ./colle-2
echo "exp : 02 2 13" && ./colle-02 2 13 | ./colle-2
echo "exp : 02 12 217" && ./colle-02 12 217 | ./colle-2
echo "exp : 02 10 10" && ./colle-02 10 10 | ./colle-2

echo "exp : 03 0 0" && ./colle-03 0 0 | ./colle-2
echo "exp : 03 0 1" && ./colle-03 0 1 | ./colle-2
echo "exp : 03 1 0" && ./colle-03 1 0 | ./colle-2
echo "exp : 03 0 2" && ./colle-03 0 2 | ./colle-2
echo "exp : 03 2 0" && ./colle-03 2 0 | ./colle-2
echo "exp : 03 1 2" && ./colle-03 1 2 | ./colle-2
echo "exp : 03 2 1" && ./colle-03 2 1 | ./colle-2
echo "exp : 03 2 3" && ./colle-03 2 3 | ./colle-2
echo "exp : 03 3 2" && ./colle-03 3 2 | ./colle-2
echo "exp : 03 1 12" && ./colle-03 1 12 | ./colle-2
echo "exp : 03 98 11" && ./colle-03 98 11 | ./colle-2
echo "exp : 03 -99 -99" && ./colle-03 -99 -99 | ./colle-2
echo "exp : 03 12 15" && ./colle-03 12 15 | ./colle-2
echo "exp : 03 17 17" && ./colle-03 17 17 | ./colle-2

echo "exp : hello wolrd" && echo "hello world" | ./colle-2
echo "exp : AFB" && echo "AFB" | ./colle-2
echo "exp : A***A" && echo "A***A" | ./colle-2
echo "exp : ABBBBCA" && echo "ABBBBCA" | ./colle-2
echo "exp : A-------A" && echo "A-------A" | ./colle-2
echo "exp : AC2" && echo "AC2" | ./colle-2



