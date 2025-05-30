

// pass by reference -> modifies and changes the original values


// here we are discussing call by reference


#include<bits/stdc++.h>

using namespace std;

void pourChai(int &cups){  // here the value gets changed
	cups = cups + 5;
	cout<<"Poured cups: "<<cups<<endl;
}


int main(){

	int cups = 2;
	cout<<"The address of cups is "<<&cups<<endl;
	pourChai(cups);  

	cout<<"Total cups are: "<<cups<<endl;




	return 0;
}










