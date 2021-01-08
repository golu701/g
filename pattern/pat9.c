/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,num;
    printf("Enter no. of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}