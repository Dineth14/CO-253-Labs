#include <stdio.h>

int main() {
    double v_initial = 0.0;    // Initial voltage
    double v_max = 5.0;        // Maximum voltage
    double R = 0.1;            // Rate constant
    double delta_v;            // Change in voltage
    int step = 0;             // Step counter

    printf("Step\tVoltage\tdV\n");

    while (v_initial < v_max && step < 20) {
        delta_v = (v_max - v_initial) * R;

        if (delta_v < 0.05) {
            step++;
            v_initial += delta_v;
            continue;
        }

        v_initial += delta_v;
        printf("%d\t%.4f\t%.4f\n", step + 1, v_initial, delta_v);
        step++;
    }

    return 0;
}