
#include <stdio.h>

int main() {
    int year;
    printf("Enter the year.......");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        
        printf("%d this year is leapyear",year);
    }
    else
    {
        printf("%d this year is not leapyear",year);
    }
    

    return 0;
}



