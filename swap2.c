#include <stdio.h>
/*
 * swap:
 *  - Swaps two integers in place using pointers.
 *  - This approach modifies the original variables directly.
 *  - No need for returning anything since values are updated via memory addresses.
 */

#include <stdio.h>

void f(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main() {
    int a = 5, b = 7;

    f(&a, &b);

    printf("after: %d %d\n", a, b);
    return 0;
}
