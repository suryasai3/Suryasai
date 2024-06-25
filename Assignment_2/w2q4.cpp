#include <iostream>
#include <algorithm>  // For std::sort
#include <vector>
#include <utility>
using namespace std;

int main() {
        int t;
        cin>>t;
	vector<int> vec1;
	vector<int> vec2;
	vec2.push_back(0);
	vector<pair<int,int>> vec3;
        for (int i=0;i<t;i++){
                int n;
                cin>>n;
		vec2.push_back(n);
                int* arr = new int[2*n];
                for (int i = 0; i < 2*n; ++i) {
                        cin >> arr[i];
                }
                sort(arr, arr + 2*n);
		int sum=0;
		for (int j=0;j<((2*n)-1);j++){
			int diff=arr[j+1]-arr[j];
			sum=sum+diff;	
		}
		sum=sum-arr[n]+arr[n-1];
		vec1.push_back(sum);
		int a,b;
		a=n;
		b=n-1;
		for (int k=n;k<(2*n);k++){
			vec3.push_back(make_pair(arr[a],arr[b]));
			a++;
			b--;
		}
	}
	int a=0;
        int b=0;
	int i=0;
	for (const int& element : vec1) {
		a=a+vec2[i];
                b=b+vec2[i+1];
		cout<<element<<endl;
		for (size_t j=a;j<b;j++) {
        		cout << vec3[j].first <<" "<< vec3[j].second << endl;
    		}
		i++;
	}

	return 0;
}
