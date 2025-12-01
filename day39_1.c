// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, isDistinct = 1;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    if(isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
