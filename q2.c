#include <stdio.h>

// UDF to print cubes of all elements using pointer
void printCubes(int *arr, int size) {
    printf("Cubes of all elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int num = *(arr + i * size + j);
            printf("%d\t", num * num * num);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printCubes(&arr[0][0], size);

    return 0;
}
