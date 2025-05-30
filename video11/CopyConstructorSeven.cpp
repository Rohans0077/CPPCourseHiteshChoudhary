// here since we are allocating dynamic memory and i need to free its space also so we use "destructor"


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Chai{

public:

  string* teaName; // now here i give the memory reference by using pointers
// This string pointer dynamically allocates memory


  int servings;
  vector<string>ingredients;
 

// constructor

Chai(string name, int serve, vector<string> ingre){
	teaName = new string(name); // here we have used new keyword to allocate a dynamic memory
	servings = serve;
	ingredients = ingre;

	cout<<"Param(parameter) Constructor Called\n";
	
}


// destructor -> begins with tilde sign

Chai(Chai& other){
      teaName = new string(*other.teaName);
	  servings = other.servings;
	  ingredients = other.ingredients;

	  cout<<"Copy constructor called \n";

}

~Chai(){
	delete teaName;
	cout<<"Destructor called"<<endl;
}


  void displayChaiDetails(){
	cout<<"tea Name: "<<*teaName<< endl;
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

//copy the object
Chai copiedChai = lemonTea;    //here this lemon tea has completed its work, so it called the destructor here since it had copies the data 

copiedChai.displayChaiDetails();  

// lemonTea.teaName = "Modified Lemon Tea";  // here we changed the original data

// cout<<"Lemon Tea"<<endl;
// lemonTea.displayChaiDetails();

// cout<<"Copied Tea"<<endl;
// copiedChai.displayChaiDetails();



	return 0;
}


