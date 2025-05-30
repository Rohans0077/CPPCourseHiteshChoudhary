#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Chai{
	private:

	      string teaName;
		  int servings;
		  vector<string> ingredients;

	public:
	    Chai(){                  // default values
			teaName = "Unknown Tea";
			servings = 1;
			ingredients = {"water","Tea leaves"};

		}	
		
		Chai(string name, int serve, vector<string> ingre){
			teaName = name;
			servings = serve;
			ingredients = ingre;
		}

		// getter

		string getTeaName(){
			return teaName;
		}

		//setter

		void setTeaName(string name){
          //logic
			teaName = name;
		}


		//getter for servings

		int getServings(){
			return servings;
		}

		// setter for servings

		void setServings(int serve){
			servings = serve;
		}

   //getter for ingredients

   vector<string> getIngredients(){
	return ingredients;
   }

   // setter for ingredients

   void setIngredients(vector<string> ingre){
	ingredients = ingre;
   }


void displayChaiDetails(){
	cout<<" Tea Name : "<<teaName << endl;
	cout<<"  Servings : "<<servings << endl;
	cout<< "Ingredients: ";
	for(string ingredient : ingredients){
		cout<<ingredient << " ";
	}
	cout<<endl;
}


};


int main(){
	
	Chai chai;
	chai.setTeaName("Ginger Tea");
	chai.displayChaiDetails();

	
	return 0;
}