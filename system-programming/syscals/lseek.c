#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
char a[100];
int ret;
int fd;
off_t ret1;
fd=open("sample.txt",O_RDWR);
printf("The file descriptor = %d\n",fd);
ret1 = lseek(fd,2,SEEK_SET);
printf("The new position value = %d\n",ret1);
ret = read(fd,a,5);
printf("no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);
memset(a,'\0',sizeof(a));
ret1 = lseek(fd,10,SEEK_END);
printf("The new position value = %d\n",ret1);
ret = write(fd,"helloworld",11);
printf("no of bytes written = %d\n",ret);
printf("The read string:\n");
ret1 = lseek(fd,37,SEEK_SET);
ret = read(fd,a,12);
printf("no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);
return 0;
close(fd);
}
