#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#define TIMEOUT 15
#define BUF_LEN	1024
int main()
{
struct timeval tv;
fd_set readfds;
int ret;
char buf[BUF_LEN+1];
int len;
int fd;
FD_ZERO(&readfds);
//FD_SET(STDIN_FILENO,&readfds);
tv.tv_sec = TIMEOUT;
tv.tv_usec = 0;
fd = open("test.txt",O_RDONLY);
if(fd == -1)
{
perror("open");
return 1;
}
if(fd)
{
printf("The file descriptor is %d\n",fd);
}

FD_SET(fd,&readfds);


ret = select(3,&readfds,NULL,NULL,&tv);
if(ret == -1)
{
perror("select");
return 1;
}
else if(!ret)
{
printf("time elapsed %d\n",TIMEOUT);
}


if(FD_ISSET(fd,&readfds))
{
len = read(fd,buf,BUF_LEN);
if(len == -1)
{
perror("tes_select");
return 1;
}
printf("The read data is : %s\n",buf);
}
#if 0
if(FD_ISSET(STDIN_FILENO,&readfds))
{
len = read(STDIN_FILENO,buf,BUF_LEN);
if(len == -1)
{
perror("select");
return 1;
}
if(len)
{
buf[len]='\0';
printf("The read data is : %s\n",buf);
}

}
#endif
}

