#include <stdio.h>

// Function prototypes
void A(int arr[], int i, int counts[], int num, int size);
void B(int arr[], int i, int counts[], int num, int size);
void C(int arr[], int i, int counts[], int num, int size);

int main() {
    int arr[] = {1, 2, 3, 5, 5, 5, 7, 8, 9, 10, 1111, 2, 34, 4, 4, 4};
    int num = 5;
    int i = 0;
    int size = sizeof(arr) / sizeof(arr[0]); 
    int counts[3] = {0, 0, 0};

    if (arr[i] > num) {
        A(arr, i, counts, num, size);
    } else if (arr[i] == num) {
        B(arr, i, counts, num, size);
    } else {
        C(arr, i, counts, num, size);
    }

    printf("Count of A: %d\n", counts[0]);
    printf("Count of B: %d\n", counts[1]);
    printf("Count of C: %d\n", counts[2]);

    return 0;
}

void A(int arr[], int i, int counts[], int num, int size) {
    counts[0]++;
    i++;
    if (i < size) {
        if (arr[i] > num) {
            A(arr, i, counts, num, size);
        } else if (arr[i] == num) {
            B(arr, i, counts, num, size);
        } else {
            C(arr, i, counts, num, size);
        }
    }
}

void B(int arr[], int i, int counts[], int num, int size) {
    counts[1]++;
    i++;
    if (i < size) {
        if (arr[i] > num) {
            A(arr, i, counts, num, size);
        } else if (arr[i] == num) {
            B(arr, i, counts, num, size);
        } else {
            C(arr, i, counts, num, size);
        }
    }
}

void C(int arr[], int i, int counts[], int num, int size) {
    counts[2]++;
    i++;
    if (i < size) {
        if (arr[i] > num) {
            A(arr, i, counts, num, size);
        } else if (arr[i] == num) {
            B(arr, i, counts, num, size);
        } else {
            C(arr, i, counts, num, size);
        }
    }
}
