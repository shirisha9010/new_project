
/**
 * @file calculator_operations.h
 * @author shirisha
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CALCULATOR_OPERATIONS_H
#define CALCULATOR_OPERATIONS_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    
typedef struct operand{

    int ope1;                        //variables used in calculator through structure
    int ope2;
}operand;

/**
 * @brief Operations involved in this calculator
 * 
 * @param find 
 * @return int 
 */

int addition(operand *ope);
int subtraction(operand *ope);
int multiplication(int *operand1, int *operand2);
int division(int *operand1, int *operand2);           // variables passed through pointers
int squareroot(int *operand3);
int factorial(int *operand);
int Area_of_Rectangle(int *operand1,int *operand2);

int Area_of_Square(int *operand3);
int Area_of_Parallelogram(int *operand1, int *operand2);
int Area_of_Triangle(int *operand1, int *operand2);
#endif  

 

