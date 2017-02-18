#include <iostream>
using namespace std;
void insertion(){
	int A[] = {40,30,20,50,10};
	int y=1;
	 for (int i=1; i<5; i++){
	 	int tmp=A[i];
	 	int j=i-1; 
		 while(j>=0 && tmp<A[j], j--){
	 		A[j+1] =j;
		}
		A[j+1] = tmp;
			cout << "pass: "<<y++<<" : ";
		for(int m=0; m<5; m++){
			cout<< A[m]<<" ";
		}
			cout<<endl;
	}
}
int main(){
	insertion();
}
