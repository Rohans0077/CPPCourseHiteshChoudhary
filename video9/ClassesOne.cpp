// vectors and classes

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

// classes always start with Capitals

class Chai{

	// access modifiers
	public:
				// data members (attributes)
				string teaName;  // name of the tea
				int servings;   // number of servings
				vector<string> ingredients;  //  list of ingredients for the tea


				// Member function

				void displayChaiDetails(){
					cout<< "Tea Name: "<<teaName<<endl;
					cout<< "Tea Servings: "<<servings<<endl;
					cout<< "Ingredients: "<<endl;

					// since ingredients is a vector we can put a different type of loop on it

					// the vector stores string values so we put string and "ingre" is variable name

			for (string ingre : ingredients)  // (variablename : arrayname(vectorname))
			{
				cout<< ingre<<" ";
			}
			cout<<endl;


				}
	 


};


int main(){
	
    Chai chaiOne;  // we are creating object "chaiOne" for this class "Chai"


	chaiOne.teaName = "Lemon Tea";
	chaiOne.servings = 2;
	chaiOne.ingredients = {"water","lemon","honey","tea"};

	chaiOne.displayChaiDetails();

	Chai chaiTwo;  // 2nd object

	chaiTwo.teaName = "Green Tea";
	chaiTwo.servings = 5;
	chaiTwo.ingredients = {"Tea Leaves","Sugar", "milk","Chocolate"};
	chaiTwo.displayChaiDetails();

	


	return 0;
}