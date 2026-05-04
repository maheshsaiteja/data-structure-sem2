#include<stdio.h>
struct student {
	int m1 ,m2,m3;
	float total,avg;
};
int main(){
	int n,i;
	printf("Enter number  of students:");
	scanf("%d",&n);
	struct student s[50];
	for(i=0;i<n;i++){
		printf("\nEnter 3 subjects marks of student %d:",i+1);
		scanf("%d %d %d",&s[i+1].m1,&s[i+1].m2,&s[i+1].m3);
	}
		for(i=0;i<n;i++){
			s[i+1].total =(s[i+1].m1+s[i+1].m2+s[i+1].m3);
			s[i+1].avg= (s[i+1].total)/n;
		printf(" \n3 subjets total and  average of student %d :%f & %f ",i+1,s[i+1].total,s[i+1].avg);
	}
}

