#include<stdio.h>
int main(){
    char instr[256],ch;
    printf("Enter the string:");
    scanf("%s",&instr);
    printf("Enter the character to be searched for:");
    scanf(" %c",&ch);
    int count=0;
    for(int i=0;instr[i]!='\0';i++){
        if(instr[i]==ch){
            count++;
        }
    }
    printf("The frequency of entered character in the given string is %d",count);
    return 0;
}