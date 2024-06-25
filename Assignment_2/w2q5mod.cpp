#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
using namespace std;
bool isPairInVector(const vector<pair<long long int,long long int>>& vec, const pair<long long int,long long int>& p) {
    for (const auto& elem : vec) {
        if (elem == p) {
            return true;
        }
    }
    return false;
}

int main() {
        int t;
        cin>>t;
	
        for (int i=0;i<t;i++){
                long long int n,k;

                cin>>n>>k;
		vector<string> vec;
		vector<pair<long long int,long long int>> v;
		vector<long long int> w;
                //long long int* arr = new long long int[n];
		long long int b;
		cin>>b;
		w.push_back(b);
                for (int x = 1; x < n; ++x) {
			long long int a;
                        cin >> a;
			//w.push_back(a);
			for(long long int num : w ){
				v.push_back(make_pair(num,a));
			}
			w.push_back(a);
                }

		for(int j=0;j<k;j++){
			
			pair<long long int,long long int> p;
			cin >> p.first >> p.second;
			if (isPairInVector(v, p)) {
        			//cout <<"YES"<< endl;
				vec.push_back("YES");
    			} else {
        			//cout << "NO" <<endl;
				vec.push_back("NO");
    			}
			
		}
		for (const string& str : vec) {
                	cout << str << endl;
        	}
	}
	return 0;
}
