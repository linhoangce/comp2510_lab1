//
// Created by linho on 2024-09-12.
//

#include <stdio.h>

/**
 * Calculate every fifth triangular numbers until the 50-th numbers
 * using the formula: n(n + 1) / 2
 * @return a table displaying every 5th triangular number
 */
int main(void) {
    int triangularNum = 0;  // Storing the triangular number

    printf("i-th Triangular Number \t\tTriangular Number\n");
    printf("-------------------------------------------------\n");
    for (int i = 5; i <= 50; i += 5) {     // increment by 5 to find every 5th triangular number element
        triangularNum = (i * (i + 1) / 2); // formula to compute the triangular number

        printf("%d\t\t\t\t%d\n", i, triangularNum);
    }

    return 0;
}