#include<stdio.h>
int main()
{
FILE *fp;
int ret;
char buf[40];
fp = fopen("ramesh.txt","w+");
if(fp == NULL)
{
perror("fopen");
return 1;
}
else
printf("fp = %u\n",fp);
ret=fputc('A',fp);
#if 0
if(ret == EOF)
{
perror("fputc");
return 1;
}
ret = fgetc(fp);
if(ret==EOF)
{
perror("fgetc");
return 1;
}
printf("The read char = %c ",(char)ret);

#endif
ret = fputs("helloworld",fp);

if(ret == EOF)
{
perror("fputs");
return 1;
}
memset(buf,'\0',sizeof(buf));
ret = fgets(buf,14,fp);

if(ret == EOF)
{
perror("fgets");

}
printf("read string is %s\n",buf);


fclose(fp);
}
