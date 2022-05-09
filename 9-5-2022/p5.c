//switching off bits using nitwise AND and Complement Operator
//a=30(0001 1110) , mask=0x20(0000 0000 0010 0000) ~mask=1111 1111 1101 1111

#include<stdio.h>
int main()
{
    int a,bit,mask=0x20;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("a = %d\t",a);
    a=a& ~mask;                                        //& operation with complement of mask
    printf("\nAfter switching off the 5th bit, the value of a is :\n");
    printf("a= %d\t",a);
}


/*output:
Enter an integer: 30
a = 30
After switching off the 5th bit, the value of a is :
a= 30
*/
