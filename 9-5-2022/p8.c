//printing the binary pattern of a 16 bit integer
/*in 1st iteration mask is : 1000 0000 0000 0000 
in 2nd iteration mask is : 0100 0000 0000 0000
.......
int last itration mask is : 0000 0000 0000 0001
*/


#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    bit_pattern(a);
}

bit_pattern(int a)
{
    int i,mask;
    for(i=15; i>=0;i--)
    {
        mask=1<<i;
        if((a&mask)==0)
        printf("0");
        else
        printf("1");
    }
    printf("\n");
}

/*output:
Enter an integer: 30
0000000000011110
*/
