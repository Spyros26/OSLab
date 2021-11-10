all: ch5 ch6 ch8 ch11 ch12

ch5: ch5.c
	gcc -Wall ch5.c -o ch5

ch6: ch6.c          
	gcc -Wall ch6.c -o ch6 

ch8: ch8.c       
	gcc -Wall ch8.c -o ch8 

ch11: ch11.c
	gcc -Wall ch11.c -o ch11 

ch12: ch12.c   
	gcc -Wall ch12.c -o ch12 

clean: 
	rm ch5 ch6 ch8 ch11 ch12 bf0* riddle.savegame magic_mirror .hello_there .hey_there secret 
