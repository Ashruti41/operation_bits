//swap the values of 2 variables using bitwise XOR.


#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter values for x and y  : ");
    scanf("%d %d",&x,&y);
    printf("x =%d, y=%d\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x =%d, y=%d\n",x,y);
    
}

/*output:
Enter values for x and y  : 2 5
x =2, y=5
x =5, y=2
*/
