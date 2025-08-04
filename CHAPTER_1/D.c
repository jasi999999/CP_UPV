#include "stdio.h"
#include "math.h"

int main() {
    float f1, f2, f3;
    long double f4;

    scanf("%f %f %f %Lf", &f1, &f2, &f3, &f4);
    printf("%d\n%d\n%d\n%Lf", (int)ceilf(f1), (int)floorf(f2), (int)roundf(f3), (double)f4);

    return 0;
}
