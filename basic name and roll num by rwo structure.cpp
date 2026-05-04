#include<stdio.h>
struct student{

	int rollnum;
	char name[50];
};

struct students{
	int rollnum;
	char name[50];
};
int  main(){
	struct student  s1={1,"teja"
	};
	struct students s2={2,"ajarya"
	};

	printf("%d\n%s\n%d\n%s",s1.rollnum,s1.name,s2.rollnum,s2.name);
	return 0;
}
