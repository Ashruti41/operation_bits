//write a function mul(num,n,err)that uses the shift operator >> and << to compute the value of num * 2^n.
//here when we take a num=2 and n=3, so 2^3=2*2*2=8 . Ans = 2*8=16



#include<stdio.h>
int main()
{
    unsigned int num,n,err=0;
    printf("Enter the number and power of 2 : ");
    scanf("%u%u",&num,&n);
    mul(num,n,err);
}
int mul(int num,int n,int err)
{
    unsigned int result=num;
    while(n>0)
    {
        num=num<<1;
        n--;
        if(num<result)
        {
            err=1; 
            break;
        }
        result = num;
    }
    if(err==1)
    printf("Overflow\n");
    else
    printf("Result = %u\n",result);
}

/*output:
Enter the number and power of 2 : 4 1
Result = 8
*/
