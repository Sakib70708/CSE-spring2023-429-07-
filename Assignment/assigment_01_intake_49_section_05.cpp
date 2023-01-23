//Assignment problem:1
//Write a C++ program to find out first n perfect number where n is the input from user.
#include<iostream>

using namespace std;
int main()
{
   int num, i, sum=0;
   cout<<"Enter a Number which you want cheak: ";
   cin>>num;
   for(i=1; i<num; i++)
   {
      if(num%i==0)
         sum = sum+i;
   }
   if(num==sum)
      cout<<endl<<num<<" is a Perfect Number.";
   else
      cout<<endl<<num<<" is not a Perfect Number.";
   cout<<endl;
   return 0;
}
