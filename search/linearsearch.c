#include <stdio.h>

int linearSearch(int arr[], int size, int value) {
	int i;
    for (i = 0; i < size; i++){
        if (arr[i] == value)//check if element = to the value
            return i;//return index if value is found
	}
    return -1;//return -1 if value not found
}

int main() {
    int i, size, value;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &value);

    int result = linearSearch(arr, size, value);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
