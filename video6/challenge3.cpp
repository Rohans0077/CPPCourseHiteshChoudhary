#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int cups;
	cout<<"Enter the number of tea cups you have buyed\n";
	cin>>cups;
	float pricePerCup = 10, discountPrice, totalPrice;

	totalPrice = pricePerCup * cups;


	if(cups>20){
		cout<<"congratulations , you get 20% Discount since you have buyed more than 20 cups\n";
		discountPrice = totalPrice - (totalPrice * 0.2);
		cout<<"The discounted price is "<< discountPrice<<" RS";
	} else if(cups>=10 &&cups<=20){
   cout<< "congratulations , you get 10% Discount since you have buyed more than 10 cups and less than 20\n";
   discountPrice = totalPrice - (totalPrice * 0.1);
   cout<<"The discounted price is "<< discountPrice<<" RS";

	}else{
		cout<< "Sorry you are not eligible for discount\n";
		cout<<"The price is "<<totalPrice<<" RS";
	}
	return 0;
}