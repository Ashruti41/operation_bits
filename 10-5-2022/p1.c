//write a program that inputs a binary pattern less than or equal to 16 bits and coverts it into integer.
//here we will give one hexadecimal pattern (20=00010100) and it checks when there is 0 bit it goes to shift left and when 1 will come it adds it and count and give integer.

#include <stdio.h>

int main() {
    char bit;
    int i,num=0;
    printf("Enter any bit pattern less than or equal to 16 bits :\n");
    for(i=0; i<=15; i++)
    {
        bit=getchar();
        if(bit=='0')
        num=num<<1;
        else if(bit=='1')
        num=(num<<1)+1;
        else
        break;
    }
    printf("Hexadecimal : %x\n",num);
    printf("Decimal : %d\n",num);
    return 0;
}

/*output:
Enter any bit pattern less than or equal to 16 bits :
00010100
Hexadecimal : 14
Decimal : 20
*/
