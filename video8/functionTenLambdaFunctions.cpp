// lambda functions


#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int helloChai(){

}

int main(){
	
  // lambda - these are functions but the difference is that they dont have function name.
// syntax -  [](){}


// here auto is a datatype used in case i dont know the datatype that is returning

  auto preparedChai = [](int cups){
     cout<<"Preparing "<< cups <<" cups of tea"<<endl;


  };

  preparedChai(4);





	return 0;
}