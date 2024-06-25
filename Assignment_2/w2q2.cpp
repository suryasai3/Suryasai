#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<int> vec1;
	for (int i=0;i<t;i++){
		int n;
		cin>>n;
    		int* arr = new int[n];
		for (int i = 0; i < n; ++i) {
        		cin >> arr[i];
    		}	
		sort(arr, arr + n);

    		// Output the sorted array
    		//cout << "Sorted array in ascending order: ";
    		//for (int i = 0; i < n; ++i) {
       	 	//	cout << arr[i] << " ";
    		//}
    		//cout << std::endl;
		vector<int> vec;
		for (int j=0;j<n;j++){
			int count=0;
			int p=arr[j];
			for(int k=j+1;k<n;k++){
				int q=arr[k];
				if (((q-p)>0)&&((q-p)<n)){
					count=2;  
					for (int l=1;l<=(n-q+p);l++){
						int r=q+l;
						for (int m=0;m<n;m++){
							vector<int> vec2;
							if ((m!=j)&&(m!=k)){
								int h=r-arr[m];
								
								if ((h<=n)&&(h>0)){
									if ((h!=l)&&(h!=q-p+l)){
										count++;
									}

								}
								vec2.push_back(h);
							}
						}
						vec.push_back(count);
					}
				}
			}
		}
		for (const int& element : vec) {
                	cout << element << " ";
                }
		cout <<endl;
		auto maxIt = max_element(vec.begin(), vec.end());

    		if (maxIt != vec.end()) {
        		vec1.push_back(*maxIt);
    		} else {
        		vec1.push_back(1);
    		}
		delete[] arr;
	}
	for (const int& element : vec1) {
        	cout << element << endl;
    	}
    	
    	return 0;
	
}

