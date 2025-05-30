// whenever we create an object a constructor method is called

// we can also make 2 to 3 multiple constructors also.

// constructor is a special type of method whose name is same as className

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Chai{

public:

  string teaName;
  int servings;
  vector<string>ingredients;

//   parameter constructor  



Chai(string name, int serve, vector<string> ingre){
	teaName = name;
	servings = serve;
	ingredients = ingre;

	cout<<"Param(parameter) Constructor Called\n";
	
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
	

// here while creating an object send me all the details of this object directly
Chai lemonTea("Lemon Tea", 3, {"Water" , "Lemon", "Honey"});    

lemonTea.displayChaiDetails();



	return 0;
}


