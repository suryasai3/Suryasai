#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#include <unordered_set>
using namespace std;
unsigned long long power(int a, int b) {
	unsigned long long result = 1;
    	for (int i = 0; i < b; ++i) {
        	result *= a;
    	}
        return result;
}
struct pair_hash {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2>& pair) const {
        auto hash1 = hash<T1>{}(pair.first);
        auto hash2 = hash<T2>{}(pair.second);
        return hash1 ^ hash2;
    }

    // Function to check equality of pairs considering (a, b) == (b, a)
    template <class T1, class T2>
    bool operator() (const pair<T1, T2>& p1, const pair<T1, T2>& p2) const {
        return (p1.first == p2.first && p1.second == p2.second) ||
               (p1.first == p2.second && p1.second == p2.first);
    }
};

// Function to add a pair if neither (a, b) nor (b, a) is present
bool addPairIfNotPresent(unordered_set<pair<long double, long double>, pair_hash>& pairSet, const pair<long double,long double>& p) {
    // Check both (a, b) and (b, a)
    if (pairSet.find(p) == pairSet.end() && pairSet.find(make_pair(p.second, p.first)) == pairSet.end() && (!(abs(log10(p.first/p.second)-(p.first-p.second)*log10(2))<=1e-5))) {
	

        pairSet.insert(p);
	
        return true;
	
    } else {
        return false;
    }
}
int main() {
        int t;
        cin>>t;
        vector<int> vec;
        for (int i=0;i<t;i++){
		unordered_set<pair<long double,long double>, pair_hash> pairSet;

                int n;
                cin>>n;
                long double* arr = new long double[n];
		//unsigned long long int* carr = new unsigned long long int[n];
                for (int j = 0; j < n; ++j) {
			cin>>arr[j];
                        //carr[j]=power(2,a);
                }
		//for(int m=0;m<n;m++){
		//	cout<<carr[m]<<" ";
		//}
		//cout<<endl;
		int count=0;
		for (int k=0;k<n;k++){
			for(int l=k+1;l<n;l++){
				
				//cout<<arr[k]<<" "<<arr[l]<<endl;
				if(arr[k]!=arr[l]){
					pair<long double,long double> p=make_pair(arr[k],arr[l]);
					if (addPairIfNotPresent(pairSet, p)) {
					

					long double p=arr[k]/arr[l];
				//cout<<abs(log10(p)-((arr[k]-arr[l])*log10(2)))<<endl;
				//cout<<p<<endl;
				//cout<<arr[k]-arr[l]<<endl;
				//cout<<(arr[k]-arr[l])*log10(2)<<endl;
					if (abs(log10(p)-(arr[k]-arr[l])*log10(2))<=1e-5){
						//cout<<arr[k]*carr[l]<<" "<<arr[l]*carr[k]<<endl;
						count++;
					}
					}
				}
				else {
					count++;
				}
			}

		}
		vec.push_back(count);
		delete[] arr;
	}
	for(int num : vec){
		cout<<num<<endl;
	}
	return 0;
}
		
