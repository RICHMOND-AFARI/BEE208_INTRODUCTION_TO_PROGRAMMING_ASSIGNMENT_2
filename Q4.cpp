#include<iostream>
using namespace std;
main (){
	int choice;
	
	cout<<"Fuse rating menu"<<endl;
	cout<<"1. 5 A Fuse"<<endl;
	cout<<"2. 10 A Fuse"<<endl;
	cout<<"3. 13 A Fuse"<<endl;
	cout<<"4. 20 A Fuse"<<endl;
	cout<<"5. 32 A Fuse"<<endl;
	cout<<"Select an option (1-5): ";
	
	cin>>choice;
	
	switch (choice) {
		case 1: cout<<"Suitable for: LED lamps, Radios, RGB Strips"<<endl;
		break;
		
		case 2: cout<<"Suitable for: Fans, EM-Ceiling PAs"<<endl;
		break;
		
		case 3: cout<<"Suitable for: Electric kettle, Microwave oven, Toaster";
		break;
		
		case 4: cout<<"Suitabe for: Washing machine, Dishwasher, Clothes dryer";
		break;
		
		case 5: cout<<"Suitable for: Electric cooker, Water heater, Air conditioner";
		break;		
	}

	return 0;
}
