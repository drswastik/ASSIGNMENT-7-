#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    puts("Enter a string");
    gets(str);
    
    int j=0,m=0;
    while(str[j]!='\0'){
        j++;
    }
    for(int i=0,k=j-1;i<k;i++,k--){
        if(str[i]!=str[k]){
            printf("not a palindrome");
            m=1;
            break;
        }
    }
    if (m==0){
        printf("palindrome");
    }
    return 0;

}