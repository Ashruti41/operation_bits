//Q3
//0xFF= 0000 0000 1111 1111
//first right shift by 6 so it looks like 0000 0000 0000 0011
//then left shift by 6 so it look like 0000 0000 1100 0000
//128+64=198

#include<stdio.h>
int main()
{
    int x;
    x=(0xFF>>6)<<6;
    printf("x=%d\n",x);
}

/*output:
x=192
*/
