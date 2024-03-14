#include <stdio.h>
#include <string.h>

void rstring(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    rstring(str, start + 1, end - 1);
}

int main() {
    char instr[100];
    
    printf("Enter a string: ");
    scanf("%s", instr);
    getchar(); 
    
    rstring(instr, 0, strlen(instr) - 1);
    printf("Reversed string: %s\n", instr);
    
    return 0;
}