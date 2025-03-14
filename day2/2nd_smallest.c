#include<stdio.h>
int main()
{
    int num,digit;
    int smallest =9 ,secondsmallest = 9;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        digit = num%10;
        num/=10;
        if(digit<smallest)
        {
            secondsmallest = smallest;
            smallest = digit;
        }
        else if(digit>smallest && digit<secondsmallest)
        {
            secondsmallest = digit;
        }
    }
    if(smallest == secondsmallest)
    {
        printf("no second smallest digit found");
    }
    else
    {
        printf("the second smallest digit is %d",secondsmallest);
    }
    return 0;
}
    