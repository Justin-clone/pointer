#include<iostream.h>
using namespace std;

int main(){
	int *a,*b,*temp;
	cout<<"Enter value of a and b: ";
	cin>>*a>>*b;
	temp=a;
	a=b;
	b=temp;
	cout<< "The swapped numbers are:"<<"a: "<<a<<"b: "b;
}
