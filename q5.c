// Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
void lowercase( char *str);
int main()
{
    char str[20];
    printf("Enter string:");
    fgets(str,20,stdin);
    lowercase(str);
    return 0;
}
void lowercase( char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        str[i]=str[i]+32;
    }
    printf("%s",str);
}