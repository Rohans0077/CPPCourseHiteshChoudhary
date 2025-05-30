

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Chai{

public:

  string teaName;
  int servings;
  vector<string>ingredients;
 



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
	


Chai lemonTea("Lemon Tea", 3, {"Water" , "Lemon", "Honey"});    

lemonTea.displayChaiDetails();


Chai copiedChai = lemonTea;    // here we have copied from original data 

copiedChai.displayChaiDetails();  

lemonTea.teaName = "Modified Lemon Tea";  // here we changed the original data

cout<<"Lemon Tea"<<endl;
lemonTea.displayChaiDetails();

cout<<"Copied Tea"<<endl;
copiedChai.displayChaiDetails();



	return 0;
}


// output: 

// Param(parameter) Constructor Called
// tea Name: Lemon Tea
// servings: 3
// Ingredients: Water Lemon Honey

// tea Name: Lemon Tea
// servings: 3
// Ingredients: Water Lemon Honey

// Lemon Tea                     // here we have teaName as Modified lemon tea
// tea Name: Modified Lemon Tea
// servings: 3
// Ingredients: Water Lemon Honey

// Copied Tea        // but here we have the same lemon tea the value didnt get changed
// tea Name: Lemon Tea
// servings: 3
// Ingredients: Water Lemon Honey