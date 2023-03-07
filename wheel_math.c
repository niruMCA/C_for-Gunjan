#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    
    float pai=3.14,rad,pari,deg_1,deg_f,deg_ff,s;
   printf("Enter the diamiter wheel");
   scanf("%f",&rad);
   pari=2*pai*(rad/2);
   deg_1=360/pari;
   
   printf("Enter distance to be travle");
   scanf("%f",&deg_f);
   deg_ff=deg_1 * deg_f;
   
   
   printf("Total Rotate Angle of wheel = %f",deg_ff);
   s=fmod(deg_ff,360);
   printf("\n Main angle %f",s);
   
   
   
   
  
   
}
