#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/poll.h>
#define TIMEOUT 5
int main()
{
struct pollfd fds[2];
int ret;
int fd;
char buf[30];
fd = open("test.txt",O_RDWR);

fds[0].fd = STDIN_FILENO;
fds[0].events = POLLIN;
//fd = open("test.txt",O_RDWR);
fds[1].fd = fd;
fds[1].events = POLLIN;
ret = poll(fds,2,TIMEOUT*1000);
if (ret == -1)
{
perror("poll");
return 1;
}
if(!ret)
{
printf("Time out elapsed: %d\n",TIMEOUT*1000);
}
if(fds[0].revents&POLLIN)
{
printf("stdin is readable\n");
}
#if 0
if(fds[1].revents&POLLIN)
{
printf("File is readable\n");
ret = read(fd,buf,12);
if( ret == -1)
{
perror("read");
return 1;
}
if(ret)
{
printf("The data from test.txt:\n %s\n",buf);

}
}
#endif

}
