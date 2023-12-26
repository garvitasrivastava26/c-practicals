// Write a program to perform addition of two 2-D arrays (matrices).
#include <stdio.h>
void printMatrix(int size,int arr[][size],int brr[][size]);
void addMatrix(int size, int a[][size],int b[][size]);
int main(){
    int i,j,size;
    printf("Enter the size of both matrices-");
    scanf("%d",&size);
    int arr[size][size];
    int brr[size][size];
    printf("Enter first array-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second array-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("enter b[%d][%d]: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printMatrix(size,arr,brr);
    addMatrix(size,arr,brr);
    
    return 0;
}
void printMatrix(int size,int arr[][size],int brr[][size]){
    int i,j;
    printf("FIRST MATRIX:\n");
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }
    printf("SECOND MATRIX:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",brr[i][j]);

        }
        printf("\n");
    }
}
void addMatrix(int size, int a[][size],int b[][size]){
    int i,j;
    printf("addition of two matrices-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
