//Assignment No:03
//assignment name: Write a C++ program to print out all Armstrong numbers between 1 and 10000. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.
#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3,reminder;

	for(int i=1;i<=1000;i++)
	{
		num1=i/100;
		num2=i/10 - num1*10;
		num3=i%10;
reminder=num1*num1*num1 + num2*num2*num2 +num3*num3*num3;
		if(reminder == i)
			cout<<i<<endl;
	}


	return 0;
}
