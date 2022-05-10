//Q8
/*here num=0xA01D(1010 0000 0001 1101)
mask=1<<pos=1<<3(2^3=8), so mask=8(0000 0000 0000 1000)
num&mask=8(0000 0000 0000 1000)
8>>8=8/8=1
*/

#include<stdio.h>
int main()
{
    int num=0xA01D, pos=3, bit;
    int mask=1<<pos;
    bit=(num&mask)>>pos;
    printf("%d",bit);
}

/*output:
1
*/
