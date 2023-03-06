#include <stdio.h>

int main()
{
    int number,i,choice;
    int arr[20],j,temp,k,brr[25],count=0;
    printf("How many elements you want ? :\n");
    scanf("%d",&number);
    printf("Enter numbers : \n");
    for(i=0;i<number;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to query :");
    scanf("%d",&choice);
    for(i=0;i<number;i++)
    {
        for(j=i+1;j<number;j++)
        {
            temp=0;
            count=0;
            
           for (k=0;k<number;k++)
           {
               temp=temp+arr[j+k];
               brr[count]=arr[j+k];
               
            if(arr[i]+temp==choice)
            {
                printf("%d ",arr[i]);
                for(int l=0;l<=count;l++)
                
                {
            printf("%d ",brr[l]);
               } 
           printf("\n");
           break;
           }
           
         count++;   
        }
     }
        
    }

    return 0;
}
