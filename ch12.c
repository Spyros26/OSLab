#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv){
	int fd = open(argv[1], O_RDWR);
        if (fd < 0){
        	perror("error opening file\n");
                exit (-1);								            
	}
	lseek(fd, 0x6f, SEEK_SET);
	write(fd, argv[2], 1);
}
