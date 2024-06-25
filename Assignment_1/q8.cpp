#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		int a[100];
		for (int j=0;j<n;j++) {
                        int r;
                        cin>>r;
                        a[j]=r;
		}
		int count=0;
		for (int k=0;k<n;k++){
			
			int xr=a[k];
			if (xr==m){
				count++;
			}
			for (int l=k+1;l<n;l++){
				xr=xr^a[l];
				if (xr==m){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
	
}
