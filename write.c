#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
	{
		int fd,ret;
		char buff[20]="SHIVA IS DEVELOPER";
		fd=open("/dev/char_device",O_RDWR);
		if(fd<0)
		{
			printf("fail to open the file\n");
			exit(1);
		}
		ret=write(fd,buff,strlen(buff));
		if(ret<0)
		{
			printf("fail to perform write operation\n");
			exit(2);
		}
		printf("the sent data is : %s",buff);
		close(fd);
	}

