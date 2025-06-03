#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Swap logic
    temp = a;
    a = b;
    b = temp;

    // Print new values
    printf("%d %d", a, b);

    return 0;
}
