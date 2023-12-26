// Write a program to implement linear search in a 1-D array.
#include <stdio.h>
void main()
{
    int len,n,count=0;
    printf("Enter the length of the array : ");  
    scanf("%d",&len);
    int a[len];
    printf("Enter the array-\n");
    for(int i=0;i<len;i++)
    {
        printf("Enter the element a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched in the array : ");
    scanf("%d",&n);
    printf("Array entered is -\n");
    for(int i=0;i<len;i++)
    {
        printf("%d  ",a[i]);
    }
    for(int i=0;i<len;i++)
    {
        if(a[i]==n)
        {
            count ++;
        }

    }
    if(count==0)
    {
        printf("\nThe number %d is not present in the array.",n);
    }
    else
    {
        printf("\nThe number %d is present in the array.",n);
    }
}