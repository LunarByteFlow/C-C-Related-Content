#include<iostream>
class base{
	public:
		int var_base = 100;
		virtual void show(){
			std::cout<<"The value of var_base is : "<<var_base<<"\n";
		}
};
class derived:public base{
	public:
		int var_derived=200;
		void show(){
			std::cout<<"The value of var_derived: "<<var_derived<<"\n";
		}
	
};
int main(){
	base * pointer_base_class;
	derived object_derived_class;
	pointer_base_class = &object_derived_class;
	pointer_base_class->show();
	return 0;
	
}
