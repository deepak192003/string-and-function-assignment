// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int ispalindrome( char str[]);
int main()
{
    char str[20];
    fflush(stdin);
    printf("Enter string:");
    fgets(str,20,stdin);

    if(ispalindrome(str))
        printf("yes ");
        else
        printf("No");
}
int ispalindrome( char str[])
{
    int i,l,j;
    
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
       if( str[i]!=str[l-1-i])
       {        
         return 0;
       }
    }
    return 1;
}
    