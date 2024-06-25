#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main() {
        int t;
        cin>>t;
        vector<int> vec;
        for (int i=0;i<t;i++){
                int n;
                cin>>n;
		//cout<<n<<endl;
		vector<pair<int,int>> v;
                for (int j=0;j<n;j++){
			int a,b;
			cin>>a>>b;
			//cout<<j<<endl;
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(), v.end());
		//for (int g=0;g<n;g++){
		//	cout<<v[g].first<<" "<<v[g].second<<endl;
		//}

		int greet=0;
		for (size_t k = 0; k < n; ++k) {
        		
			for (size_t l = k+1; l < n; ++l) {
				
				if (v[k].second > v[l].second) {
					//cout<<v[k].second<<">"<< v[l].first<<endl;
					greet++;
				}
				else {
					continue;
				}
			}
    		}
		vec.push_back(greet);
	}
	for (int s : vec){
		cout<<s<<endl;
	}
	return 0;
}

