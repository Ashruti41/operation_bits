//q6
//here ans will remain same as input


#include<stdio.h>
int main()
{
    int x=0x1F;
    x<<2;
    printf("%x ",x);
    x>>2;
    printf("\n%x ",x);
}
/*output:
1f
1f
*/

//if we include x=x<<2 then ans will change.
#include<stdio.h>
int main()
{
    int x=0x1F;
    x=x<<2;
    printf("%x ",x);
    x=x>>2;
    printf("\n%x ",x);
}
/*output:
7c
1f
*/
