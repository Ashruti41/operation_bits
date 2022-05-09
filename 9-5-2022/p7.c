//switch on all the bits in an integer variable

#include<stdio.h>
int main()
{
    int a,mask,i;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("a = %d\t",a);
    for(i=0;i<=15; i++)
    {
        mask=1<<i;
        a =a|mask;   //switch on the ith bit
    }
    printf("%d\t",a);
}

/*output:
Enter an integer: 20
a = 20  65535
*/
