#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;

	for (int i=0;i<t;i++){
	int testing=0;
	stack<char> charStack;
	string input;
	cin>>input;

	for (char c : input) {
		if ((c=='(')||(c=='[')||(c=='{')){
			charStack.push(c);
		}
		if (c==')'){
			if (charStack.top()!='('){
				cout<<"false"<<endl;
				testing=1;
				break;
			}
			else if (charStack.top()=='('){
				charStack.pop();
			}
		}
                if (c==']'){
			if (charStack.top()!='['){
				cout<<"false"<<endl;
				testing=1;
				break;
				
			}
			else if (charStack.top()=='['){
				charStack.pop();
			}
		}
                if (c=='}'){
			if (charStack.top()!='{'){
				cout<<"false"<<endl;
				testing=1;
                                break;
                        }
                        else if (charStack.top()=='{'){
                                charStack.pop();
                        }
		}
	}
	if (charStack.empty()){
		cout<<"true"<<endl;
	}
	else if(testing==0){
		cout<<"false"<<endl;
	}
	}
	return 0;
}

