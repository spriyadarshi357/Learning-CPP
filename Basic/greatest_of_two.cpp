#include<iostream>
using namespace std;

int main(){
	int a, b, result;
	cout<<"Enter the value of A and B respectively: "<<endl;
	cin>>a;
	cin>>b;
	
	if(a > b){
		cout<<a<<" is greater than "<<b<<endl;
	}else if(a < b){
		cout<<b<<" is greater than "<<a<<endl;
	}else{
		cout<<"A and B are same"<<endl;
	}
	
	return 0;
}
