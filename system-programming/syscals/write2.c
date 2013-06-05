#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
int fd,ret;
fd = open("sample.txt",O_RDWR);
if(fd < 0)
{
perror("open failed");
}
else
{
printf("The file opened and the filedescriptor is %d\n",fd);
}
ret = write(fd,"Have a nice day",15);
if(ret < 0)
{
perror("write failed");
}
else
{
printf("The no.of bytes written is %d\n",ret);

}



return 0;
}
