#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Finding the largest number
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Finding the smallest number
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
