#include <stdio.h>

int main() {
    float delay;
    int t;

    printf("Time(t)\t Delay(s)\n");
    printf("-------------------\n");

    for (t = 1; t <= 50; t++) {
        delay = 0.1 * t;  

        
        if (t % 13 == 0) {
            goto safety_warning;
        }

    
        if (delay < 1.0) {
            continue;
        }

        if (delay > 3.0) {
            break;
        }

        printf("%d\t%.1f\n", t, delay);
        continue;


        safety_warning:
            printf("WARNING: Safety check required at t = %d!\n", t);
    }

    return 0;
}