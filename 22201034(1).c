#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the value of row and col: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==j)
                printf("1");
            else if(i%2==0 && j%2==0)
                printf("1");
            else if(i%2!=0 && j%2!=0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
