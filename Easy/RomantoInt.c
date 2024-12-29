#include <string.h>
#include <stddef.h>

int romanToInt(char* s) {
    char romans[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int romansindex[] = {1, 5, 10, 50, 100, 500, 1000};
    size_t length = strlen(s); 
    int sum = 0;

    for (int i = 0; i < length; i++) {
        int current_value = 0;
        int next_value = 0;

        for (size_t j = 0; j < sizeof(romans) / sizeof(romans[0]); j++) {
            if (s[i] == romans[j]) {
                current_value = romansindex[j];
            }
            if (i + 1 < length && s[i + 1] == romans[j]) {
                next_value = romansindex[j];
            }
        }

        if (current_value < next_value) {
            sum -= current_value;
        } else {
            sum += current_value;
        }
    }

    return sum;
}
