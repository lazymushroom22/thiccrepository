#include<stdio.h>

int main() {
    int a[50], n, i, j, aux = 0;

    printf("Enter how many numbers you want:\n");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nThe given array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d " , a[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    printf("\nThe sorted array using Bubble sort is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}