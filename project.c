#include <stdio.h>

// Function to take matrix input
void inputMatrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("Enter elements for matrix %s (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("Matrix %s:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input size of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input matrices
    inputMatrix(rows, cols, matrix1, "A");
    inputMatrix(rows, cols, matrix2, "B");

    // Add matrices
    addMatrices(rows, cols, matrix1, matrix2, result);

    // Display matrices
    displayMatrix(rows, cols, matrix1, "A");
    displayMatrix(rows, cols, matrix2, "B");
    displayMatrix(rows, cols, result, "Result");

    return 0;
}
