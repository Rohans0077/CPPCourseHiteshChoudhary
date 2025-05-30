// Function Declaration



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// we have declared but didnt define it

// if we run this we get an error

// declaration of function
void serveChai(int cups);



int main(){
	
	serveChai(3);  // calling a function
	 
	return 0;
}

// function definition

void serveChai(int cups){
	cout<<"Serving "<< cups<<" cups of tea\n";
}
