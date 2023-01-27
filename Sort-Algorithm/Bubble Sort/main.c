#include <stdio.h>
#include <stdbool.h>

void printArrayValues(int array[] , int arrayLength);
int main()
{
    int nums[] = {4,7,1,5,2,10,2,14,5,100,236,8};
    
    int arrayLength = ( sizeof(nums) / sizeof(nums[0]) );
    
    bool hasSwaped;
    
    int currentNum , nextNum;
    
  do {
       hasSwaped = false;
       
       for( int i = 0; i < arrayLength; i++ ){
           currentNum = nums[i];
           nextNum = nums[i + 1];
           
           if( currentNum > nextNum ){
               nums[i + 1] = currentNum;
               nums[i] = nextNum;
               hasSwaped = true;
           } 
       }
       
       } while(hasSwaped);
       
    
    printArrayValues(nums,arrayLength);
    
    return 0;
}

void printArrayValues(int array[] , int arrayLength)
{
        printf("[ ");
        
        for (int i = 0; i < arrayLength; i++){
        printf("%d ", array[i]);
        
        if(i != arrayLength - 1)
        printf(",");
        
        }
        
        printf("]\n");

}
