#include<stdio.h>
int main()
{
int inputnum = 0;
puts("Enter a number to check if it is Even");
scanf("%d", &inputnum);
if(inputnum % 2 == 0)
    printf("%d is Even", inputnum);
else 
    printf("%d is not even");
return 0;
}