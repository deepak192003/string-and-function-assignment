// Write a function to compare two strings.
#include<stdio.h>
int compare(const char* str1,const char *str2);
#include<string.h>
int main()
{
    char str1[10]="Deepak";
    char str2[10]="Kumar";
   compare(str1,str2);
   
    return 0;
}
int compare(const char* str1,const char *str2)
{
    int value;
    value=strcmp( str1,str2);
    if( value==0)
    {
        printf("Both string are same---");
    }
   else
   {
    printf("Both string are different---");
   }

}