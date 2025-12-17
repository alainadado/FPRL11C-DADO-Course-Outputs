#include <stdio.h>

int sum_integers(int count) {
    int number, sum = 0;
    if (count > 0) {
        printf("Enter number %d: ", 11 - count);
        scanf("%d", &number);
        sum = number + sum_integers(count - 1);
    }
    return sum;
}

int main() {
    int total_sum;
    total_sum = sum_integers(10);
    printf("The sum of the 10 integers is: %d", total_sum);
    return 0;
}