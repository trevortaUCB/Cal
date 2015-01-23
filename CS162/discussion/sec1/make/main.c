#include <stdio.h>
#include "functions.h"

/** Run method using ./hello on terminal.*/
int main() {
    print_hello();
    printf("The 10th Fibonacci number is %d.\n", fibonacci(10));
    return 0;
}
