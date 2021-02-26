#include <iostream>
using namespace std;
 
int main()
{
	int num1,num2,sum,*ptr1,*ptr2;
	
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	sum = *ptr1 + *ptr2;
	cout<<"Your sum is: "<<sum;

    return 0;
}
