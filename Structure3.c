#include<stdio.h>

struct Student
{
	int Marks;
	int Age;
	char Division;	
};

int main()
{
	struct Student obj;    //9byte
	struct Student *ptr = NULL;
	//struct Student *ptr = &obj;
	ptr = &obj;
	//Indirect Accessing operator
	ptr->Marks = 90;
	ptr->Age = 21;
	ptr->Division = 'A';
	
	return 0;
}