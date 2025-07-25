#include<stdio.h>
#include <string.h>

void extract_label(char *str);

int main(){
    char sensor_value[3][50];
    for(int i = 0; i < 3; i++) {
        printf("Enter sensor value ex:-SensorA_12.5V: ");
        scanf("%49s", sensor_value[i]);
    }
    printf("Labels before '_':\n");
    for(int i = 0; i < 3; i++) {
        extract_label(sensor_value[i]);
    }
    return 0;
}

void extract_label(char *str) {
    char label[50];
    strcpy(label, str);
    char *underscore = strchr(label, '_');
    if (underscore != NULL) {
        *underscore = '\0';
    }
    printf("%s\n", label);
}