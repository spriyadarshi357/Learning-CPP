#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cout<<"Enter the value of a, b & c"<<endl;
	cin>>c;	// 3
	cin>>a;	// 1
	cin>>b;	// 2
	
	if ( a > b && a > c){
		cout<<a<<" is greater than "<<b<<" & "<<c<<endl;
	} if ( b > a && b > c){
		cout<<b<<" is greater than "<<a<<" & "<<c<<endl;
	} if ( c > a && c > b){
		cout<<c<<" is greater than "<<a<<" & "<<b<<endl;
	}else {
		cout<<"a, b & c are same";
	}
	
	
	return 0;
}
