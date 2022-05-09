//masking: Bit masking is simply the process of storing data truly as bits, as opposed to storing it as chars/ints/floats. It is incredibly useful for storing certain types of data compactly and efficiently.

#include<stdio.h>
int main( )
{
    
 int a,bit,mask=0x30;
printf ("Enter an integer: ") ;
scanf ("%d", &a) ;
printf("a' = %d\t",a); 
if ((a&mask) ==0)
bit=0;
else
bit=1;
printf("5th bit is %d\n",bit);
}

/*output:
Enter an integer: 20
a' = 20 5th bit is 1
*/
