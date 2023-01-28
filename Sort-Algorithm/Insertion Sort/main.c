void printArrayValues(int array[] , int arrayLength);

int main()
{
    int nums[] = { 4 , 1 , 2 , 10 , 5  , 6 ,9, 12 };
    
    int arrayLength = ( sizeof(nums) / sizeof(nums[0]) );
    
    int currentElem;
    
    for (int i = 1; i < arrayLength; i++) {
        
        
        for(int j = 0; j < i ; j++) {
            
            if( nums[i] < nums[j] ) {
                
                currentElem = nums[i];
                
                nums[i] = nums[j];
                
                nums[j] = currentElem;
                break;
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
