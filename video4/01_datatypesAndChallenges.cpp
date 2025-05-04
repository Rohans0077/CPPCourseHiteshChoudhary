#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	// Tea information Display , write a program that declares variables to store the type of tea , its price per kilogram(float) and its rating(char) use datatypes effectively and print them in a formatted output using escape sequences.

   string typeOfTea;
   double priceOfTea;
   char ratingOfTea;
cout<< "What tea would you like to have sir? \n";

getline(cin,typeOfTea);   // to get input including space
   cin>>priceOfTea;
   cout<<"The price of "<<'\"'<< typeOfTea<<'\"'<<"  is "<<priceOfTea<<"\n";
   cout<<"What Rating would you give to this tea\n";
   cin>>ratingOfTea;
   cout<< "The rating you have given for "<< typeOfTea<< " is "<<ratingOfTea<<" .Thank you we appreciate your response please visit again\n"; 

	return 0;
}