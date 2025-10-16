#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        factorial *= i;
        i++;
    } while(i <= n);

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}
