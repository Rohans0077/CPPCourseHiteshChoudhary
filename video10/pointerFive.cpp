// Pointer -> Datatype that Stores the memory address of a variable and points to it.

// "*" and "&"

// & -> giving reference to the memory
// * -> to declare a datatype


// There are 2 types of memory -> 

// 1 .Regular memory(Stack Memory) 
// 2 .Dynamic memory(Heap Memory) 

// in stack memory the functions that we create the space taken will be automatically deleted after executing , but in heap memory we need to delete the memory manually.

// in stack memory the function after executing disappears whereas in heap memory the memory stays intact and we need to delete it manually

// preview : https://www.blogger.com/blog/post/edit/preview/5575410003394829474/1430059746751461625



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int* prepareChaiOrders(int cups){
//    to allocate dynamic memory we use "new" keyword

 int* orders = new int [cups];  // [cups]-> no of cups (size of array)

 for (int i = 0; i < cups; i++)
 {
	orders[i] = (i+1) * 10;
 }
 return orders;

}

int main(){
	int cups = 5;
	int* chaiOrder = prepareChaiOrders(cups);

	for (int i = 0; i < cups; i++)
	{
		cout<<" Cup: "<< i+1 << " has "<< chaiOrder[i] << " ml \n";

	}


	// to remove the dynamic memory(free up space of heap memory) we use "delete" keyword
// and since we are deleting an array so we give "[]" to delete

	delete[] chaiOrder;
	




	return 0;
}
