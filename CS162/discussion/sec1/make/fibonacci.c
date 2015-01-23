#include "functions.h"

/** Return the nth Fibonacci number.
 */
int fibonacci(int n) {
    return fibonacciHelper(0, 1, n);
}

/** Return the ith Fibonacci number, given that the previous number is P and the
    current number is N. */
int fibonacciHelper(int p, int n, int i) {
    if (i == 0) {
        return p;
    }
    return p + fibonacciHelper(n, p + n, i - 1);
}
