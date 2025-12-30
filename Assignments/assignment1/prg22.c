#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Pattern 1\n");
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 2\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 3\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 4 \n");
        for(i=1;i<=5;i++)
        {
        for(j=5;j>=i;j--)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 5 \n");
        for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 6 \n");
        for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 7 \n");
        for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(k=i+1;k>=1;k--)
        {
            printf(" ");
        }
        for(j=4;j>=i;j--)
        {
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}