#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
int fd;
fd = open("sample.txt",O_RDWR);
if(fd < 0)
{
perror("open failed");
}
else
{
printf("The file opened and the filedescriptor is %d\n",fd);
}
return 0;
}
