ColdStart.io Server Side
==============
The server side components of ColdStart.io

About
-------
Receives, processes and relays the received SNMP traps to Android devices via Google GCM

Install
---------
### snmptrapd
* Compile with ./configure --with-mysql
* Make install
* Create an snmptrapd.conf similar to;

    traphandle default /usr/bin/php /etc/snmp/snmptrap.php
    
    sqlMaxQueue 1
    
    sqlSaveInterval 2
    
    authCommunity execute abcdef1234567890fde
* Copy snmptrap.php from `./php/` to a location on disk *(e.g. /etc/snmp/snmptrap.php)*
* Edit /etc/sysconfig/snmptrapd.options to have the following arguments;

    OPTIONS="-Lsd -p /var/run/snmptrapd.pid -m ALL -On -F'%b|%P|%W\n'"

### php
* Install PHP 5+, mysql et al
* Extract ./php/ to a servable location

License
-----------------
`./php/` - GPL Version 3

`./snmptrapd/` - Various licenses detailed in ./snmptrapd/COPYING
