#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
char a[100];
ssize_t ret;
int fd;
off_t ret1;
fd=open("sample.txt",O_RDWR);
printf("The file descriptor = %d\n",fd);
ret = pread(fd,a,5,10);
printf("no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);
memset(a,'\0',sizeof(a));
ret = pwrite(fd,"helloworld",11,27);
printf("no of bytes written = %d\n",ret);
ret = read(fd,a,40);
printf("no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);
return 0;
close(fd);
}
