#include <stdio.h>

#define ROWS 3
#define COLS 3

double find_max(float arr[ROWS][COLS], int *max_row, int *max_col) {
    double max = arr[0][0];
    *max_row = 0;
    *max_col = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                *max_row = i;
                *max_col = j;
            }
        }
    }
    return max;
}

int main() {
    float capacitance[ROWS][COLS] = {
        {1.0, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };

    double total = 0.0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += capacitance[i][j];
        }
    }

    double average = total / (ROWS * COLS);
    int max_row, max_col;
    double max_value = find_max(capacitance, &max_row, &max_col);

    printf("Total Capacitance: %.2lf uF\n", total);
    printf("Average Capacitance: %.2lf uF\n", average);
    printf("Maximum Capacitance: %.2lf uF at position (row=%d, col=%d)\n", max_value, max_row, max_col);

    return 0;
}
