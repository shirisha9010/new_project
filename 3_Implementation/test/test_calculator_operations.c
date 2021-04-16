#include "calculator_operations.h"
#include "stdio.h"
/**
 * @brief   FUNCTION DECLARATION OF ALL THE FUNCTIONS CALLED
 * 
 * @param find 
 * @return int 
 */
int addition(operand *find){
   int final=find->ope1 + find->ope2;                     // addition of operands
   printf(" Addition of %d + %d = %d\n",find->ope1,find->ope2,final);
   return final;
}
int subtraction(operand  *find){
   int final=(find->ope1)-(find->ope2);                     // subtraction of operands
   printf("subtraction of %d - %d = %d\n",find->ope1,find->ope2,final);
   return final;
}

int multiplication(int *operand1,int *operand2){
   int final= (operand1)(*operand2);                         // multiplication of operands
    printf(" multiplication = %d\n",final);
    return final;
}

int division(int *operand1,int *operand2){
    if(*operand2==0){
        printf("divisor can't be zero");                 // division when any one of the operand is 0
        return -1;
    }

   int final= (*operand1)/(*operand2);                  
    printf(" quotient = %d\n",final);
    printf(" remainder = %d\n",(*operand1)%(*operand2));     // division of 2 operands
    return final;
}
int squareroot(int *operand3){
   int final= sqrt(*operand3);               
    printf(" squareroot %d = %d\n",*operand3,final);
    return final;
}
int factorial(int *operand3){
  if(*operand3 < 0)
    {printf("factorial for negative numbers not possible\n");          // factorial of the operand
      return -1;}
  if(*operand3 == 0)
   { return 1;}
   int fact=1;
    for (int i = 1; i <= *operand3;i++) {
            fact *= i;
        }
 printf("%d! = %d\n",*operand3,fact);
 return fact;
}

int Area_of_Rectangle(int *operand1,int *operand2){
   float final= (operand1)(*operand2);               
    printf(" Area_of_Rectangle = %.3f\n",final);                             // Area_of_Rectangle of operand
    return final;
}

int Area_of_Square(int *operand3){
   float final= 4*(*operand3);               
    printf("Area_of_Square = %.3f\n",final);                                // Area_of_Square of operand
    return final;
}

int Area_of_Parallelogram(int *operand1,int *operand2){
   int final= (operand1)(*operand2);               
    printf(" Area_of_parallelogram = %d\n",final);                           //  Area_of_Parallelogram operand
    return final;
}
int Area_of_Triangle(int *operand1,int *operand2){
   int final= (0.5)(*operand1)(*operand2);               
    printf(" Area_of_Triangle = %d\n",final);                                // Area_of_Triangle of operand
    return final;
}