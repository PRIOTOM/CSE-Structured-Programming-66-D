#include <stdio.h>

int main() {
    int n, arr[100];
    int max = 0, secondMax = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    printf("Second Largest = %d\n", secondMax);
    return 0;
}
