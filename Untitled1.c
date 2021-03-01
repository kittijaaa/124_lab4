#include<stdio.h>
#include<string.h>
int main()
{
 char x[200];
 int i=0;
 scanf("%s",x);
 for(i=0;x[i]!='\0';i++)
 {
     if(x[i] != x[i+1])
     {
        if(x[i]!=' ')
        printf("%c",x[i]);
     }
 }
 return 0 ;
}



