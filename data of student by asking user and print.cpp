#include<stdio.h>
struct student { 
int rollnumber;
char name[50];
};
int main(){
	int n;
	printf("enter number of students");
	scanf("%d",&n);
	struct student s1[50];
	for(int i=0;i<n;i++){
		printf("Enter %d student roll number and name",i+1);
		scanf("%d %s",&s1[i].rollnumber,s1[i].name);
	}
	for(int i=0;i<n;i++){
		printf("\nstudent %d details :\nroll number is %d\nname is %s",i+1,s1[i].rollnumber,s1[i].name);
	}
	return 0;
}
