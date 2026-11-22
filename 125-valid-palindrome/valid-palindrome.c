
#include <stdbool.h>
#include <string.h>

bool notValid(char ch) {
    return !((ch >= 'A' && ch <= 'Z') ||
             (ch >= 'a' && ch <= 'z') ||
             (ch >= '0' && ch <= '9'));
}

bool isPalindrome(char* s) {

    int i = 0;
    int j = strlen(s) - 1;

    while(i < j) {

        char x = s[i];
        char y = s[j];

        if(notValid(x)) {
            i++;
            continue;
        }

        if(notValid(y)) {
            j--;
            continue;
        }

        if(x >= 'A' && x <= 'Z') x += 32;
        if(y >= 'A' && y <= 'Z') y += 32;

        if(x != y)
            return false;

        i++;
        j--;
    }

    return true;
}
