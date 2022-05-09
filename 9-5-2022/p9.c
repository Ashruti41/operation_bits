//Program to find whether a number is even or odd
//in this we take a=5 (0101)  mask=0x1(0001)
//so when a&mask ans will 0001(1) so it is odd.


#include<stdio.h>
int main()
{
    int num;
    int mask=0x1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num&mask)==0)
    printf("Number is even\n");
    else
    printf("Number is Odd");
}

/*output:
Enter a number: 5
Number is Odd
*/
