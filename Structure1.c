#include<stdio.h>

//structure declaration
//There is No memory allocation at this point
struct Demo
{
	int i;      //4
	float f;    //4
	int j;      //4
	double d;   //8
};
	
int main()
{
	//structure object or variable creation
    //Memory gets allocated at this point	
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	//Member initialisation
	obj1.d = 11.0;
	obj2.i = 21;
	obj3.j = 51;
	
	printf("size of obj1 is : %d\n", sizeof(obj1)); //20
	printf("size of obj2 is : %d\n", sizeof(obj2));   //20
	printf("i of obj2 is : %d\n", obj2.i);   //21
	
	
	return 0;
}