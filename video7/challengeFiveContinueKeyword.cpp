// ## 5. Continue Keyword

// Challenge: Write a program that skips brewing green tea  if the user dislikes it . Use a continue statement to skip over green tea but brew other types of tea in a list.


// MAYA -> Mostly Advanced Yet Acceptable


// list -> Collection of Variables

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	// string teaOne = "Green Tea";
	// string teaTwo = "Lemon Tea";
	// string teaThree = "Olive Tea";

	// to store the values of same datatype we use arrays which uses contiguous memory allocation

	// datatypes must be of same type in array



// here i can store only 3 elements



	string teaTypes[3] = {"Green Tea" , "Black Tea", "Lemon Tea" };







	




for (int i = 0; i < 3; i++)
{
	if (teaTypes[i] == "Green Tea")
	{
		cout<<"Skipping the "<< teaTypes[i]<<endl;
		continue;

	}
	
	cout<< "Brewing "<< teaTypes[i]<<"..."<<endl;
	
}

	
	return 0;
}