//
// Created by linho on 2024-09-12.
//
#include <stdio.h>

/**
 * Calculate the factorial of the first ten natural numbers
 * @return factorial
 */
int main(void) {
    int n = 10;         // The first ten natural numbers
    int factorial = 1;  // Storing the factorial value, default to 1

    printf("Number \t\tFactorial\n");
    printf("-------------------------\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\t\t", i);
        factorial *= i;     // update factorial value for i-th value: i! = i(i - 1)!

        printf("%d\n", factorial);
    }

    return 0;
}