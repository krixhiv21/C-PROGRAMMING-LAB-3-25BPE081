#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sqrtValue;

    printf("Enter a number: ");
    scanf("%d", &n);

    sqrtValue = sqrt(n);

    if(sqrtValue == (int)sqrtValue)
        printf("%d is a perfect square.\n", n);
    else
        printf("%d is not a perfect square.\n", n);

    return 0;
}
