#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; //no of testcases
	cin>>t;
	for(int b=0;b<t;b++){
		int n,k;
		cin>>n>>k;
		int a[100];
		for (int i=0;i<n;i++) {
			int r;
			cin>>r;
			a[i]=r;
		}
    		//int size = n; // Calculate the number of elements in the array

    		// Loop through the array and print each element
    		//for(int i = 0; i < size; ++i) {
        	//std::cout << a[i] << " ";
    		//}
		int newa[100];
		for ( int i=0;i<n;i++){
			int testing=0;
			int s=0;
			int sum=0;
			int j=i;
			while(j<n){
				sum=sum+a[j];
				j=j+1;
				s=s+1;
				if (sum >= k){
					testing++;
					break;
				}
				
			}
			if (testing!=0){
				newa[i]=s;
			}
			else{
				newa[i]=n+1;
			}

		}
		// Initialize the minimum value with the first element of the array
		if (newa[0]!=n+1){
    		int minValue = newa[0];

    		// Iterate through the array starting from the second element
    		for (int i = 1; i < n; ++i) {
        		if (newa[i] < minValue) {
            		minValue = newa[i];
        		}
    		}	

    		// Output the minimum value
    		cout << minValue << endl;}
		else{
			cout<<-1<<endl;
		}

	}
}
