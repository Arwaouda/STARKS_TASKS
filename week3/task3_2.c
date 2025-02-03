

#include <stdio.h>
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0)
		return 0;
    if (n == 1)
		return 1;

    unsigned long long int a= 0,b = 1, next;
    for (unsigned int i = 2; i <= n; i++) {
        next =a+b;
        a=b;
        b= next;
    }
    return b;
}
void findLargestFibonacci() {
    unsigned long long int a= 0, b= 1, next;
    unsigned int x = 1;

    while (b>a){
        next = a+b;
        a= b;
        b= next;
      ++x;
    }

    printf("Largest Fibonacci index before overflow: %u\n",x);
    printf("Largest Fibonacci number that fits: %llu\n",a);
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    findLargestFibonacci();

    return 0;
}