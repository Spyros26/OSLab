Challenge 0
	touch .hello_there


Challenge 1
	chmod 444 .hello_there


Challenge 2
	./riddle
Open different terminal and run:
	top
See riddle's pid and then run:
	kill -SIGCONT <riddle's pid>


Challenge 3
	export ANSWER=42


Challenge 4
	mkfifo magic_mirror


Challenge 5
	./ch5


Challenge 6
	./ch6


Challenge 7
	ln .hello_there .hey_there


Challenge 8
	./ch8


Challenge 9
Open different terminal and run
	nc -l 49842
Then answer a simple question

	
Challenege 10
	touch secret_number
	ln secret_number secret
Then run
	./riddle
On a different terminal run
	cat secret
And there is your answer!


Challenge 11
	./ch11
and copy-paste the number


Challenge 12
Run
	strace ./riddle
On another terminal run 
	./ch12 <path> <character>


Challenge 13
	chmod 600 .hello_there
	truncate --size=32768 .hello_there


Challenge 14
	sudo echo 32766 > /proc/sys/kernel/ns_last_pid


