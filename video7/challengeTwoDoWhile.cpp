// ## 2. Do-while Loop

// Challenge: Create a program that asks users if they want more tea. Keep asking them until they type "no"(case-sensitive), using a do-while loop



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cost  = 10;
	int cups = 0;
	string decision;



	
do
{
	cout<<"Do you want a cup of tea (yes/no)\n";

	getline(cin, decision);
	if (decision == "yes")
	{
		cout<< "Serving a cup of tea\n";
		cups++;
		
	}
	



} while (decision != "no");


cout<<"The user has taken "<<cups<<" cups of tea, the total cost is "<< cups * cost <<" Rs";


	return 0;
}