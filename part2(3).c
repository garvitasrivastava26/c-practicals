// Write a program to reverse a string (array of char) without using string library functions.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,len=0;
    printf("Enter any string: \n");
    scanf("%s",&str); 
    for(i=0; str[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of string is = %d",len);
    char newstr[100];
    for(i=0; i<len; i++)
    {
        newstr[i]=str[len-i-1];
    }
    printf("\nReversed string is: %s",newstr);
    
}