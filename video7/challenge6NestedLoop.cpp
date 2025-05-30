// ## 6. Nested Loops

// Challenge: Write a program that brews multiple cups of different types of tea. For each type of tea brew 3 cups using a nested loop.


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	string teaTypes[5];
	for(int i = 0;i < 5; i++){
	cout<<"Enter the tea flavour you want\n";
	  getline(cin, teaTypes[i]);


	}


	for (int i = 0; i < 5; i++)
	{


		cout<< "Brewing..."<< teaTypes[i] <<" ...\n";


		for (int j = 1; j <= 3; j++)
		{
			cout<<"Brewing .."<<j<<" cup of "<<teaTypes[i]<<endl;
			
		}
		
	}
	


	
	return 0;
}