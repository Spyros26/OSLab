#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	
	int ping[2];
	int pong[2];
	pipe(ping);
	pipe(pong);
	dup2(ping[0], 33);
	dup2(ping[1], 34);
	dup2(pong[0], 53);
	dup2(pong[1], 54);

	system("./riddle");

}
