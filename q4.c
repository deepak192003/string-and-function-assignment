// Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string:");
    fgets(str,20,stdin);

    uppercase(str);
    return 0;
}
void uppercase( char* str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if( str[i]>='a'  &&  str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}