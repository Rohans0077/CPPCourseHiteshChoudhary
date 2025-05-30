// pass by value -> Modify Copies but doesnt affect original values

// pass by reference -> modifies and changes the original values


// here we are discussing call by value


#include<bits/stdc++.h>

using namespace std;

void pourChai(int cups){
	cups = cups + 5;
	cout<<"Poured cups: "<<cups<<endl;
}


int main(){

	int cups = 2;
	pourChai(cups);  // here we didnt pass the original value but a copy of it

	cout<<"Total cups are: "<<cups<<endl;




	return 0;
}










