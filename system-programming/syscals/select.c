#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#define TIMEOUT 5
#define BUF_LEN	1024
int main()
{
struct timeval tv;
fd_set readfds;
int ret;
char buf[BUF_LEN+1];
int len;
FD_ZERO(&readfds);
FD_SET(STDIN_FILENO,&readfds);
tv.tv_sec = TIMEOUT;
tv.tv_usec = 0;
ret = select(2,&readfds,NULL,NULL,&tv);
if(ret == -1)
{
perror("select");
return 1;
}
else if(!ret)
{
printf("time elapsed %d\n",TIMEOUT);
}
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
}

