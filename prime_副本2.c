#include <stdio.h>

int main(void)
{
    int x;

    if (scanf("%d", &x) != 1)
    {         
        printf("invalid input\n");
        return 1;
    }

    if (x < 2) 
    {                          
        printf("is not prime\n");
        return 0;
    }

    int is_prime = 1;                     
    for (int i = 2; i * i <= x; i++) 
    {    
        if (x % i == 0) {
            is_prime = 0;
            break;
        }
    }

    printf(is_prime ? "is prime\n" : "is not prime\n");
    
    return 0;
}
