#include <stdio.h>
int main()
{
    int inum=12345;
    printf("%7d\n",inum);
    printf("%3d\n",inum);
    printf("%-8d\n",inum);
    printf("%07d\n",inum);
    printf("%d\n",inum);
    printf("%-07d\n",inum);


return 0;
}