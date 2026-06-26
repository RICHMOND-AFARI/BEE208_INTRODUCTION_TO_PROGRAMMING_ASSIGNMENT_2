#include<iostream>
using namespace std;

main(){
	float i;
	
	cout<<"Enter Power Factor: ";
	cin>>i;
	
	if (i<0 || i>1) {
		cout<<"Inavilid Power Factor";
	}
	else if (i>=0 && i<=0.50) {
		cout<<"Poor Power Factor.";
		
	}
	else if (i>0.50 && i<=0.80) {
		cout<<"Fair Power Factor.";
		
	}
	else if (i>0.80 && i<=0.95) {
		cout<<"Good Power Factor.";
		
	}
	else {
		cout<<"Excellent Power Factor.";
	}
	
	return 0;
}
