#include<stdio.h>
int cgpa_calculator()
{
int i=0,semesters,credits[100],total_credits=0;
float gpa[100], cgpa,total=0;
printf("Enter the number of semesters for which you want calculate the CGPA:"); 
scanf("%d",&semesters);
printf("\n");
for(i=1;i<=semesters;i++)
{
printf("Enter the GPA of semester:");
scanf("%f",&gpa[i]);
printf("Enter the total credits in semester:");
scanf("%d",&credits[i]);
printf("\n");
}
for(i=1;i<=semesters;i++)
{
total=total+(gpa[i]*10*credits[i]);
total_credits=total_credits+credits[i];
}
cgpa=(total/total_credits);
printf("The cumulative GPA of all semesters is: %f",cgpa);
printf("\n");
}


int semester()
{

	int sum=0,total_subjects,credits=0;
	float GPA;
	int i,arr[100],arr1[100];
	printf("Enter the number of subjects in semester:");
	scanf("%d",&total_subjects);
	printf("\n");
	for(i=0;i<total_subjects;i++)
	{
	printf("Enter the gradepoint obtained:");
	scanf("%d",&arr[i]);
	printf("Enter the credits:");
	scanf("%d",&arr1[i]);
	printf("\n");
	}
	printf("\n\n");
	for(i=0;i<total_subjects;i++)
	{
	sum = sum+(arr[i]*arr1[i]);
	credits=credits+arr1[i];
	}
	GPA=(sum/credits);
	printf("Your GPA is : %f",GPA);
	printf("\n");
}
