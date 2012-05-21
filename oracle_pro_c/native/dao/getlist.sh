#!/bin/bash

ls|grep -Pv '.*\.sh\~?$'|while read x; do echo "#include\"$x/$x.h\""; echo "#include\""$x"/"$x"Dao.h\""; done;
