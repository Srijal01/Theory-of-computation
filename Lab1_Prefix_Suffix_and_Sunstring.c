//WAP to find the prefix, sufix and the substring from the given string.
#include<stdio.h>
#include<string.h>
void findprefix(char str[]);
void findsuffix(char str[]);
void findsubstring(char str[],int,int);
int main( )
{
    char str[20];
    int i,j;
    printf("\nEnter the string:");
    gets(str);
    printf("\nPrefix");
    findprefix(str);
    printf("\nSuffix");
    findsuffix(str);
    printf("\nEnter the value for i and j for substring:");
    scanf("%d%d",&i,&j);
    findsubstring(str,i,j);
    return 0;
}
void findprefix(char str[])
{
    int i,j;
    char prefix[20];
    for(i=strlen(str);i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            prefix[j]=str[j];
        }
        prefix[j]='\0';
        printf("\n %s",prefix);
    }
}
void findsuffix(char str[])
{
    int i,j,k;
    char suffix[20];
    for(i=0;i<=strlen(str);i++)
    {
        k=i;
        for(j=0;j<strlen(str);j++)
        {
            suffix[j]=str[k];
            k++;
        }
        suffix[j]='\0';
        printf("\n %s",suffix);
    }
}
void findsubstring(char str[],int x,int y)
{
    char substr[20];
    int k=0;
    for(int i=x-1;i<y;i++)
    {
        substr[k]=str[i];
        k++;
    }
    substr[k]='\0';
    printf("\n Substring:\n %s",substr);
}