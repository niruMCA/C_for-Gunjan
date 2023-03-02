
#include <stdio.h>

int main() {
    
    int p,i,j,count=0,a[10]={12,7,85,72,8,65,33,24,16,22};
    
    for(i=0;i<10;i++)
    {
        p=a[i];
        for(j=2;j<(p/2);j++)
        {
            if((a[i]%j)!=0)
            {
               
                
            }
            else
            {
              count=count+1;   
            }
        }
        
        if(count>0)
        {
            
        }
        else
        {
            printf(" prime number is %d\",a[i]);
        }
        count =0;
    }

    return 0;
}
