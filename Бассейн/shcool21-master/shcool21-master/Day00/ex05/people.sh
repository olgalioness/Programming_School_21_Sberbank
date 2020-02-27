ldapsearch -Q "(uid=z*)" cn | grep "cn:*" | cut -c 5- | sort -r | tr "[A-Z]" "[a-z]"
