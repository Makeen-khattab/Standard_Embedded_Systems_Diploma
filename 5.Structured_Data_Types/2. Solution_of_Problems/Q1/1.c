#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char Name[30];
	int roll;
	float Grades;
}Data_Student;
int main(void)
{
	Data_Student Student;
	scanf("%s",(Student.Name));
	scanf("%d",&(Student.roll));
	scanf("%f",&(Student.Grades));
	printf("%s ",(Student.Name));
		printf("%d ",(Student.roll));
		printf("%f ",(Student.Grades));

}
