// #include <stdio.h>
// int isPrime(int n)
// { int i;
//    for(i=2;i<n;i++)
//       if(n%i==0)
//          return 1;
//   if(i==n) return 0;
// }
// int main()
// { int n;
//   if(isPrime(n))
// 	printf("%d is a prime",n);
//     else
// 	printf("%d is not a prime",n);
// return 0;
// }

//Author: Happy
//Input: a number
//Output: prime or not
//Description: This program checks if a number is prime or not
//Others: None
#include <stdio.h>

int isPrime(int n) 
    {
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= n / 2; i++) { // only need to check up to n/2
        if (n % i == 0)
         //// If n is divisible by any number other than 1 and itself,
         // it is not prime 
            return 0; 
    }
    return 1; // If no divisors are found, n is prime
    }
int main() 
{
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n); // Input an integer
    // Check if the number is prime
    if (isPrime(n))
        printf("%d is a prime number\n", n);
    else// if (!isPrime(n))
        printf("%d is not a prime number\n", n);

    return 0;
}
    

