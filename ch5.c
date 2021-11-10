#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main() {
	dup2(1, 99);
	system("./riddle");
}
