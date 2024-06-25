#include<simplecpp>
main_program{
	int t; //no of testcases
	cin>>t;
	repeat(t){
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
        	int l=0;	
		for ( int i=0;i<n;i++){
			int testing=0;
			int s=0;
			int sum=0;
			int j=i+1;
			while(j<n){
				sum=a[i]+a[j];
				j=j+1;
				s=s+1;
				if (sum == k){
					testing=1;
					l++;	
					break;
				}
				
			}
			if (testing != 0){
			cout<<i<<" "<<j-1<<endl;
			}
			else if ((testing==0)&&(l==0)&&(i==n-1)) {
				cout<< -1<<" "<<-1<<endl;
			}

		}

	}
}
