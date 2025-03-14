#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    puts("enter a number");
    scanf("%d",&num);
    int root=floor(sqrt(num));
    if(root*root==num)
    {
        printf("%d is a ps",num);

    }
    else
    printf("%d is not a ps",num);
    return 0;

}