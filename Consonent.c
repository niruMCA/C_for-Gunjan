#include <stdio.h>

int main() {
    int i,count=0;
    char s[] ="nirupam";
   
   for(i=0;i<7;i++)
   {
       if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
       {}
       else
       {
           count=count+1;
       }
       
   }
   printf("Total Number of consonent %d",count);
    

    return 0;
}
