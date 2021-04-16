#/**
 * @file main.c
 * @author shirisha
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"calculator_operations.h"

operand configure={6,3};
int option = 0;
int n = 1;
void sel_opt(void);
int ope1=6;
int ope2=2;
int ope3=4;
/**
 * @brief GIVING THE OPERATIONS RESPECTIVE VALUES TO FUNTION ITS OPERATION
 * 
 */
enum operations{ add=1, sub, mul, divi,s_root,fact,Rec,Sqr,Para,Trai,leave};
int main(){
        printf("\nWELCOME\n");            // WELCOME MESSAGE

while(n==1){
  sel_opt();
}
if(n!=1){
    printf("Thankyou ....!!");
}
  
    }
    /**
     * @brief enter the option based on the calculation
     * 
     */
  void sel_opt(){

      printf("Operations\n");
      printf("\n1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Squareroot\n6.Factorial\n7.Area_of_Rectangle\n8.Area_of_Square\n9.Area_of_Parallelogram\n10.Area_of_Triangle\n11.LEAVE\n");
      printf("Enter ur option\n");
      scanf("%d",&option);

      switch(option){
          case add:
          addition(&configure);
          break;

          case sub:
          subtraction(&configure);
          break;

          case mul:
          multiplication(&ope1,&ope2);
          break;

          case divi:
          division(&ope1,&ope2);
          break;

          case s_root:
          squareroot(&ope3);
          break;

          case fact:
          factorial(&ope3);
          break;

          case Rec:
          Area_of_Rectangle(&ope1,&ope2);
          break;

          case Sqr:
          Area_of_Square(&ope3);
          break;

          case Para:
          Area_of_Parallelogram(&ope1,&ope2);
          break;

          case Trai:
          Area_of_Triangle(&ope1,&ope2);
          break;

          case leave:
          exit(0);
          break;

          default:
          printf("WRONG OPERATION\n");
          
      }
      printf("enter 1 to continue\n");
    scanf("%d",&n);
 }    
   