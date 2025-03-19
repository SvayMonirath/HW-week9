#include <stdio.h>
int main(void) {

    int num[5] = {1,2,3,4,5} , reverse[5]; //initialize array

    //use for loop to input reverse order of num into reverse[]
    for(int i=0; i<5; i++) {
        reverse[i] = num[5-i-1];
    }    
    
    printf("Original array: "); //output original array
    for(int i=0; i<5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("Reverse array: "); //output reverse array
    for(int i=0; i<5; i++) {
        printf("%d ", reverse[i]);
    }
    printf("\n");
    

    return 0;  //code success
}
