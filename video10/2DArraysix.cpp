#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	int chaiSales[3][7] = {
		{50,60,55,70,65,80,75},   // shop 1 sales for 7 days
		{40,55,60,65,70,75,80},   // shop 2 sales for 7 days
		{45,50,55,60,65,70,75}   // shop 3 sales for 7 days
	};


	for (int i = 0; i < 3; i++)
	{
             cout<<"Iam at shop: "<<i+1 <<"\n";

		for (int j = 0; j < 7; j++)
		{
			cout<<chaiSales[i][j] <<" cups \n";
		}
		
	}
	
	
	return 0;
}