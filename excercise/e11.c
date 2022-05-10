//Q11
//num=0xA0DF(1010 0000 1101 1111)

#include<stdio.h>
int main()
{
    int i,num=0xA0DF;
    for(i=15; i>=0; i--)
    printf("%d",(num>>i)&1);
}
  
/*OUTPUT:
1010000011011111
*/
