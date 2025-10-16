#include <stdio.h>

int main() {
    int i;
    printf("First 10 odd numbers are:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d ", 2*i - 1);
    }
    return 0;
}
