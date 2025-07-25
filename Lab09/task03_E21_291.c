#include<stdio.h>

int main() {
    
    int val, fault = 0;
    char sensor[4][4];
    int row_fault = 0, unused_count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter sensor value (1=OK, 0=Fault, -1=Unused): ");
            scanf("%d", &val);

            if (val == -1) {
                sensor[i][j] = 'u';
                unused_count++;
                continue;
            } else if (val == 1) {
                sensor[i][j] = 'o';
            } else if (val == 0) {
                sensor[i][j] = 'f';
                fault++;
                row_fault++;
                if (row_fault == 2) {
                    break;
                }
                if (fault >= 5) {
                    goto end_scan;
                }
            } else {
                sensor[i][j] = '?'; // Invalid input
            }
        }
        if (unused_count == 4) {
            goto next_row;
        }
        next_row:
        row_fault = 0; // Reset row fault count for next row
    }

end_scan:
    printf("\nTotal faults: %d\n", fault);
    printf("Final grid status:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", sensor[i][j]);
        }
        printf("\n");
    }
    return 0;
}