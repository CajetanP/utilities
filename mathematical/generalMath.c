#include <stdio.h>

int gcd (int a, int b);
int lcm (int a, int b);

void useGcdAndLcm (void);

int main () {
    useGcdAndLcm ();
    return 0;
}

/* computes the greatest common divisor of two numbers */
int gcd (int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

/* computes the lowest common multiple of two numbers */
int lcm (int a, int b) {
    return (a*b) / gcd(a, b);
}

void useGcdAndLcm () {
    printf ("*** GCD and LCM ***\n");
    printf ("gcd(8,12) = %d\n", gcd(8,12));
    printf ("lcm(8, 12) = %d\n", lcm(8,12));
    printf ("\n");
}
