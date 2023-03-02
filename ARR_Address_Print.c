#include <stdio.h>
#include<string.h>
//#include<conio.h>

void main() {
    
    char x[]="hii" ;
    int p=strlen(x);
    printf("%d ",p);
    
   int *y=&x;
    printf("%p",y);
    //x='10';
    printf("\n %p",y);
    
