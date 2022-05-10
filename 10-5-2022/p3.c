//function that rotetes bits by n positions.
/*initial pattern: 0000 0000 0000 1101
After rotating right by 4 bits: 1101 0000 0000 0000
*/


#include<stdio.h>
int main()
{
    int num,n,i ,bit;
    printf("Enter number in hexadecimal : ");
    scanf("%d",&num);
    printf("Enter number of positions to be rotated : ");
    scanf("%d",&n);
    n=n%16;
    num=rotate_right(num,n);
    printf("Number after right rotation is : %x\n",num);
    num=rotate_left(num,n);
    printf("Number after left rotation is : %x\n",num);
}
rotate_right(int num, int n)
{
    int i, lsbit;
    for(i=1; i<=n; i++)
    {
        lsbit=num&1?1:0;
        num=num>>1;
        if(lsbit==0)
        num=num&~(1<<15);
        else
        num =num|(1<<15);
    }
    return num;
}

rotate_left(int num, int n)
{
    int i, msbit;
    for(i=1; i<=n; i++)
    {
        msbit=num& (1<<15) ? 1:0;
        num=num<<1;
        if(msbit==0)
        num=num&~1;
        else
        num =num|1;
    }
    return num;
}

/*output:
Enter number in hexadecimal : 00011101
Enter number of positions to be rotated : 1
Number after right rotation is : 95ae
Number after left rotation is : 12b5d
*/
