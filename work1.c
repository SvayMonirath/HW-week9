#include<stdio.h>

int main(void) {
    //initialize array
    int score[5] = {100,98,70,23,100};
    char stuname[5][20] = {"Sophea", "Phary" , "Sovann" , "Rasmey" , "Ronan"};

    //finding student or students with the highest score
    int max = score[0]; 
    for(int j = 1 ; j < 5 ; j++){
        if( score[j] > max  );  //if that score is the highest then make that score the max
        max = score[j]; 
    }
    
    //output any student with the highest score 
    printf("The best student name is : \n");
    for(int i=0; i<5; i++) {
        if (score[i]==max) //this code works with multiple students
        printf("%s\n",stuname[i]);
    }
    
    return 0; //code success
}
