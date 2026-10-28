#include<stdio.h>

int main(){
    int n, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0){
        n = -n;
    }

    while(n > 0){
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of the digit = %d", sum);

    return 0;
}
