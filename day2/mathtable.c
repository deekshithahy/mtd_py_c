#include<stdio.h>
int main()
{
int num,i;
puts("Enter a number");
scanf("%d",&num);
printf("multiplication table of %d is\n",num);
for(i=1;i<=10;i++)
{
     printf("%d X %02d = %d\n",num,i,num*i);
}
return 0;
}
