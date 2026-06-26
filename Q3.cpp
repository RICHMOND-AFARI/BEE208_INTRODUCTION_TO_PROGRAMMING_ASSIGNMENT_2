#include<iostream>
using namespace std;
main(){
	
	double i;
	double is;
	
	cout<<"Enter motor rated current: ";
	cin>>i;
	
	cout<<"Enter motor starting current: ";
	cin>>is;
	
	if (is > 3*i) {
		cout<<"High starting current. Use proper motor starter.";

	}
	
	else {
		cout<<" Starting current is acceptable.";
	}
}
