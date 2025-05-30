// array -> continuous memory allocation


// arrays in C++ dont have size() method This can only be used for vectors

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int chaiTemperature[5] = {85, 90, 88, 92, 89};

	cout<<"Chai Temperatures: "<<endl;
	for (int i = 0; i <= 5; i++)    // we get garbage value if we go array out of bound
	{
		/* code */
		cout<< chaiTemperature[i]<<" degree C "<< endl;
	}
	

	return 0;
}