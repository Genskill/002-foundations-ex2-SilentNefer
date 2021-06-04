#include <stdio.h>
void pyth(float, float, float);

void pyth(float num1, float num2, float num3)
{
    float sum;
    sum=(num1*num1)+(num2*num2);
    if (sum==(num3*num3))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

int main()
{
    float a, b, c, num1, num2, num3;
    printf("side 1 ");
    scanf("%f", &a);
    printf("side 2 ");
    scanf("%f", &b);
    printf("side 3 ");
    scanf("%f", &c);
    
    if (a<b)
    {
        if (b<c)
        {
            num3=c;
            num1=a;
            num2=b;
            pyth(num1, num2, num3);
        }
        else if (b>c)
        {
            num3=b;
            num1=a;
            num2=c;
            pyth(num1, num2, num3);
        }
        else
        {
            printf("No");
        }
        
    }
    else if (a>b)
    {
        if(a>c)
        {
            num3=a;
            num2=b;
            num1=c;
            pyth(num1, num2, num3);
        }
        else if (c>a)
        {
            num3=c;
            num1=a;
            num2=b;
            pyth(num1, num2, num3);
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
}
