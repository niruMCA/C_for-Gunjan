#include <stdio.h>
#include<string.h>

int main() {
    
    char str[]="bbcddce";
    int l=strlen(str);
    int del=2;

    for(int p=0;p<l;p++)
    {
        if(str[p]==str[p+1])
        {
            if ( del >= strlen(str)) {
        printf("Invalid deletion length.\n");
    } else {
        for (int i = p; i < strlen(str) - del; i++) {
            str[i] = str[i + del];
        }
        str[strlen(str) - del] = '\0';
        printf("String after deleting %d characters: %s\n", del, str);
    }
        }
        
        
    }
    printf("%s",str);
}
