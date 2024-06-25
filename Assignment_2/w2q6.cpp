#include <iostream>
#include <algorithm>
#include<functional>
using namespace std;
int main() {
        int n,d;
        cin>>n>>d;
        int* arr = new int[n];
        for (int i = 0; i < n; ++i) {
            	cin >> arr[i];
        }
        sort(arr, arr + n,greater<int>());
	int min=0;
	int count=0;
	int m=n;
	for(int j=0;j<n;j++){
		int a=arr[j];
                min=(d/a);
		min++;
		
		if(min<=m){
			m=m-min;
			count++;
		}
	}
	cout<<count<<endl;
	delete[] arr;
	return 0;
}
