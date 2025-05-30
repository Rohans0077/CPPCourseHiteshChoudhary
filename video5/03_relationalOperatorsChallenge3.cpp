// relational operators
// A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "GOLD" badge, and those who buy 10 to 20 cups get a "silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int numberTeaCups;
	cout<<"enter the number of tea cups you want to buy\n";
	cin>>numberTeaCups;

	if(numberTeaCups > 20){
		cout<<"Congratulations you have won a 'GOLD' badge since you have buyed "<<numberTeaCups<<" tea cups.\n";
	}
	else if(numberTeaCups >10 && numberTeaCups <= 20){
		cout<<"Congratulations you have won a 'Silver' badge since you have buyed "<<numberTeaCups<<" tea cups.\n";
	}
	else{
		cout<<"The number of tea cups you have buyed is "<<numberTeaCups;
	}
	return 0;
}