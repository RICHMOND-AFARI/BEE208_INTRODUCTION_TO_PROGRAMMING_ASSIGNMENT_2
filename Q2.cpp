#include<iostream>
using namespace std;
main (){
	
	float t;
	
	cout<<"Enter Temperature of the cable(Degree Celcius): ";
	cin>>t;
	
	if (t>70){
		cout<<"Cable overheating detected.";
		
	}
	else {
		cout<<"Cable temperature is within safe range.";
	}
	
	return 0;
}
