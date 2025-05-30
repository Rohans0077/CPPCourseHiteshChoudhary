// challenge 1

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int numberTeaPacks;
// 	float pricePerPack;
//     float totalPrice, finalCostAfterTax;
// cout<<"Enter the number of Tea packs you want to buy\n";

// cin>>numberTeaPacks;
// cout<<"Enter the price per tea pack\n";
// 	cin>>pricePerPack;


// 	totalPrice = numberTeaPacks * pricePerPack;

// 	finalCostAfterTax = (totalPrice + (totalPrice* 0.1));

// 	cout<<"The bill is "<<totalPrice<<" Rs and adding all taxes the total sum amounts to "<<finalCostAfterTax;




	
// 	return 0;
// }






// challenge 2:

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int numberTeaBags;
// 	cout<<"Enter the number of tea bags you have\n";
// 	cin>>numberTeaBags;
// 	if(numberTeaBags < 20){
// 		numberTeaBags += 10;
// 	}

// 	cout<< "The total number of tea bags is "<<numberTeaBags;
// 	return 0;
// }













// challenge3:


// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	bool member;
// 	int cups;
// 	cout<<"Are you a member for more than 1 year?(press 1 for yes and 0 for no)\n";
// 	cin>>member;

// 	cout<<"Enter the number of cups you have brought\n";
// 	cin>>cups;
// 	if(cups > 12 || member){
// 		cout<<"Subscription valid\n";
// 	}else{
// 	cout<<"Subscription Invalid\n";
// }
// 	return 0;
// }


// challenge 4:

#include<iostream>
#include <bits/stdc++.h>
using namespace std;             

int main(){
	int green = 1;
	int black = 2;
	int Oolong = 4;

	int final = 1&2&4;
	if(final == 1){
		cout<<"Green";
	}else if(final == 2){
	cout<<"Black";
} else{
	cout<<"Oolong";
}
	return 0;
}