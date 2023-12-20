#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for(i = 1; i <= 10; i++) {
        sum += i;
        if(i % 2 == 0) {
            printf("Even number: %d\n", i);
        } else {
            printf("Odd number: %d\n", i);
        }
    }

    printf("Sum of first 10 natural numbers is: %d\n", sum);
    return 0;
}
