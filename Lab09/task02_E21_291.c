#include<stdio.h>

int main() {
    int Voltage[3][3];
    int safe_count = 0, unsafe_count = 0;

    printf("Enter 3x3 matrix of voltage readings:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &Voltage[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (Voltage[i][j] < 0 || Voltage[i][j] > 250) {
                goto warning;
            }

            if (Voltage[i][j] == 0)
                continue;

            if (Voltage[i][j] < 90 || Voltage[i][j] > 240) {
                unsafe_count++;
                if (unsafe_count > 3)
                    break;
            } else {
                safe_count++;
            }
        }
        if (unsafe_count > 3)
            break;
    }

    printf("Safe readings in [90, 240]: %d\n", safe_count);
    return 0;

warning:
    printf("Warning: Voltage reading out of range!\n");
    return 1;
}

