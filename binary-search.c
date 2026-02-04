#include <stdio.h>

int main() {
    int arr[] = {11, 23, 25, 34, 38, 45, 55, 56, 67, 69, 75};
    int first = 0;
    int last = sizeof(arr)/sizeof(arr[0]) - 1;
    int target = 67;

    while (first <= last) {
        int mid = (first + last) / 2;

        if (arr[mid] == target) {
            printf("%d", mid);
            break;
        } else if (target < arr[mid]) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    return 0;
}