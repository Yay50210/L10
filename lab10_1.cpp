#include<iostream>
using namespace std;

int main(){
	char grade;
	int i = 1;
	int count[5] = {'A','B','C','D','F'}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade;
		if(grade == 'A') {
			count[0] +=1;
			
		}
			
		else if(grade == 'B') {
			count[1] +=1;
		}else if(grade == 'C') {
			count[2] +=1;
		}else if(grade == 'D') {
			count[3] +=1;
		}else if(grade == 'F') {
			count[4] +=1;	
		}
		else if(grade == '0')break;
		
		else{ 
			cout << "Wrong input. Please input again."<<endl;
			i--;
		} 
		i++;
		
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students."<<endl;
	cout << "A = " << count[0]-65 <<", ";
	cout << "B = " << count[1]-66 <<", ";	
	cout << "C = " << count[2]-67 <<", ";
	cout << "D = " << count[3]-68 <<", ";	
	cout << "F = " << count[4]-70 ;
	
	return 0;
}