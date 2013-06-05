#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
char a[100];
int ret;
int fd;
fd = open("sample.txt",O_RDWR);
printf("The file descriptor = %d\n",fd);
ret = read(fd,a,12);
printf("The no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);

close(fd);
printf("file closed\n");
fd=open("sample.txt",O_RDWR|O_APPEND);
printf("The file descriptor = %d\n",fd);
ret=write(fd,"hiiiiiiiiiiiiiiiiiiiii",20);
printf("The no. of bytes written =%d\n",ret);
ret = read(fd,a,80);
printf("The no of bytes read = %d\n",ret);
printf("The read string:\n");
printf("%s\n",a);
return 0;
close(fd);
}
