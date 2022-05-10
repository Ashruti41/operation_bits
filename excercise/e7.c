//q7
//prints the binary pattern of an integer, we have taken the marks in an array.


#include<stdio.h>
int main()
{
    unsigned int arr_marks[ ]={0x1,0x2,0x4,0x8,0x10,0x20,0x40,0x80,0x100,0x200,0x400,0x800,0x1000,0x2000,0x4000,0x4000};
    int i, num=0x38F;
    for(i=1; i>=0; i--)
    num&arr_marks[i] ? printf("1") : printf("0");
    printf("\n");
}

/*output:
11
*/
