#include<stdio.h>
int main(){
    char instr[256];
    printf("Enter the string: ");
    scanf("%s", instr);  
    for(int i = 0; instr[i] != '\0'; i++){
        if(!((instr[i] >= 65 && instr[i] <= 90) || (instr[i] >= 97 && instr[i] <= 122))){
            for(int j = i; instr[j] != '\0'; j++){
                instr[j] = instr[j+1];
            }
            i--;
        }
    }
    printf("Resulting string: %s\n", instr);
    return 0;
}