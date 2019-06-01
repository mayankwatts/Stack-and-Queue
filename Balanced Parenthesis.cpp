#include <iostream>
#include <stack>
using namespace std;

bool checkBalanced(char *exp) {
    stack<char> s;
    
    int i=0;
	
    while(exp[i]!=NULL){
        
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]);
            i++;
        }
        
        else if((exp[i]=='}' || exp[i]==']' || exp[i]==')') && s.empty()){
            s.push(exp[i]);
        }
        
        else if((exp[i]=='}' && s.top()=='{') || (exp[i]==']' && s.top()=='[') || (exp[i]==')' && s.top()=='(')){
            s.pop();
            i++;
        }
          
        else 
            i++;
        
    }
    
    return s.empty();
}

int main() {
    char input[100000];
    cin.getline(input, 100000);
//    cin >> input;
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
