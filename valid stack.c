#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isValidString(const char *str) {
    for (size_t i = 0; i < strlen(str); i++) {
        if (!isalpha(str[i]) && !isspace(str[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove the newline character from input
    input[strcspn(input, "\n")] = '\0';
    
    if (isValidString(input)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }
    
    return 0;
}
