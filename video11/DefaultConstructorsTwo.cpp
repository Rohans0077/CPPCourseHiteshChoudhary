// whenever we create an object a constructor method is called automatically.

// Access modifiers -> Blocks
// public Block -> Accessible everywhere
// private Block -> accessible only inside the class
// protected Block

// constructor is a special type of method whose name is same as className

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Chai{

public:

  string teaName;
  int servings;
  vector<string>ingredients;

//   default constructor  - give same name as className
// Chai(){
//   // here if we want we can give something, else we can leave it as it is.
// }

// here i can use constructor as function also
Chai(){
	teaName = "Unknown tea";
	servings = 2;
	ingredients = {"Water","Tea Leaves"};

	cout<<"Constructor Called\n";
	
}

  void displayChaiDetails(){
	cout<<"tea Name: "<<teaName<< endl;
	cout<<"servings: "<<servings<< endl;
	cout<<"Ingredients: ";
	for(string ingredient : ingredients){
		cout<<ingredient <<" ";
	}
	cout<<endl;
  }                         

};

int main(){
	
// whenever we create an object then only constructor gets called
// so we create an object

Chai defaultChai;    // now constructor is called at this point

defaultChai.displayChaiDetails();

cout<<defaultChai.teaName;   // works

	return 0;
}


// whenever we create an object a constructor is called automatically


// whenever an object is created first thing is that constructor is called, and if there is no costructor defined then it calls automatically the default constructor