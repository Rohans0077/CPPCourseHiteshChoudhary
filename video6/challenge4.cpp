#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	cout<<"press 1 for green Tea\n";
	cout<<"press 2 for Black Tea\n";
	cout<<"press 3 for Oolong Tea\n";
	
	int choice;
    cin>> choice;

	switch (choice)
	{
	case 1:
		 cout<< "Green tea costs you 2 Dollars"<<endl;
		 
		break;
	
	case  2:
		 cout<< "Black tea costs you 3 Dollars"<<endl;

		break;
	case 3 :
		 cout<< "Oolong tea costs you 4 Dollars"<<endl;

		break;
	
	default:
	   cout<<"Enter the numbers given above\n";
		break;
	}
	return 0;
}
