#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>




int main() {

	//Challenge11
        system("touch secret_number");
	pid_t pid = fork();
        if (pid==0){
		int c;
		FILE *file;
		file = fopen("secret_number", "r");
		sleep(2);
	        if (file) {
                	while ((c = getc(file)) != EOF)
	        	putchar(c);
			fclose(file);
		}
	}	
		if (pid!=0) {
		system("./riddle");
		}
}

