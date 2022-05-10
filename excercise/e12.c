//Q12.

#include<stdio.h>
int main()
{
    int i,num=0x1A3B;
    unsigned int mask;
    mask=1<<15;
    for(i=15; i>=0; i--)
    {
        (num&mask) ? printf("1") : printf("0");
        mask=mask>>1;
    }
    
}
    /*output:
    0001101000111011
    */
