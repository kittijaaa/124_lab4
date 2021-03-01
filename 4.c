#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  char x[1000] , d[11][5]={"i", "of", "the","on", "at", "for", "with", "a", "an" , "in","and" } ;
  char *l;
  int i=0,j,k=0;
  scanf("%[^\n]",x);
  l= strtok(x," ");
  while(l != NULL) {
        for(j=0;j<11;j++)
          if(strcmp(l,d[j]))
            k++;
        if(k==11||i==0)
          printf("%c",toupper(l[0]));
    l = strtok(NULL," ");
    i++;
    k=0;
}
return 0;
}
