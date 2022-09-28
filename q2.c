// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
void reverse( char str[]);
int main()
{
    char str[10];
    printf("Enter string");
    fgets(str,10,stdin);
    reverse(str);
}
void reverse( char str[])
{
    int l;
    l=strlen(str);
    int i;
    for(i=l-1;i>=0;i--)
{
    printf("%c",str[i]);
}
}