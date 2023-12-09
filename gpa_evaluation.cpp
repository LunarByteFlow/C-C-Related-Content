#include <stdio.h>


//
//char printf(chat string[]){
//	//take input as string always and display on the screen;
//}

int sum_of_two_numbers(int a,int b){
	int sum = a+b;
	printf("The sum is %d",sum );
}

int GPA_evaluation(int math,int physics,int electronics,int islamiat, int cp){
	int total_marks = math+physics+electronics+islamiat+cp;
	int gpa = total_marks /5 ;
	printf("The CGPA is : %d",gpa);
	
}
int main(){
//	int user_math,user_physics,user_electronics, user_islamiat, user_cp;
//	printf("Enter you marks for maths");
//	scanf("%d",&user_math);
//	
//	printf("Enter you marks for maths");
//	scanf("%d",&user_physics);
//	
//	printf("Enter you marks for maths");
//	scanf("%d",&user_electronics);
//	
//	printf("Enter you marks for maths");
//	scanf("%d",&user_islamiat);
//	
//	printf("Enter you marks for maths");
//	scanf("%d",&user_cp);
	
	
//	GPA_evaluation(user_math,user_physics,user_electronics,user_islamiat,user_cp);
	
	sum_of_two_numbers(10,20);
	return 0;
	
	
}
