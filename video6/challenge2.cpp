#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int hour;
	cout<<"Enter the current hour(input between 1-23)\n";
	cin>>hour;
     if(hour>=8 && hour<=18){
		cout<<"The tea shop is open\n";
	 }else{
		cout<<"The tea shop is close\n";
	 }

	return 0;
}