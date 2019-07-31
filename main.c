#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


int occ(char c, char str[])

{
    int result=0;
    int i;
    for(i=0;i<strlen(str);i++)
    {
       if(c==str[i])
        { result++;  }
    }
    return result;
}

int main(void)
{
    /*char str[100];
    scanf("%s",str);*/
    char str[] = "C language is a very powerful language that allows programmers to fully control their computers" ;
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++)
    {
        char c = str[i];
        c = tolower(c);
        str[i] = c ;
    }
  /*  First Solution */
   bool seen[256];
    for(i=0;i<256;i++)
    {
        seen[i] = false;
    }
    for(i=0;i<len;i++)
    {
        char c = str[i];
        if(seen[(int)c]==true)
            continue;
        seen[(int)c]=true;
        int occs = occ(c,str);
        if(occs>0)
           printf("'%c' : %d | ",c,occs);
    }

    /* Second Solution */

  /*  int seen [256];
    for(i=0;i<256;i++)
      seen[i]=0;

    for(i=0;i<len;i++)
    {
        char c=str[i];
        seen[(int)c]++;
    }
    for(i=0;i<256;i++)
    {
        int oc = seen[i];
        if(oc>0)
            printf("'%c' : %d | ",i,oc);
    }*/
    return 0;
}
