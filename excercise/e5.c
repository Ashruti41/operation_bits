//Q5
/*k=C9FB(1100 1001 1111 1011) 
(1<<5)=2^5=32, 1*32=32(0000 0000 0010 0000), ~(1<<5)=~32(1111 1111 1101 1110)
k&~(1<<5)=C9DB(1100 1001 1101 1011)
and then (1<<2)=2^2=4,
k|(1<<2) =C9DF(1100 1001 1101 1111)
(1<<14)=2^14=16384(0100 0000 0000 0000)
k^(1<<14)=89DF(1000 1001 1101 1111)
*/

#include<stdio.h>
int main()
{
    int k=0xC9FB;
    k&=~(1<<5);
    printf("k=%x\n",k);        
    k|=(1<<2);                                //here we have to take k=C9DB
    printf("k=%x\n",k);
    k^=(1<<14);                               //and here k=C9DF
    printf("k=%x\n",k);
}

/*output:
k=c9db
k=c9df
k=89df
*/