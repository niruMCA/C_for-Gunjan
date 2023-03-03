#include <stdio.h>
#include<string.h>

int main() {
    
    char str[]="axoxbckkghkkhgcbaaa";
    int l=strlen(str);
    int del=2;

    for(int p=0;p<l;p++)
    {
        if(str[p]==str[p+1])
        {
            if ( del >= strlen(str)) {
                
         }
    else {
        for (int i = p; i < strlen(str) - del; i++) {
            str[i] = str[i + del];
        }
        str[strlen(str) - del] = '\0';
        l-=2;
        p-=2;
        
    }
        }
        
        
    }
    printf("%s",str);
}
