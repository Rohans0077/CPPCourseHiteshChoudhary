

// here this program gives error because we have declared the same function with same datatype as well as same number of parameters so it is not able to differentiate


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void serveChai(string teaType){
    cout<<"Serving .."<< teaType<<endl;
}

void serveChai(int Numbers){
     cout<<"serving numbers.."<<Numbers<<endl;
}


void serveChai(int cups);


void serveChai(int cup, int teaLeaves){

	
}

int main(){
	serveChai(3);

	serveChai(45);

	serveChai("Lemon Tea");

	return 0;
}

void serveChai(int cups){
	cout<<"Serving "<< cups<<" cups of tea\n";
}