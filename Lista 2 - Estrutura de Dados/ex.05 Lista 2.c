#include <stdio.h>

void decimal(int decimal) {
    if (decimal > 0) {
        decimal(decimal / 2);
        printf("%d", decimal % 2);
    }
}
