#include<stdio.h>
#include<string.h>
int main()
{
	double math,english,cprogram,account,
	microp,totalmarks,percentage,gpa;
	
	int rollnumber;
	char name[50], faculty[50], email[50], gender[50],result[50];
	
	printf("Enter your roll number\n");
	scanf("%d",&rollnumber);
	printf("Enter your name\n");
	scanf("%s",&name);
	printf("Enter your email\n");
	scanf("%s",&email);
	printf("Enter your faculty\n");
	scanf("%s",&faculty);
	printf("Enter your gender\n");
	scanf("%s",&gender);
	printf("Enter your subject marks\n");
	printf("1. English\n2. Math\n 3. Account\n 4. C Programming \n5. Micrprocessor\n");
	scanf("%lf%lf%lf%lf%lf",&english,&math,&account,&cprogram,&microp);
	
	totalmarks = english+math+account+cprogram+microp;
	percentage = totalmarks/5;

	
	if((percentage >=80))
	{
		gpa = 4.0;
		
	}
	else if((percentage <80)&&(percentage >=60))
	{
		gpa = 3.0;
		
	}
	else if((percentage <60)&&(percentage >=40))
	{
		gpa = 2.0;
		
	}
	
	else{
		
		gpa = 0.0;
		
	}
	
	
	//displaying result
	
	printf("\n\n");
	printf("**************************");
	printf("\nResult\n");
	printf("Student name: %s",name);
	printf("\n");
	printf("Student Roll: %d",rollnumber);
	printf("\n");
	printf("Student Faculty: %s",faculty);
	printf("\n");
	printf("Student Email: %s",email);
	printf("\n");
	printf("Student Gender: %s",gender);
	printf("\n");
	printf("Total marks: %lf",totalmarks);
	printf("\n");
	printf("Percentage: %lf",percentage);
	printf("\n");
	printf("Gpa: %lf",gpa);
	printf("\n\n");
	
	
	
	
	if((english<40)||(math<40)||(account<40)||(cprogram<40)||(microp<40))
	{
		strcpy(result, "Failed");
		printf("Result Status: %s",result);
		printf("\n");
	}
	else
	{
			strcpy(result, "Passed");
		printf("Result Status: %s",result);
		printf("\n");
	}
	
	printf("\n**************************");
	
	return 0;
	
}
