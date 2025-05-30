#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int totalChaiServed(int chai[], int size){
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total = total + chai[i];

	}
	return total;
	
}

int main(){
	int chaiServed[7] = {50,60,55,70,80,57,43};

	int total = totalChaiServed(chaiServed, 7);
	cout<<"Total is: "<<total;



	return 0;
}