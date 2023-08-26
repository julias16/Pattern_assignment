#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the value of row and col: ");
    scanf("%d", &n);
    for(j=1; j<=n; j++)
    {
        printf("%c", j+64);
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("%c", i+64);
        for(j=1; j<=(n-2); j++)
        {
            printf(" ");
        }
        printf("%c\n", j+65);
    }
    for(j=1; j<=n; j++)
    {
        printf("%c", j+64);
    }
    printf("\n");
    return 0;
}
