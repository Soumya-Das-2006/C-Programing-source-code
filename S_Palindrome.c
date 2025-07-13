#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    int flag = 1;
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}