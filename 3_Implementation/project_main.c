#include<stdio.h>
#include<stdlib.h>
#include "gpa.h"

int main()
{
	int option;
	printf("GPA/CGPA Calculator and grade point predictor\n");
	printf("Select the options based on your requirement ");
	printf("1. GPA calculator \n 2. CGPA calculator \n 3.Grade point predictor: \n");
	scanf("%d",&option);
	if(option==1)
	{
	//printf("The GPA for semester is %f",semester());
	semester();
	}
	if(option==2)
	{
	//printf("The cumulative GPA of all your semesters is: %f",cgpa_calculator());
	cgpa_calculator();
	}
	if(option==3)
	{
	grade_predictor();
	}
	/*switch(option)
	{
	case '1' : semester1();
	           break;
	case '2' : semester2();
	           break;
	case '3' : semester3();
	           break;
	case '4' : semester4();
	           break;
	case '5' : semester5();
	           break;
	case '6' : semester6();
	           break;
	case '7' : semester7();
	           break;
	case '8' : semester8();
	           break;
	case '9' : CGPA();
	           break;
	default  : printf("Please enter any one of the options to continue");
	}*/
	return 0;
}
