#include <stdio.h>
// Functions Prototype
void printArrayValues(int array[] , int arrayLength);
int getChoosenArrayInteger();
int findChosenNumberIndex(int array[] , int arrayLength);

int main()
{

    int numbers[] = {25,30 ,50, 75, 80 , 90 ,100 , 110, 120 , 150 , 180, 200};
    
    int arrayLength = ( sizeof(numbers) / sizeof(numbers[0]) );
    
    int numberFoundIndex = findChosenNumberIndex(numbers,arrayLength);
    
    printf("The chosen number is %d , and its index in this array is : %d" , numbers[numberFoundIndex] , numberFoundIndex);
    return 0;
}

int findChosenNumberIndex(int array[] , int arrayLength)
{
    
    int low = 0;
    int high = arrayLength - 1 ;
    int middle , selectedNum;
    
    printArrayValues(array , arrayLength);
    
    selectedNum = getChoosenArrayInteger();
    
    for(int i = 0 ; i < arrayLength ; i++) {
        middle = low + ( ( high - low ) / 2  );
        
        if ( selectedNum > array[middle] )
            low = middle + 1;
        else if ( selectedNum < array[middle] ) 
            high = middle - 1;
        else
            return middle;
        
    }
}

void printArrayValues(int array[] , int arrayLength)
{
        
        printf("Given the following array :\n");
        printf("[ ");
        
        for (int i = 0; i < arrayLength; i++){
        printf("%d ", array[i]);
        
        if(i != arrayLength - 1)
        printf(",");
        
        }
        
        printf("]\n");

}

int getChoosenArrayInteger()
{
    
    int chosenNumber;
    printf("Chosen a number from the above list : ");
    scanf("%d",&chosenNumber);
    return chosenNumber;
}
