#include<stdio.h>

void print_above(float arr[], int n, float threshold);

int main() {
    float arr[10];
    float *p = arr;
    printf("Enter the elements:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", p);
        p++;
    }
    float threshold;
    printf("Enter the threshold value: ");
    scanf("%f", &threshold);
    print_above(arr, 10, threshold);
    return 0;
}

void print_above(float arr[], int n, float threshold) {

    for(int i = 0; i < n; i++){
        if(arr[i]>threshold){
            printf("%.2f ", arr[i]);
        }
    }

}
