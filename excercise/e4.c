//Q4.
//here 3<<4 so we calculate it like (x<<y). 2^y so 2^4=16 and for bitwise shift left operation 16*3=48
//unother side 96>>1 so (x>>y), 2^y so 2^1=2 and for bitwise right operation 98/2=48.
//both same value XOR is zero. 48^48=0

#include<stdio.h>
int main()
{
    int k;
    k=(3<<4)^(96>>1);
    printf("k=%d\n",k);
}

/*output:
k=0
*/
