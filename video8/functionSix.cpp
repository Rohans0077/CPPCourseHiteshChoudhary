



#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void serveChai(string teaType = "Masala Tea"){ // here it takes the default value "Masala Tea"

    cout<<"Serving .."<< teaType<<endl;
}

int main(){

	serveChai();  //here iam not passing any value to the function so it gives default value output

	// here since we passed parameter it gets override with default one and "orange tea" gets printed
	serveChai("Orange Tea"); 

	return 0;
}

