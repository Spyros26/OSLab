#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	char filename[5];
	char command[11];

	snprintf(filename, 5, "bf00");     
	snprintf(command, 11, "touch %s", filename);    
	system(command);
	int fd = openat(AT_FDCWD, filename, O_RDWR|O_CREAT);
	lseek(fd, 1073741824, SEEK_SET);
	write(fd, "A thing to read", 16);	       

	system("ln bf00 bf01");
	system("ln bf00 bf02");
	system("ln bf00 bf03");
	system("ln bf00 bf04");
	system("ln bf00 bf05");
	system("ln bf00 bf06");
	system("ln bf00 bf07");
	system("ln bf00 bf08");
	system("ln bf00 bf09");

	system("./riddle");
}
