#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
        int t;
        cin>>t;

        for (int i=0;i<t;i++){
        	string str;
        	cin>>str;
		int q;
		cin>>q;
		int len = str.length();
		int count=0;
        	for (int j=0;j<len;j++) {
			int c=1;
			vector<char> newa;
			newa.push_back(str[j]);
			if(c==q){
				count++;
			}		
			for(int k=j+1;k<len;k++){
				char target=str[k];
				//for (char ch : newa) {
                                //	cout << ch << " ";
                        	//}
                        	//cout << endl;
				bool found = false;
    				for (char ch : newa) {
        				if (ch == target) {
            					found = true;
           	 				break;
        				}
   	 			}
				if (!found){
					c++;
				}
				if (c==q){
					count++;
					//cout<<c<<endl;
					
						
				}
				newa.push_back(str[k]);
			}
			//for (char ch : newa) {
        		//	cout << ch << " ";
    			//}
    			//cout << endl;

		}
		cout<<count<<endl;
		//cout<<len<<endl;
	}
	return 0;
}

