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
		int maxValue = a[0];

    		// Read k numbers from the user and find the maximum value
    		for (int i = 1; i < k; ++i) {

        		if (a[i] > maxValue) {
            		maxValue = a[i];
        		}
    		}
		cout<<maxValue<<" ";


		int newa[100];
		for ( int i=k;i<n;i++){
			if (a[i]>maxValue){
				newa[i]=a[i];
				maxValue=a[i];
			}
			else{
				newa[i]=maxValue;
			}

		}
		
    		for (int i = k; i < n; ++i) {
        		cout << newa[i] << " ";
    		}
    		cout << endl;

    

	}
}
