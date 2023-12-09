#include<iostream>
using namespace std;
class base{
	private:
		int c;
	public:
	int add(int a,int b){
		c = a +b;
	}
};

class derived:public base{
	int show(){
		cout<<"the addintion will be:  "<< c<<endl;
	}
};
int main(){
	base x1;
	
}
