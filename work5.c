#include <stdio.h>

int main(void) {
   //initialize array
    char Days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    float Temperature[7];

    printf("Enter the temperature for each day:\n");

    // Prompt user for temperature input
    for (int i = 0; i < 7; i++) {
        printf("%s: ", Days[i]);
        scanf("%f", &Temperature[i]);
    }

    // Declare variables
    float max = Temperature[0], min = Temperature[0], average = 0;
    int MaxDate = 0, MinDate = 0, consistency = 0;

    // Compute statistics
    for (int i = 0; i < 7; i++) {
        if (Temperature[i] > max) {
            max = Temperature[i];
            MaxDate = i;  // Store index of max temperature
        }
        if (Temperature[i] < min) {
            min = Temperature[i];
            MinDate = i;  // Store index of min temperature
        }

        average += Temperature[i];  // Sum for average

        if (Temperature[i] > 30) {
            consistency++;  // Count days above 30°C
        }
    }

    // Print results
    printf("Maximum temperature: %.1f degrees, occurred on %s\n", max, Days[MaxDate]);
    printf("Minimum temperature: %.1f degrees, occurred on %s\n", min, Days[MinDate]);
    printf("Average temperature: %.1f degrees\n", average / 7);
    printf("Number of days above 30 degrees: %d\n", consistency);

    return 0; // Code success
}
