#include<stdio.h>

int isPrime(int, int);

int main()
{
    int num, prime;
    
    printf("Enter the Number to be checked: ");
    
    scanf("%d", &num);
    
    prime = isPrime(num, num/2);
    
    if(prime == 1)
    {
        printf("\n\%d is a Prime Number\n", num);
    }
    else
    {
        printf("\n%d is not a Prime Number", num);
    }
  
    return 0;
}

int isPrime(int n, int i)
{
    if(i == 1)
        return 1; 
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);    
    }
}
