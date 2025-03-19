#include<stdio.h>

int main(void) {
    int score[5];  // Initialize array to store scores

    // Loop to input scores
    for(int i = 0; i < 5; i++) {
        do {
            printf("Enter score for exam %d: ", i + 1);
            scanf("%d", &score[i]);
        } while(score[i] < 0 || score[i] > 100);  // Ensure score is between 0 and 100
    }

    // Check if any score is below 50
    for(int i = 0; i < 5; i++) {
        if(score[i] < 50) {  // If any score is below 50, student fails
            printf("Failed\n");
            return 0;  // Exit program immediately if failed
        }
    }

   
    printf("Passed!\n"); // If no score was below 50, student passes

    return 0;  // Code success
}
