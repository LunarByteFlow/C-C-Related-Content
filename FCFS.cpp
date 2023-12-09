//C++ program for fcfs algorithm
#include <iostream>
using namespace std;
//waiting time for all processes
void findwaitingtime(int processes[],int n,int bt[],int wt[] ){
	//waiting time for first process is zero
		wt[0] = 0;
		for(int i = 1; i < n; i++){
			wt[i] = wt[i-1] + bt[i-1];
		}
}
//Finding turn around time for all processes 
void findturnaroundtime(int processes[],int n, int bt[],int wt[],int tat[]){
	for(int i = 0;i < n;i++){
		tat[i] = wt[i] + bt[i];
	}
}
//Function to calculate average time
void Findavgtime(int processes[],int n,int bt[]){
	int wt[n],tat[n],total_wt = 0,total_tat = 0;

//	for waiting time
	findwaitingtime(processes, n,bt,wt );
//	For turn around time
	findturnaroundtime(processes, n, bt,wt,tat);
	 // to display the process along with the details
	 cout<<"Processes" << "Burst time" << "Waiting time" << "Turn Around Time"; 
	
	
//	for total_time
	for(int i = 0; i< n ; i++){
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		 // to display the process along with the details
	 	cout<< ""<< i+1 << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i]; 
	}
	
	cout<< "\n Average waiting time = "<< (float)total_wt/n;
	cout<< "\n Average waiting time = "<< (float)total_tat/n;
	
	
}
int main(){
	// Drivers code 
	int processes[] = {1,2,3};
	int n = sizeof processes / sizeof processes[0];
	
	//Burst time of all processes
	int burst_time[] = {10,5,8};
	
	Findavgtime(processes,n,burst_time);
	
	return 0;
}
