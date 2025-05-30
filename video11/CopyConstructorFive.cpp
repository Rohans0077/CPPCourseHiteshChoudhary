// copy constructor -> whatever values have gone inside the constructor, if we want to copy those values then this works

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
	

// here while creating an object send me all the details of this object directly
Chai lemonTea("Lemon Tea", 3, {"Water" , "Lemon", "Honey"});    

lemonTea.displayChaiDetails();

//copy the object
// here i have just copied the object(lemonTea) and stored in another object (copiedChai)
Chai copiedChai = lemonTea;

copiedChai.displayChaiDetails();  // this works


// now the question ARISES -> since we can copy an object and store in another object and use it why do we need a copy constructor?

	return 0;
}


