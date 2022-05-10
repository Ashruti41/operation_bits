//Q9
//simply print the num=0x238E(0010 0011 1000 1110) 

#include<stdio.h>
int main()
{
    int i,bit,num=0x238E;
    unsigned int mask;
    for(i=15; i>=0; i--)
    {
        mask=1<<i;
        bit=(num&mask)>>i;
        printf("%d",bit);
    }
}

/*output:
0010001110001110
*/
