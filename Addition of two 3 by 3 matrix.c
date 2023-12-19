#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,r=0;
    int a[3][3],b[3][3],s[3][3];

	printf("Enter the Elements of the first matrix: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
	printf("Enter the Elements of the second matrix: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
