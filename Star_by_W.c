#include <stdio.h>

int main() {
   int i,j,k,s,l,f=10,t;
   printf (" the Star print\n");
   for(i=0;i<6;i++)
   
   {
      
      // printf("    ");
       for(j=0;j<i;j++)
       {
           printf(" ");
       }
       
       printf("*");
       
      
           for(l=0;l<f;l++)
           {
           
        printf(" ");
            
           }
           
         
       
        printf("*");
        for(j=0;j<i;j++)
       {
           printf(" ");
       }
       for(j=0;j<i;j++)
       {
           printf(" ");
       }
       printf("*");
       
      
           for(l=0;l<f;l++)
           {
           
        printf(" ");
            
           }
           
         
       
        printf("*");
        
        f=f-2;
        
       printf("\n");
       
       
       
       
       
   }
   
    return 0;
}
