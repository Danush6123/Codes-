#include <stdio.h>

// Function to find GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the GCD of the two numbers
    int gcdResult = gcd(num1, num2);

    // Output the result
    printf("GCD of %d and %d is: %d\n", num1, num2, gcdResult);

    return 0;
}

