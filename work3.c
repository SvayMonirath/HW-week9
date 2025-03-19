#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5}; //initialize array    
    int temp; // temporary variables for future switch 

    for(int i = 0 ; i < 4 ; i++){
        temp = arr[i];  //store current element in temp
        arr[i] = arr[i+1];  //switch first element with the element beside it on the right
        arr[i+1] = temp;    //switch the element beside it to the stored element 
    }   

    //print output 
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",arr[i]);
    }

    return 0; //code success
}
