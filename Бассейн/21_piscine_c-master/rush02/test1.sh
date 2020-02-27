echo "exp : 01 6 6" && ./colle-01 6 6 | ./colle-2
echo "exp : 00 6 6" && ./colle-00 6 6 | ./colle-2
echo "exp : 02 1 0" && ./colle-02 1 0 | ./colle-2
echo "exp : 02 0 2" && ./colle-02 0 2 | ./colle-2
echo "exp : 00 7 0" && ./colle-00 7 0 | ./colle-2
echo "exp : 02 1 2" && ./colle-02 1 2 | ./colle-2
echo "exp : 00 6 6" && ./colle-00 6 6 | ./colle-2
echo "exp : 00 2 3" && ./colle-00 2 3 | ./colle-2
echo "exp : 00 3 9" && ./colle-00 3 9 | ./colle-2
echo "exp : 00 -98 100" && ./colle-00 -98 100 | ./colle-2
echo "exp : 00 11 14" && ./colle-00 11 14 | ./colle-2
echo "exp : 02 200 1" && ./colle-02 200 1 | ./colle-2
echo "exp : 00 2 87" && ./colle-00 2 87 | ./colle-2
echo "exp : 01 11 280" && ./colle-01 11 280 | ./colle-2

echo "exp : 01 76 34" && ./colle-01 76 34 | ./colle-2
echo "exp : 02 99 48" && ./colle-02 99 48 | ./colle-2
echo "exp : 01 -98 17" && ./colle-01 -98 17 | ./colle-2
echo "exp : 00 0 44" && ./colle-00 0 44 | ./colle-2
echo "exp : 02 16 -1" && ./colle-02 16 -1 | ./colle-2
echo "exp : 01 12 12" && ./colle-01 12 12 | ./colle-2
echo "exp : 02 28 28" && ./colle-02 28 28 | ./colle-2
echo "exp : 02 22 22" && ./colle-02 22 22 | ./colle-2
echo "exp : 00 33 23" && ./colle-00 33 23 | ./colle-2
echo "exp : 01 15 -99" && ./colle-01 15 -99 | ./colle-2
echo "exp : 02 19 19" && ./colle-02 19 19 | ./colle-2
echo "exp : 01 206 91" && ./colle-01 206 91 | ./colle-2
echo "exp : 00 27 27" && ./colle-00 27 27 | ./colle-2
echo "exp : 02 13 290" && ./colle-02 13 290 | ./colle-2

echo "exp : hello wolrd" && echo "hello world" | ./colle-2
echo "exp : AAA" && echo "AAA" | ./colle-2
echo "exp : ABB*A" && echo "ABB*A" | ./colle-2
echo "exp : AAAAAAC" && echo "AAAAAAC" | ./colle-2
echo "exp : A—CCCCB—A" && echo "A-CCCCB-A" | ./colle-2
echo "exp : AA1" && echo "AA1" | ./colle-2
