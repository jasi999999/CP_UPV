#include "stdio.h"

int main() {
    char buffer[10];

    scanf("%10s", buffer); // Read a string into buffer, ensuring no overflow
    printf("%c", buffer[8]);

    return 0;
}
