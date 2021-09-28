#include<stdio.h>

int main()
{
    char c;
    scanf("%c",&c);

    if((c=='y') && (c=='Y'))
    {
     printf("yes");
    }

    else if((c=='n') || (c=='N'))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}