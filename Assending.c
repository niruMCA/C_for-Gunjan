#include <stdio.h>

int main() {
   int i,j,c,d,a[6]={10,51,4,75,8,9};
   for(i=0;i<6;i++)
   {
   for(j=0;j<6;j++)
   {
       if(a[j]>a[j+1])
       {
           c=a[j+1];
           a[j+1]=a[j];
           a[j]=c;
           
       }
   }
   }
   
   for(i=0;i<6;i++)
   {
       printf("%d  ",a[i]);
       
   }

    return 0;
}
