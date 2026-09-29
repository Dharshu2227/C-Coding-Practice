#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}

Input&Output:
Enter a number: 6
Perfect Number 

Enter a number: 10
Not Perfect Number
