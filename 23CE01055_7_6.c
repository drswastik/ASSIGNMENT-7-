#include <stdio.h>
#include <string.h>
void substring(char str[],int n ,char sub[],int m){
    int len=n-m,flag=0;
    for(int i=0;i<=len;i++){
        int j;
        for(j=0;j<m;j++){
            if(str[i+j]!=sub[j]){
                break;
            }
        }
        if (j==m){
            printf("The substring exists in the string");
            flag=1;
            break;
        }

    }
    if (flag==0){
        printf("The substring does not exist in the string");
    }
    return;

}
int main (){
    char str[100],sub[100];
    puts("Enter the string");
    gets(str);
    puts("Enter the substring to be searched for");
    gets(sub);
    int n=0,m=0;
    while(str[n]!='\0'){
        n++;
    }
    while(sub[m]!='\0'){
        m++;
    }
    substring(str,n,sub,m);
    return 0;

}