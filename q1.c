// Write a function to calculate length of the string
#include<stdio.h>
int length( char str[] );
int main()
{
    int l;

    char str[10]="Deepak";
    l=length(str);
    printf("Length of the string is %d",l);
    
    return 0;
}
int length( char str[] )
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return i;
}
