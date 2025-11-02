#include <stdio.h>

int main() {
    char input[100], nonAlpha[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", input); 

   
    while (input[i] != '\0') {
        if(!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))) {
            nonAlpha[j++] = input[i];
        }
        i++;
    }
    nonAlpha[j] = '\0'; 

   
    printf("Non-alphabetic characters: %s\n", nonAlpha);

    return 0;
}
