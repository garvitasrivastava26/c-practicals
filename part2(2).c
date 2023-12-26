// Write a program to perform multiplication of two 2-D arrays.
#include<stdio.h>
void printMatrix(int m, int n, int p, int q, int a[m][n], int b[p][q]);
void matrixMultiply(int m, int n, int p, int q, int a[m][n], int b[p][q]);
void main(){
    int m,n,p,q;
    printf("Enter the number of rows of first matrix : " );
    scanf("%d",&m);
    printf("Enter the number of columns of first matrix : ");
    scanf("%d",&n);
    printf("Enter the number of rows of second matrix : " );
    scanf("%d",&p);
    printf("Enter the number of columns of second matrix : ");
    scanf("%d",&q);
    int a[m][n],b[p][q];
    printf("Enter the elements of First matrix :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Second Matrix :\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("Enter the element b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printMatrix(m,n,p,q,a,b);
    matrixMultiply(m,n,p,q,a,b);
}
void printMatrix(int m, int n, int p, int q, int a[m][n], int b[p][q]){
    int i,j;
    printf("First Matrix-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("Second Matrix-\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
}
void matrixMultiply(int m, int n, int p, int q, int a[m][n], int b[p][q]){
    int res[m][q];
    if(n==p)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("THE RESULTANT MATRIX IS :\n");
        for(int i=0;i<m;i++)
        {    
            for(int j=0;j<q;j++)
            {
                printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nTHESE MATRICES CANNOT BE MULTIPLIED");
    }
}