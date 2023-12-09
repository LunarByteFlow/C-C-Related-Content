/*function overloading*/
#include<iostream>
class sum{
	int a,b,c,d;
	int x;
	public:
		sum(int u,int v){
			a = u;
			b = v;
		}
		
		sum(int u, int v, int w){
			a = u;
			b = v;
			c = w;
		}
		
		sum(int u, int v, int w, int z){
			a = u;
			b = v;
			c = w;
			d = z;
		}
		void add(int a,int b){
			x = a + b;
			std::cout<<" "<<a<<" + "<<" "<<b<<" + "<<" = "<<" "<<x;
		}
		
		
			void add(int a, int b, int c){
			x = a + b + c;
			std::cout<<" "<<a<<" + "<<" "<<b<<" + "<<" "<<c<<" = "<<x;
			}
		
		
			void add(int a,int b,int c,int d){
			x = a + b + c + d;
			std::cout<<" "<<a<<" + "<<" "<<b<<" + "<<" "<<c<<" + "<<" "<<d<<" = "<<x;}
	
};
int main(){
	sum num1;
	num1(1,2);
	num1.add();
	
	num1(1,2,3);
	num1.add();
	
	
	
}
