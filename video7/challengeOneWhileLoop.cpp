// ## 1. While Loop

// challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

// 1st method

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int numberOfCups;
// cout<<"Enter the number of cups remaining\n";

// 	cin>>numberOfCups;

// 	while(numberOfCups > 0){
//       int orderedTeaCups;
// 		cout<< "How many cups of tea do you want sir\n";
// 		cin>> orderedTeaCups;

// 		numberOfCups -= orderedTeaCups;


// 	}

	
	

// 	cout<<"Please come back Tommorow, no more tea left\n";



// 	return 0;
// }













#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int teaCups;
cout << "Enter the number of tea cups to serve: \n";
cin>> teaCups;

while (teaCups > 0)
{
	teaCups --;
	cout<< "Serving a cup of tea \n" << teaCups<< " Remaining \n";

}
cout<<"All tea Cups are Served. \n";

	return 0;
}