#include<stdio.h>
#include "a.h"
#include "b.h"
#include "c.h"

int main()
{
int x,a,b;
printf("In main\n");
printf("Enter a b values:\n");
scanf("%d%d",&a,&b);
x=add(a,b);
printf("The addition of two numbers %d, %d = %d\n",a,b,x);
x=sub(a,b);
printf("The subtractiion of two numbers %d, %d = %d\n",a,b,x);
x=mul(a,b);
printf("The multiplication of  two numbers %d, %d = %d\n",a,b,x);

return 0;
}
