#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
int ret;
char buff[] = "Helloworld\n";
ret = write(1,buff,12);
if(ret < 0)
{
perror("Write failed");
}
else
{
printf("The no. of bytes written = %d\n",ret);
}


return 0;
}
