// assign grades to students on the basis of CGPA 
#include<stdio.h>
int main()
{
	float cgpa;
	printf("enter your CGPA : ");
	scanf("%f",&cgpa);
	
	if(cgpa >= 9.0)
	printf("Your GRADE = A");
	
	else if(cgpa >= 8.0 && cgpa < 9.0)
	printf("Your GRADE = B");
	
	else if (cgpa >= 7.0 && cgpa < 8.0)
	printf("Your GRADE = C");
	
	else
	printf("Your GRADE = D");
	
	return 0;
		
}
