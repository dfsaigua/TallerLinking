# TallerLinking
Advertencia: El codigo de los siguientes archivos se ha obtenido de los siguientes enlaces:

    http://csapp.cs.cmu.edu/2e/ics2/code/link/main2.c
    http://csapp.cs.cmu.edu/2e/ics2/code/link/addvec.c
    http://csapp.cs.cmu.edu/2e/ics2/code/link/multvec.c






PARA REALIZAR LA INSPECCION POR GDB SEGUÌ ESTa pagina y en el makefile se agrego el comando wall -g que sirve para incluir la informacion utila para la depuración, despues escribi el comando gdb para invoCAR el depurador y con el comando "exec-file main2" llamé al archivo y luego con el comando "r" procedí a correr el programa. 
USE ESTA PAGINA COMO AYUDA:
http://www.lsi.us.es/~javierj/ssoo_ficheros/GuiaGDB.htm







Para crear main2.md con las tablas de simbolos se hace: 
readelf -s main2.o > main2.md

Para crear addvec.md con las tablas de simbolos se hace:
readelf -s addvec.o > addvec.md

Para crear multvec.md con las tablas de simbolos se hace:
readelf -s multvec.o > multvec.md
