#include<iostream>
class add{
	protected:
		int a,b,c;
	public:
		int sum(){
			c = a + b;
		}
		
		int show (){
			std::cout << "The sum of a and b is: "<< sum() << "\n";
		}
		
		add(int x,int y){
			a = x;
			b = y;
		}
};
int main(){
	add x1(3,4);
	x1.sum();
	x1.show();
	return 0;
	
}
