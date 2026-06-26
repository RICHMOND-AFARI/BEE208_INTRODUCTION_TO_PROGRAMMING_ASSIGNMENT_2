#include<iostream>
using namespace std;
main(){
	int choices;
	
	cout<<"Measurement Unit Conversion Menu"<<endl;
	cout<<"1. Convert volts to millivolts"<<endl;
	cout<<"2. Convert amperes to milliamperes"<<endl;
	cout<<"3. Convert kilowatts to watts"<<endl;
	cout<<"4. Convert ohms to kilo-ohms \n"<<endl;
	
	cout<<"Select an option (1-4): ";
	cin>>choices;
	
	switch (choices) {
		case 1: cout<<"Volts to Millivolts \n";
		double a;
		double Vm;
		cout<<"Enter voltage(V): ";
		cin>>a;
		Vm = a*1000;
		cout<<Vm<<"mV";
		break;
		
		case 2: cout<<"Amperes to milliamperes \n";
		double b;
		double mA;
		cout<<"Enter current(A): ";
		cin>>b;
		mA = b*1000;
		cout<<mA<<"mA";
		break;
		
		case 3: cout<<"Kilowatts to watts \n";
		float c;
		float kW;
		cout<<"Enter Power(kW): ";
		cin>>c;
		kW = c*1000;
		cout<<kW<<"W";
		break;
		
		case 4: cout<<"Ohms to kilo-ohms \n";
		double d;
		double kO;
		cout<<"Enter resistance(in ohms): ";
		cin>>d;
		kO = d/1000;
		cout<<kO<<" ohms";
		break;
		
		default: cout<<"Invalid Selection";
	}
	
	return 0;
}
