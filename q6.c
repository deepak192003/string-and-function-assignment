// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    fgets(str,20,stdin);
    alphanumeric(str);
    return 0;
}
void alphanumeric( char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(  (str[i]>='a'&& str[i]<='z')|| (str[i]>='A'&&str[i]<='Z') || (str[i]>='0'&&str[i]<='9'))
        {
            printf("Yes the given string is alphanumeric");
            break;
        }
    }
}