//Masking Using Bitwise OR 
//in bitwise OR operation when ther is 1 that time value remain 1 but when 0 value that time original value can not change.
//a=a|mask


#include<stdio.h>
int main()
{
    int a,bit,mask=0x20;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("a = %d\t",a);
    a=a|mask;
    printf("\nAfter switching on 5th bit, the value of a is: \n");
    printf("a= %d\t",a);
}

/*output:
Enter an integer: 30
a = 30
After switching on 5th bit, the value of a is: 
a= 62
*/
