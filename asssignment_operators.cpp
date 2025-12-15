#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    // Demonstrating assignment operators
    b = a;
	 b += 5;   // add and assign
    printf("a += 5 gives %d\n", b);

    b = a;
    b -= 3;   // subtract and assign
    printf("a -= 3 gives %d\n", b);

    b = a;
    b *= 2;   // multiply and assign
    printf("a *= 2 gives %d\n", b);

    b = a;
    b /= 2;   // divide and assign
    printf("a /= 2 gives %d\n", b);

    b = a;
    b %= 2;   // modulus and assign
    printf("a %%= 2 gives %d\n", b);

    return 0;
}

