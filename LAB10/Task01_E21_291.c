#include<stdio.h>
#include<math.h>



float compute_rms(float arr[], int n);

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    
    float rms = compute_rms(arr, n);
    printf("RMS value: %.2f\n", rms);
    
    return 0;


}


float compute_rms(float arr[], int n){

    float V_sum = 0.0;

    for(int i = 0; i < n; i++){
        V_sum += arr[i] * arr[i];
    }
    float V_rms = 0.0;
    V_rms = sqrt(V_sum / n);
    return V_rms;
}