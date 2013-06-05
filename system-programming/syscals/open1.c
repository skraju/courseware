#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
int fd;
fd = open("sample.txt",O_RDWR|O_CREAT,S_IRUSR|S_IWUSR|S_IWGRP|S_IRGRP);
if(fd < 0)
{
perror("open failed");
}
return 0;
}
