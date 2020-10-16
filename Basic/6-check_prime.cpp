#include<iostream>
using namespace std;

void checkPrime(int num){
	int factor = 0;
	
	for(int i = 1 ; i <= num ; i++){
		if(num%i == 0){
			factor = factor + 1;
		}
	}
	
	if(factor<3){
		cout<<num<<" is prime number"<<endl;
	}
	else{
		cout<<num<<" is not prime number";
	}
}

int main(){
	
	checkPrime(13);	// 13 is prime number
	checkPrime(24);	// 24 is not a prime number
	
	return 0;
}
