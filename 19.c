#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0, count = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count number of digits
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    // Calculate sum of powers of digits
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
