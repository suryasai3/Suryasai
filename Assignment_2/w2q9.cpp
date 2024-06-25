#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	vector<string> v;
	for(int g=0;g<t;g++){
    	int n,m; // example dimensions
	cin>>n>>m;

    	// Initializing a vector of vectors with size n*m and filling it with example values
    	vector<vector<int>> vec1(n, vector<int>(m));
	vector<vector<int>> vec2(n, vector<int>(m));
    
    	// Fill the 2D vector with some values (you can modify this as needed)
    	
    	for(int i = 0; i < n; ++i) {
        	for(int j = 0; j < m; ++j) {
            	cin>>vec1[i][j];
        	}
    	}
	for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                cin>>vec2[i][j];
                }
        }

    	// Display the original 2D vector
    	//cout << "Original 2D vector:" << endl;
    	//for(const auto& row : vec1) {
        //	for(int num : row) {
        //  	cout << num << " ";
        //	}
        //	cout << endl;
    	//}

    	// Sort each row of the 2D vector in ascending order
    	//for(auto& row : vec1) {
        //	sort(row.begin(), row.end());
    	//}

    	// Sort rows based on the first element of each row (you can customize this as needed)
    	sort(vec1.begin(), vec1.end());
	vector<vector<int>> transposed1(m, vector<int>(n));
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                        transposed1[j][i] = vec1[i][j];
                }
        }
	sort(transposed1.begin(), transposed1.end());
	//vector<vector<int>> transposed1(m, vector<int>(n));
        //for (int i = 0; i < n; ++i) {
        //        for (int j = 0; j < m; ++j) {
        //                transposed1[j][i] = vec1[i][j];
        //        }
        //}

	//sort(vec2.begin(), vec2.end());
    	// Display the sorted 2D vector
    	//cout << "\nSorted 2D vector:" << endl;
    	//For(const auto& row : vec1) {
        //	for(int num : row) {
        //   	cout << num << " ";
        //	}
        //	cout << endl;
    	//}
	int s;
	for (int i = 0; i < n; ++i) {
               	for (int j = 0; j < m; ++j) {
                	if (vec1[0][0] == vec2[i][j]){
				s=j;
				break;
			}
                }
        }
	sort(vec2.begin(), vec2.end(), [s](const vector<int>& a, const vector<int>& b) {
        	return a[s] < b[s];
    	});

	vector<vector<int>> transposed2(m, vector<int>(n));
    	for (int i = 0; i < n; ++i) {
        	for (int j = 0; j < m; ++j) {
            		transposed2[j][i] = vec2[i][j];
        	}
    	}
	//vector<vector<int>> transposed2(m, vector<int>(n));
    	//for (int i = 0; i < n; ++i) {
        //	for (int j = 0; j < m; ++j) {
        //    	transposed2[j][i] = vec2[i][j];
        //	}
    	//}
	//sort(vec1.begin(), vec1.end());
        sort(transposed2.begin(), transposed2.end());
	if (transposed1 == transposed2) {
        	v.push_back("YES");
    	} else {
        	v.push_back("NO");
    	}
	}
	for (const string& str : v) {
                cout << str << " " << endl;
        }
    	return 0;
}
