#include <stdio.h>
void printArrayValues(int array[] , int arrayLength);

int main()
{
    int nums[] = { 4 , 1 , 10 , 300 , 13, 2 , 5 , 7 , 6 ,9, 12 };
    
    int arrayLength = 9; // 9
    
    int i , j , temp;
    
    for (int j = 0; j < arrayLength ; j++) {
        
        for ( int i = j + 1; i < arrayLength ; i++ ) {        

           if( nums[i] < nums[j] ){
               temp = nums[i];
               
               nums[i] = nums[j];
               
               nums[j] = temp;
           }
            
        } 
       
    } 

    printArrayValues(nums,arrayLength);

    return 0;
}

void printArrayValues(int array[] , int arrayLength) {
    printf("[ ");
        
        for (int i = 0; i < arrayLength; i++){
        printf("%d ", array[i]);
        
        if(i != arrayLength - 1)
        printf(",");
        
        }
        
        printf("]\n");
}