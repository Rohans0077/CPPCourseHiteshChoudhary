// Function Overloading -> Taking same function name multiple times 

// to differentiate between same function we see the number of parameters that are used and also the type of data



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void serveChai(string teaType){
    cout<<"Serving .."<< teaType<<endl;
}




void serveChai(int cups);

int main(){
	serveChai(3);

	

	serveChai("Lemon Tea");

	return 0;
}

void serveChai(int cups){
	cout<<"Serving "<< cups<<" cups of tea\n";
}