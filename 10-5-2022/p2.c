//swap first 8 bits with the lasr 8 bits in a 16-bit integer

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter number in hexadecimal : ");
    scanf("%x",&num);
    printf("Before swapping , num = %x\n",num);
   // bit_pattern(num);
    num=(num<<8)|((num>>8) & 0x00FF);
    printf("After swapping, num = %x\n",num);
    
}

/*output:
Enter number in hexadecimal : 00010001
Before swapping , num = 10001
After swapping, num = 10001000
*/

