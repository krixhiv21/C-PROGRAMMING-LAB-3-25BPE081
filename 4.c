#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
