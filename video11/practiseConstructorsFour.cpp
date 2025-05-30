// Can constructors be overloaded in C++

// Yes, constructors in C++ can be overloaded. This means that a class can have multiple constructors with the same name but different parameter lists. The compiler determines which constructor to call based on the arguments provided when creating an object.



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Chai{

public:

  string teaName;
  int servings;
  vector<string>ingredients;

//   default constructor  - give same name as className
Chai(){
  cout<<"Constructor one called"<<endl;
}

Chai(int num){
  cout<<"Constructor two called"<<endl;
}


// Chai(){
// 	teaName = "Unknown tea";
// 	servings = 2;
// 	ingredients = {"Water","Tea Leaves"};

// 	cout<<"Constructor Called\n";
	
// }

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
// Chai defaultChai;    This will give error
Chai defaultChai2(2);    

defaultChai.displayChaiDetails();

cout<<defaultChai.teaName;   // works  (empty)

	return 0;
}


// whenever we create an object a constructor is called automatically