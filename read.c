#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<fcntl.h>



int main()
{
	int fd,ret;
	char rbuf[20];
	
	fd=open("/dev/char_device",O_RDWR);
	if(fd<0)
	{
		printf("fail to open the file\n");
		exit(1);
	}
	ret=read(fd,rbuf,20);
	if(ret<0)
	{
		printf("fail the read operation\n");
		exit(2);
	}
	rbuf[ret]='\0';
	printf("received data is : %s\n",rbuf);
	close(fd);
}

