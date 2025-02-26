#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for (int i = 2; i <= n; i += 2)
        printf("%d ", i);

    printf("\nOdd numbers: ");
    for (int i = 1; i <= n; i += 2)
        printf("%d ", i);

    printf("\n");
    return 0;
}
