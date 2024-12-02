
#include <stdio.h>

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr + n - 1;

    printf("Array elements in reverse order :\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr - i));
    }

    return 0;
}


OUTPUT :
Array elements in reverse order :
99 88 77 66 55 44 33 22 11
Process returned 0 (0x0)   execution time : 0.347 s
Press any key to continue.
