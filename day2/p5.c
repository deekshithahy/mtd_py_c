#include <stdio.h>
int main()
{
    int avgscore=0;
    puts("enter a avg score");
    scanf("%d",&avgscore);
    if(avgscore<0||avgscore>100)
    printf("invalid score");
    else if(avgscore>=0&&avgscore<=49)
    printf("fail");
    else if(avgscore>=50&&avgscore<=70)
    printf("second class");
    else if(avgscore>=71&&avgscore<=90)
    printf("first class");
    else
    printf("distinction");
    return 0;
    

}