#include <stdio.h>

int main() {
    int i, num, sum = 0;
    
    printf("Enter 10 integers:\n");

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("\nThe sum of the 10 integers is: %d\n", sum);
    return 0;
}
