//q1. 
//x=5(0101) and y=4(0100)  when x&y=4(0100) and logical AND(&&) x&&y=1


#include<stdio.h>
int main()
{
    int x=5, y=4;
    if(x||y)
    printf("x&y =%d, x&&y = %d\n",x&y,x&&y);
}

/*output:
x&y =4, x&&y = 1
*/
