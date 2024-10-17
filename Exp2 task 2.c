#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input the two numbers
    printf("Enter the start number: ");
    scanf("%d", &start);
    
    printf("Enter the end number: ");
    scanf("%d", &end);

    // Ensure that the start number is odd; if not, move to the next odd number
    if (start % 2 == 0) {
        start++;
    }

    // Loop through and sum all odd numbers between start and end
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }

    // Output the result
    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}