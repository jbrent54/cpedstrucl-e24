#include <iostream>
using namespace std;

void shell(int *a, int n){
	int h,i,j,k;
	for( h=n; h/=2;){
		for( i=h; i<n; i++){
			k=a[i];
			for (j=i;j>=h && k>a[j-h]; j-=h){
				a[j]=a[j-h];
			}
			a[j]=k;
		}
	}
}

int main (int ac,char **av){
	int a[] = {4,65,2,-31,0,99,2,83,782,1};
	int n = sizeof a / sizeof a[0];
	int y=1;
	shell(a,n);
		cout << "pass: "<<y++<<" : ";
		for(int n=0;n<8;n++){
			cout<< a[n]<<" ";
		}
	return 0;
}
