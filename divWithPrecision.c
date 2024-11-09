//
// Created by linho on 2024-09-12.
//

#include<stdio.h>

/**
 * Takes the user's inputs as two integers and calculate the result
 * by dividing the first by the second input. The divisor must be checked if it is zero.
 *
 * @return the result as a float with precision to 3 decimal points.
 */
int main(void) {

    int x, y; // Stores the user's inputs
    float result; // Stores the result

    printf("Enter the value for the first number x: \n");
    scanf("%d", &x);
    printf("Enter the value for the second number y: \n");
    scanf("%d", &y);

    if (y == 0) {
        printf("Division by Zero is not allowed.");
    }
    else {
        // Cast int to float before compute the result
        result = (float)x / y;
        printf("x / y = %d / %d = ", x, y); // Prints out the user's inputs
        printf("%.3f\n", result);           // Prints out the result to three decimal points.
    }

    return 0;
}