Sum of all digit:


#include <stdio.h>
int sum=0;
int rec(int num)
{
    int d,e;
    d=num%10;
    e=num/10;
    sum=sum+d;

     if(e!=0)
     {
         rec(e); 
     }
     else
     {
    return(sum); 
     }
}



int main() {
    
int s,d;

    s=rec(54617);
    printf(" Sum of all digit is =%d ",s);
    
}
