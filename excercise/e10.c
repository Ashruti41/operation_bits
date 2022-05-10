//Q10
/*num=0x1F(0001 1111) 
num>>pos=0000 0011
(num>>pos) &0001
*/

#include<stdio.h>
int main()
{
    int bit,pos=3, num=0x1F;
    bit = (num>>pos)&1;
    printf("%d",bit);
}
   
/*output:
1
*/
