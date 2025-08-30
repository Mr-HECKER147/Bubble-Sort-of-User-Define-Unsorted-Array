#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter no. of elements you want in the array: ");
    
    int no;
    scanf("%d",&no);
    int arr[no];
    printf("Enter the array: ");
    for(int a=0;a<no;a++){scanf("%d",&arr[a]);}

    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nOriginal array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    getchar();
    getchar();
    return 0;
}

