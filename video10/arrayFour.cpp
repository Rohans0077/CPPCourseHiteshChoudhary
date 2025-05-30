// instead of returning a single value if i wanted to return an array what to do



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int totalChaiServed(int chai[], int size){
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total = total + chai[i];

	}

	// here instead of returning total i wanted to return an entire array.

	// we know that in C++ we cannot return the whole array, we can get to know the size of array, and we can even get to know the memory address .
	// so here we return the address of first element of an array
	// so we create a variable and return its first address location. of the array.
	// Link ->https://www.blogger.com/blog/post/edit/preview/5575410003394829474/1430059746751461625

	return total;
	
}

int main(){
	int chaiServed[7] = {50,60,55,70,80,57,43};

	int total = totalChaiServed(chaiServed, 7);
	cout<<"Total is: "<<total;



	return 0;
}