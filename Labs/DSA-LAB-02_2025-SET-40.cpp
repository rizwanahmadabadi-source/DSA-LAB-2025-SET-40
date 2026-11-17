#include<iostream>
using namespace std;
int main () {
	string mark;
	int marks[5];
	for(int i=1;i<5;i++){
		cout<<"Enter Marks of Student "<<i<<":  "<<endl;
		cin>>marks[i];
		
	}
	cout<<"============================================"<<endl;
	int array[5] ;
	for (int i=1 ;i<5 ;i++){
		
		cout<<"Marks Of Student "<<i<<":   "<<marks[i]<<" || Status :";
		if(marks[i] <= 33){
			cout<< "Fail"<<endl;
		}
			else { cout<<"Pass"<<endl;
			}
		;
	
	}
	cout<<"============================================";
	return 0;
}
