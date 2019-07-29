#include "fat.h"

int main(){	

	generateFileSystem(128, 1);

	my_chdir((char*)"home");
	printf("%d\n",my_open((char*)"hey", READ_ONLY));
	my_close(0);
	printf("%d\n",my_open((char*)"hey", READ_ONLY));
	printf("%d\n",my_open((char*)"hey2", READ_ONLY));
	my_close(0);
	printf("%d\n",my_open((char*)"hey2", READ_ONLY));
	my_close(0);
	my_close(16);

	printf("%d\n",my_open((char*)"hey2", READ_WRITE));
	
	char buffer[10000];

	strcpy(buffer, "dsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv dsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgvdsvdwvwrgvrwgv ds 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111222222222222222222222222222222222222222222222222222222222222222333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222211111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");

	my_write(0, (char *)buffer,5000);
	
	// char qwerty[10000];

	// disk->readInfo(3,0, (void *)&qwerty, 1024);
	// printf("3 : %s\n\n\n",qwerty);

	// disk->readInfo(4,0, (void *)&qwerty, 1024);
	// printf("4 : %s\n\n\n",qwerty);

	// disk->readInfo(5,0, (void *)&qwerty, 1024);
	// printf("5 : %s\n\n\n",qwerty);

	// disk->readInfo(6,0, (void *)&qwerty, 1024);
	// printf("6 : %s\n\n\n",qwerty);


	char buf[10000];
	// my_read(32, buf, 1);
	// printf("%s",buf);
	// my_read(32, buf, 1);
	// printf("%s",buf);
	my_read(0, (char *)buf, 1000);
	printf("%s\n\n\n",buf);
	my_read(0, (char *)buf, 4000);
	printf("%s\n\n\n",buf);
	//my_read(32, (char *)buf, 5000);
	//printf("%s\n\n\n",buf);

	my_close(0);

	return 0;
}