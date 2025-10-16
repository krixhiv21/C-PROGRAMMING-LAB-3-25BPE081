#include <stdio.h>

int main() {
    int n, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        if(digit > largest)
            largest = digit;
        n /= 10;
    }

    printf("The largest digit is %d\n", largest);
    return 0;
}
