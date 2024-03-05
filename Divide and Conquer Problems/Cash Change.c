#include <stdio.h>
int main()
{
    int num, one=0, five=0, ten=0, fifty=0, one_hundred=0, five_hundred=0;

    scanf("%d", &num);

    while(num>0)
    {

        if(num>=500)
        {
            five_hundred++;
            num=num-500;
        }
        else if(num>=100)
        {
            one_hundred++;
            num=num-100;
        }
        else if(num>=50)
        {
            fifty++;
            num=num-50;
        }
        else if(num>=10)
        {
            ten++;
            num=num-10;
        }
        else if(num>=5)
        {
            five++;
            num=num-5;
        }
        else if(num>=1)
        {
            one++;
            num=num-1;
        }
    }

    int i;
    for(i=0; i<one; i++)
    {
        printf("1 ");
    }
    for(i=0; i<five; i++)
    {
        printf("5 ");
    }
    for(i=0; i<ten; i++)
    {
        printf("10 ");
    }
    for(i=0; i<fifty; i++)
    {
        printf("50 ");
    }
    for(i=0; i<one_hundred; i++)
    {
        printf("100 ");
    }
    for(i=0; i<five_hundred; i++)
    {
        printf("500 ");
    }

    return 0;
}
