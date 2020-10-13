#include <iostream>
using namespace std;

int main(){
	
	int table;
	
	cout<<"What table you want to print? ";
	cin>>table;
	
	for(int i = 1 ; i <= 10; i = i + 1){
		cout<<table<<" x "<<i<<" = "<< table * i<<endl;
	}
	
	return 0;
}
