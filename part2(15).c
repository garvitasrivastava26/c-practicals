// Write a program to calculate the sum of diagonal elements of a 2-D square matrix using a function.
#include<stdio.h>
void sumOfDiagonal(int n, int a[n][n])
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of diagonal is = %d",sum);
}
void main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    sumOfDiagonal(n,a);
}