#include <iostream>
#include<stack>
using namespace std;

int countBracketReversals(char input[]){
    stack<int> s;
    int i=0;
    while(input[i]!='\0'){
        if(s.size()==0){
            
            s.push(input[i]);
        }
        else if(input[i]=='}' && s.top()=='{'){
            s.pop();
        }
        else{
            s.push(input[i]);
        }
        i++;
    }
    
    if(s.size()==2 && s.top()=='{'){
        s.pop();
        if(s.top()=='}'){
            return 2;
        }
        else{
            return 1;
        }
    }
    else if(s.size()%2==0){
        return s.size()/2;
    }
    else{
        return -1;
    }

}

int main() {
    char input[10000];
    cin >> input;
    cout << countBracketReversals(input) << endl;
    
    return 0;
}
