#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fd ;
	char  ubuff[100]="hai hello world";

	fd = open ("/dev/MyCharDriver", O_WRONLY , 0777 ) ;
	if (fd <0 )
	{
		perror ("open:%s") ;
		exit (-1 ) ;
	}
	write ( fd, ubuff, sizeof ( ubuff ) );
		//perror("write") ;
	close(fd);
	return 0 ;
}
