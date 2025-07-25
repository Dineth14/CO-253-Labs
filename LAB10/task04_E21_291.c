#include <stdio.h>

void sort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int countInRange(float arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 950 && arr[i] <= 1050) {
            count++;
        }
    }
    return count;
}

int main() {
    float resistors[10];
    
   
    printf("Enter 10 resistor values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Resistor %d: ", i + 1);
        scanf("%f", &resistors[i]);
    }
    
    // Sort the array
    sort(resistors, 10);
    
    // Print sorted values
    printf("\nSorted resistor values:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ohms\n", resistors[i]);
    }
    
    // Count and print resistors in range
    int inRange = countInRange(resistors, 10);
    printf("\nNumber of resistors in range 950-1050 ohms: %d\n", inRange);
    
    return 0;
}