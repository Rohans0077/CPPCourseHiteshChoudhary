// favourite tea input write a program that takes the user's favourite tea as input using getline as input and also ask the user how many cups of tea they want using cin. Display the result in a fun manner


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string teaName;
	int numberTeaCups;
	cout<<"what tea would you like to order sir\n";
	getline(cin, teaName);
	cout<< "How many servings do you require sir\n";
	cin>>numberTeaCups;
	cout<<"The tea you have asked is "<<teaName << " and the servings you require is "<<numberTeaCups<< " cups.";

	return 0;
}