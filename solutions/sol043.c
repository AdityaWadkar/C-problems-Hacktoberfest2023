#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The first %d natural numbers are:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("\n");
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
