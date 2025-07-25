#include <stdio.h>

int main() {
    int signal = 1;  
    int consecutive_low = 0;
    int high_count = 0;
    
    for(int step = 1; step <= 100; step++) {
       
        if(step % 10 == 0) {
            signal = !signal;
        }
        
        printf("Step %d: Signal %s\n", step, signal ? "HIGH" : "LOW");
        

        if(signal == 0) {
            consecutive_low++;
            if(consecutive_low >= 5) {
                printf("Terminating: 5 consecutive LOW states detected\n");
                break;
            }
        } else {
            consecutive_low = 0;
            high_count++;
        }
        
        float duty_cycle = (float)high_count / step * 100;
        if(duty_cycle < 20.0) {
            goto emergency_handler;
        }
    }
    
    return 0;

emergency_handler:
    printf("Emergency: Duty cycle below 20%%\n");
    return 1;
}