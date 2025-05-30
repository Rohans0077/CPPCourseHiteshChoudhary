// ## 4. Break Keyword

// Challenge: Write a program That keeps serving tea until the user says they've had enough (input "stop"). Use a break statement to exit the loop when the user types "stop".




// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
	

// 	string response;
// 	int count = 0;
// 	int cost = 10;

// 	for (int i = 0; i < INT_MAX; i++)
// 	{
// 	    cout<< "Do you want another tea cup sir(Enter yes/stop)\n";
// 		getline(cin, response);

// 		if(response == "yes"){
// 			count++;
// 		}

// 		if(response == "stop"){
// 			break;
// 		}

        


// 	}
	
// 	cout<<"You have ordered "<<count<< " Tea Cups and the total cost is :  "<< count * cost;


	
	
// 	return 0;
// }


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string response;

	while (true)
	{
		cout<<"Do you want another cup of tea (type 'stop' to exit)? \n";

		getline(cin, response);

		if (response == "stop")
		{
			break;
		}
		
		cout<<"Here's your another cup of tea\n";

	}

	cout<<"No more tea will be served to you\n";
	 
	return 0;
}

















