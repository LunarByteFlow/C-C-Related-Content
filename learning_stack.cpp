#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>Stackname;
//	operations on stack
//	check if empty --> empty()
//	checks size --> size()
//	adds element --> push()
//	remove element --> pop()
	
	for(int i= 0 ; i <= 10; i++){
		cout<<"Enter element number"<<i<<endl;
		cin>>i;
		Stackname.push(i);
	}
	for(int i= 10 ; i <= 0; i++){
		Stackname.pop();
	}
//	cout<<Stackname;
//	for(int i = 0; i = 10 ; i ++){
//		cout<<"Element"
//	}
	if(Stackname.empty()){
		cout<<"The stack is empty."<<endl;
	}
	else{
		cout<<"The stack is full."<<endl;
	}
	cout<<"The size of stack is:  "<<Stackname.size()<<endl;
	return 0;
}

