#include <iostream>
using namespace std;

int main(){
	int size,l1,k,h1,l2,h2,i,j;
	int numArr[]={6,5,3,1,8,7,2,4};
	int temp[8];
	int n(8);
	int y=1;
	for(int size=1; size<n; size=size*2){
		l1=0;
		k=0;
		while(l1+size < n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if( h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2){
				if(numArr[i] <= numArr[j])
					temp[k++]=numArr[i++];
				else
					temp[k++]=numArr[j++];	
			}
			while(i<=h1)
				temp[k++]=numArr[i++];
			while(j<=h2)
				temp[k++]=numArr[j++];
				l1=h2+1;
		}
		for(i=l1; k<8;i++)
			temp[k++]=numArr[i];
		for(i=0; i<n; i++)
			numArr[i]=temp[i];
			
			cout << "pass: "<<y++<<" : ";
		for(int m=0;m<n;m++){
			cout<< numArr[m]<<" ";
		}
	}
}
 
