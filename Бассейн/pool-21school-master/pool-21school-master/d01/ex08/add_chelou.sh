#!/bim/zsh
echo "$FT_NBR1+$FT_NBR2" | sed "y/'\\\"?!/01234/" | sed "y/mrdoc/01234/" | se -ne's/.*/obase=13;ibase=5;&/p' |bc | sed "y/0123456789ABC/gtaio luSnemf"
