#include <stdio.h>

int main() {
    char str[50];
    scanf("%s", str);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("String length = %d\n", length);
    return 0;
}
