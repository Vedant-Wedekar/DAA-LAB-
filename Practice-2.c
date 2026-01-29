#include <stdio.h>
void insertionSortCase(int arr[], int n, int *comp, int *shift) {
    *comp = 0;
    *shift = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            (*comp)++;
            arr[j + 1] = arr[j];
            (*shift)++;
            j--;
        }
        if (j >= 0) {
            (*comp)++;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int best[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(best) / sizeof(best[0]);
    int avg[] = {3, 1, 4, 5, 2};
    int n2 = sizeof(avg) / sizeof(avg[0]);
    int worst[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(worst) / sizeof(worst[0]);
    int comp, shift;
    printf("=== Best Case ===\n");
    printArray(best, n1);
    insertionSortCase(best, n1, &comp, &shift);
    printf("Sorted: ");
    printArray(best, n1);
    printf("Comparisons: %d, Shifts: %d\n\n", comp, shift);
    printf("=== Average Case ===\n");
    printArray(avg, n2);
    insertionSortCase(avg, n2, &comp, &shift);
    printf("Sorted: ");
    printArray(avg, n2);
    printf("Comparisons: %d, Shifts: %d\n\n", comp, shift);
    printf("=== Worst Case ===\n");
    printArray(worst, n3);
    insertionSortCase(worst, n3, &comp, &shift);
    printf("Sorted: ");
    printArray(worst, n3);
    printf("Comparisons: %d, Shifts: %d\n", comp, shift);
    return 0;
}
