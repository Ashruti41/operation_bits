//test any bit in an integer
//here i take 20 as a integer
//a=20(0001 0100)


#include<stdio.h>
int main()
{
    int a,bit,mask,bitposition;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter the bit position: ");
    scanf("%d",&bitposition);
    mask=1<<bitposition;
    printf("a = %d\t",a);
    if((a&mask)==0)
    bit=0;
    else
    bit=1;
    printf("The bit at position %d is %d\n",bitposition,bit);
}

/*output:
Enter an integer: 20
Enter the bit position: 4
a = 20  The bit at position 4 is 1
or
Enter an integer: 20
Enter the bit position: 3
a = 20  The bit at position 3 is 0
*/
