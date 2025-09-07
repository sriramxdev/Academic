#include <stdio.h>

int recursiveLinearSearch(int arr[], int size, int key, int index) {
    if (index >= size)
        return -1;
    if (arr[index] == key)
        return index;
    return recursiveLinearSearch(arr, size, key, index + 1);
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = recursiveLinearSearch(arr, n, key, 0);
    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;
}