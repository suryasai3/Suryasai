#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
        int t;
        cin>>t;
        vector<int> vec;
        for (int i=0;i<t;i++){
                int n;
                cin>>n;
                string str;
		cin>>str;
		int len=str.length();
		vector<int> factors;
    		for (int l = 1; l <= len; ++l) {
        		if (len % l == 0) {
           	 		factors.push_back(l);
        		}
    		}
		int m=0;
		
		for(int elements : factors ){
			int s=0;
			for (int start=0;start<len-m;start++){
				string substring = str.substr(start,elements);
				int mul=len/elements;
				string substring1;
				for (int j=0;j<mul;j++){
					substring1=substring1+substring;
				}
				//cout<<"hi"<<endl;
				//cout<<substring1<<endl;
				int diffCount = 0;
    				for (int k = 0; k < len; ++k) {
        				if (str[k] != substring1[k]) {
            				++diffCount;
        				}		
    				}
				//cout<<diffCount<<endl;
				if ((diffCount==0)||(diffCount==1)){
					vec.push_back(elements);
					s=1;
					break;	
				}
			}
			if (s==1){
				break;
			}
			m++;
		}
		//auto minElement = min_element(vec2.begin(), vec2.end());

    		// Check if the vector is not empty
    		//if (minElement != vec.end()) {
        	//	cout << "The smallest element is: " << *minElement << endl;
    		//} else {
        	//	cout << "Vector is empty!" << endl;
    		//}
	}
	for (int e : vec){
		cout<<e<<endl;
	}
	return 0;
}

