#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

void sig_handler(int signum){
	if (kill(-1, SIGCONT) != 0){
		fprintf(stderr, "Error sending SIGCONT\n");
		assert(0);
	}
}

int main(){

	//Challenge 0
	int fd1 = openat(AT_FDCWD, ".hello_there", O_RDONLY | O_CREAT);

	//Challenge 1
	system("chmod 444 .hello_there");

	//Challenge 2
	signal(SIGALRM, sig_handler);
	alarm(1);

	//Challenge 3
	setenv("ANSWER", "42", 0);

	//Challenge 4
	if (mkfifoat(AT_FDCWD, "magic_mirror", 0666) != 0 && errno != EEXIST){
	       fprintf(stderr, "Error creating magic_mirror\n");
	       assert(0);
	}

	//Challenge 5
	if (dup2(fd1,99)!=99){ 
		fprintf(stderr, "Error duping\n");
		assert(0);
	}
	
	//Challenge 6
	//int fd2 = openat(AT_FDCWD, "ping", O_RDWR | O_CREAT);
	//int fd3 = openat(AT_FDCWD, "pong", O_RDWR | O_CREAT);
	int ping[2];
	int pong[2];
	pipe(ping);
	pipe(pong);
	//pipe(pong);
	dup2(ping[0], 33);
	dup2(ping[1], 34);
	dup2(pong[0], 53);
	dup2(pong[1], 54);
	
	//Challenge 7
	if (access(".hey_there", F_OK) != 0) system("ln .hello_there .hey_there");


	system("strace ./riddle"); 

	return 0;
}
