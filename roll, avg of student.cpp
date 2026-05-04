#include<stdio.h>
struct student
{
	int rollno;
	float average;
};
int main(){
	struct student s1;
	int r;
	float a;
	printf("Enter Average:");
	scanf("%f",&a);
	s1.average=a;
	printf("\nEnter roll number:");
	scanf("%d",&r);
	s1.rollno=r;
	printf("\n your roll number:%d \n your average:%.2f",s1.rollno,s1.average);
}
}
