#include<stdio.h>
int main()
{
    int num,  rem = 0,sum = 0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num > 0)
    {
        rem = num % 10;
        sum =  sum + rem;
        num = num/10;
        if(num > 0 & sum > 9)
        {
            
            num = sum;
            sum = 0;
            rem = num % 10;
            sum=rem + sum;
            num = num/10;
        }

    }
printf("the lucky number is %d",num);
    
}