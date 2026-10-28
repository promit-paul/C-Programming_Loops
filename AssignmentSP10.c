#include <stdio.h>

int main(){
    int n, i, prime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n < 2){
        prime = 0;
    }
    else{
        for(i = 2; i < n; i++)
        {
            if(n % i == 0){
                prime = 0;
                break;
            }
        }
    }

    if(prime == 1){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }

    return 0;
}
