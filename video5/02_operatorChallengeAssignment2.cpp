// write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions(ex: IF they have fewer than 10 bags , give them 5 extra). Update the original number using assignment operators.



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int numberOfTeaBags;
cout<<"Enter the number of tea bags you have\n";
cin>>numberOfTeaBags;
	if(numberOfTeaBags<10){
		numberOfTeaBags +=  5;
        cout<<"Since you have less than 10 tea bags, we are willing you to provide 5 more, so the total sums upto "<<numberOfTeaBags;
	}
	else{

		cout<<"the total number of tea bags is  "<<numberOfTeaBags;
	}
	return 0;
}