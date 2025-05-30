// create a program that calculates the total price of tea cups. The user inputs the number of tea cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above  a certain amount , and show the final price



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int numberTeaCups;
   float priceOfTeaPerCup, discountedPrice, totalPrice;
   cout<<"Enter the number of cups you want sir\n";
   cin>>numberTeaCups;
   cout<<"Enter the price of tea per cup\n";
   cin>>priceOfTeaPerCup;

     totalPrice = numberTeaCups * priceOfTeaPerCup;

   if(totalPrice>200){
		// discountedPrice = totalPrice* 0.95;

    discountedPrice = totalPrice - (totalPrice * 0.05);
		cout<<"Since the total price is greater than 200 Rs the discounted price of "<<numberTeaCups<<" cups of Lemon Tea is "<<discountedPrice<<
		"\n";

        



}else{
	cout<< "The total price of "<<numberTeaCups<<" cups of Lemon Tea is "<<totalPrice<<"\n";
}
	

	return 0;
}