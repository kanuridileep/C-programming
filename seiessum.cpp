/*1+1/2+1/3+1/4.....+1/n
read n value form the user and print sum of expression*/
#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += 1.0/i;
    }
    printf("Sum of the series is: %f", sum);
    return 0;
}

