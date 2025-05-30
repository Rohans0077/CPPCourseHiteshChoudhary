

// pass by reference -> modifies and changes the original values


// here we are discussing call by reference


#include<bits/stdc++.h>

using namespace std;

int globalChaiStock = 100;// This variable comes in Global Scope and can be accessed by Anyone


// if (condition)  // this has its own scope
// {
// 	/* code */
// }


// for (size_t i = 0; i < count; i++)   for loop has its own scope
// {
// 	/* code */
// }

// while (condition)   has its own scope
// {
// 	/* code */
// }



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










