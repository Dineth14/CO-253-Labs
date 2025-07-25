#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int led_count = 0;
    int max_leds = 20;  // Maximum number of LEDs to light up
    char led_matrix[5][5];

    printf("5x5 LED Matrix Pattern:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i % 2 == 1 && j == 2) { 
                led_matrix[i][j] = 'x'; // 'x' for skipped
                continue;
            }
            int status;
            printf("Enter LED status (0 for OFF, 1 for ON): ");
            scanf("%d", &status);
            if (status == 1) {
                led_matrix[i][j] = 'O'; // 'O' for ON
                led_count++;
            } else {
                led_matrix[i][j] = '.'; // '.' for OFF
            }
            if (led_count >= max_leds) {
                goto print_pattern;
            }
        }
    }

print_pattern:
    printf("\nLED Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", led_matrix[i][j]);
        }
        printf("\n");
    }
    printf("Total LEDs ON: %d\n", led_count);

    return 0;
}