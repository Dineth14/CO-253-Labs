#include<stdio.h>

int main() {
    int signal, count = 0;

    printf("Enter signal levels (0-100), negative to stop:\n");
    while (1) {
        scanf("%d", &signal);

        if (signal < 0)
            break;

        if (signal < 10)
            continue;

        if (signal >= 95)
            break;

        count++;
    }

    printf("Valid signals in [10, 95): %d\n", count);
    return 0;
}

