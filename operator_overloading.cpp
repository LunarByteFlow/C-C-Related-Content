#include<iostream>
using namespace std;
class complex{
	private:
		int real,imag;
		public:
			complex(int a,int b){
				real = a;
				imag = b;
			}
			
			void show(){
				cout<<" The number is :   "<<real<<" + "<<"i "<<imag<<endl;
			}
};
int main(){
	complex x1(9,8);
	x1.show();
	
	return 0;
}
