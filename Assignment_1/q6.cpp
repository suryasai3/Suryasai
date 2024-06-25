#include<simplecpp>
main_program{
	int r;
	cin>>r;
	repeat(r){
		int n;
		cin>>n;
		int a[1000];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int minValue = a[0];

                // Iterate through the array starting from the second element
                for (int i = 1; i < n; ++i) {
                        if (a[i] < minValue) {
                        minValue = a[i];
                        }
                }

                // Output the minimum value
                cout << minValue << endl;
	}
}

