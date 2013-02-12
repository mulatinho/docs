#!/bin/bash
USERS=`ls /home`
QUOTA="quota.log"

for i in $USERS ; do
	USER_EXIST=`sed -n 's/:.*//p' /etc/passwd | grep "$i"`

	if [ $USER_EXIST ] ; then
		du -hs /home/$i >> $QUOTA
		chmod 700 /home/$i && chown $i.users /home/$i
	fi
done
