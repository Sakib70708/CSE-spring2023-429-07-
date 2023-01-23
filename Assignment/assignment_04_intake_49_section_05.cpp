//Assignment No:04
//assignment name:. Write a function which receives a float and an int from main(), finds the product of these two and returns the product which is printed through main() in C++.
#include<iostream>

using namespace std;

float product(float a, int b);

int main()
{
	float num1;
	int num2;
	cout<<"Enter a Float value: ";
	cin>>num1;
	cout<<"Enter a Integer value: ";
	cin>>num2;
	cout<<"Product of Two Numbers is: "<<product(num1,num2);

	return 0;
}
float product(float a, int b)
{
	float pro;
	pro=a*b;
	return pro;
}

