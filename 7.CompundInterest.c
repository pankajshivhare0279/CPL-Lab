#include <stdio.h>
#include <math.h>   // for pow() function

int main()
{
    float P, R, CI;
    int N;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Time in years (N): ");
    scanf("%d", &N);

    CI = P * pow((1 + R / 100), N) - P;

    printf("Compound Interest = %.2f\n", CI);

    return 0;
}