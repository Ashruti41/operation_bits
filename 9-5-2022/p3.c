//bitwise XOR: when 1 is coming value will inverted and for 0 value remain as it is.
//here in this code first start XOR with a=30 mask=0x20 .
//a=0001 1110  mask=0010 0000
//a=a^mask     


#include<stdio.h>
int main()
{
    int a,bit,mask=0x20;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("a = %d\t",a);
    a=a^mask;                                        //ans=0011 1110(62)
    printf("a = %d\t",a);
    a=a^mask;                                        //ans=0001 1110(30)
    printf("a= %d\t",a);
}

/*output:
Enter an integer: 30
a = 30  a = 62  a= 30
*/
