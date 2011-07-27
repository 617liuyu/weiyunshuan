#include <stdio.h>
int main(int argc, const char *argv[])

/*取0xaa的1～4位，位数从0开始算*/
{
    unsigned int a=0xaa;
    unsigned int b=0x1e;/*1～4位取1，其余位取0*/
    unsigned int c=0;

    c=(a & b);/*把所要的四位用1保护起来，按位与付给c*/
    c>>=1;/*把所要位移放在最低位*/
    printf ("%d\n",c);

    return 0;
}
