// Logical operators
// // create a program that checks if a user is eligible for a tea subscription discount. The discount applies if a user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count. 


// choice 1: 
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	string userStatus;
// 	int numberTeaCups;

// 	cout<<"Welcome to chai with cpp, please fill your details to approve your eligibility for discount\n";


// 	cout<<"Enter your status as well as your cup count to get to know whether you are eligible for tea discount or not\n";
// 	cout<<"Enter your Status\n";
// 	getline(cin,userStatus);
// 	cout<<"Enter the number of tea cups you have purchased\n";
// 	cin>>numberTeaCups;
// 	if(userStatus == "student" || numberTeaCups > 15 ){
// 		cout<<"Congratulations you are eligible for Tea subscription Discount\n";

// 	}else{

// 	cout<<"Sorry you are not eligible for discount since you are not a student or the cup count is less\n";
// 	}

// 	return 0;
// }



// choice2 :



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int cups;
	bool isStudent;
cout<<"Are you a student(press 1 for yes and 0 for no ?\n";
cin>> isStudent;
cout<<"Enter the number of cups you have purchased\n";
cin>>cups;

	if( isStudent || cups > 15){
		cout<<"you are eligible for discount\n";
	}else{
	cout<<"you are NOT eligible for discount\n";
}
	return 0;
}





