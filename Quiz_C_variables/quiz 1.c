#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[15] , sexe[7];
    int age , pNumber;
    printf("Enter Your name n/");
    scanf("%s" ,name);
    printf("Enter your sexe");
    scanf("%s" , sexe);
    printf("Enter your age");
    scanf("%d" , &age);
    printf("Enter your Phone number");
    scanf("%d" , &pNumber );

    printf(" Your name is %s you are %d , your gender is : %c, your phone number is %d" , &name , &age , &sexe , &pNumber);


        
    return 0 ;
}
