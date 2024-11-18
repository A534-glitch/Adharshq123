#include <stdio.h>

void main() {
    int a[10], b[10], c[20];
    int i, j, n, m, k, size;

    // Getting the size of the first array
    printf("Enter the size of first array: ");
    scanf("%d", &n);

    // Getting the size of the second array
    printf("Enter the size of second array: ");
    scanf("%d", &m);

    // Reading the elements of the first array
    printf("\nEnter the first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reading the elements of the second array
    printf("\nEnter the second array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Display the first array elements
    printf("\nThe first array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Display the second array elements
    printf("\nThe second array elements are: ");
    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

    // Merging the arrays into c[]
    size = n + m;
    for (i = 0; i < n; i++) {
        c[i] = a[i];  // Copy elements of a[] into c[]
    }
    for (i = 0; i < m; i++) {
        c[n + i] = b[i];  // Copy elements of b[] into c[]
    }

    // Sorting the merged array using Bubble Sort (you can use more efficient algorithms like quicksort)
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (c[i] > c[j]) {
                // Swapping elements if they are in the wrong order
                k = c[i];
                c[i] = c[j];
                c[j] = k;
            }
        }
    }

    // Display the merged and sorted array
    printf("\nThe merged and sorted array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
}
