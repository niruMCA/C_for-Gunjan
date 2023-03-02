// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
//#include<conio.h>

void main() {
    
    int n,m,i,j,a[50][50],s[100],k,b=0,o;
    printf("Enter how many number of row");
    scanf("%d",&n);
    printf("Enter number of colum");
    scanf("%d",&m);
    
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}


printf(" Previous 2D array is -\n");
    for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("  %d  ",a[i][j]);
    }
    printf ("\n");
}
printf("Now array is - \n");

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        s[b]=a[i][j];
        
           b=b+1;
        }
       
    }
  


for(o=0;o<n*m;o++)
{
    
    printf("%d ",s[o]);
}
}
