#include<simplecpp>
main_program{
        int t; //no of testcases
        cin>>t;
        repeat(t){
                int n;
                cin>>n;
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
                        
                        int s=0;
                        int sum=a[i];
                        int j=i+1;
			int max_sum;
			max_sum=sum;
                        while(j<n){
				
				sum=sum+a[j];
                                j=j+1;
                                s=s+1;
				if (sum >= max_sum){
                                	max_sum=sum;        
                                }

                        }
			newa[i]=max_sum;

                }
		
                int maxValue = newa[0];

    		// Iterate through the array starting from the second element
    		for (int i = 1; i < n; ++i) {
        		if (newa[i] > maxValue) {
            		maxValue = newa[i];
        		}
    		}

    		// Output the maximum value
    		cout << "The maximum value in the array is: " << maxValue << endl;

        }
}

