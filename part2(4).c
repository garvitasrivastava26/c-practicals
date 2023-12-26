// String Handling using Library Functions:
// a.	Palindrome Check for a String: Write a program to check if a string is a palindrome or not.
// b.	String Length Calculation Using Functions: Write a program to calculate the length of a string using a library functions / predefined operators.
// c.	String Concatenation: Write a program to concatenate two strings using library functions.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],str2[100];
    printf("Enter any string :");
    scanf("%s",&str);
    printf("Enter any string :");
    scanf("%s",&str2);
    char og_str[100];
    strcpy(og_str,str);
    strrev(str);
    printf("%s\n",og_str);
    printf("%s\n",str);
    if(strcmp(og_str,str)==0)
    {
        printf("STRING IS A PALINDROME\n");
    }
    else
    {
        printf("STRING IS NOT A PALINDROME\n");
    }
    printf("Length of string is = %d\n",strlen(og_str));
    printf("Concatenated strings are : %s\n",strcat(og_str,str2));
}
