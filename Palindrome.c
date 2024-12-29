#include <stdbool.h>

bool isPalindrome(int x) {
    int check = x;
    long long rev_num = 0;

    while (x > 0) {
        rev_num = rev_num * 10 + x % 10;
        x /= 10;
    }

    return check == rev_num;
}
