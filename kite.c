#include<stdio.h>
int main()
{
    int i, j, m = 2, a, n;
    printf("Enter the number: ");
    scanf("%d",&a);

    for(i=1;i<2*a;i++)
    {
        n = i;
        if(i>a)
        {
            i=i-m;
            m+=2;
        }
    for(j=1;j<a+i;j++)
    {
        if(j==a-i+1||j==a+i-1)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
    i = n;
    }
return 0;
}
