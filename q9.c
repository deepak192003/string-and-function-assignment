//write a function to count in the given string
#include<stdio.h>
int words(char str[]);
int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str,50,stdin);
int count_words;
    count_words=words(str);
    printf("Words in the given string is %d",count_words);
    return 0;
}
int words(char str[])
{
    int i;
    int count=0;
   for(i=0;str[i]!='\0';i++)
    {
         if(  str[i]==' '  || str[i]=='\n'||  str[i]=='\t')
             {
                   count++;
             }
    }
    return count;
}