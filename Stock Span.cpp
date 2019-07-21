#include <iostream>
#include<queue>
#include<stack>
using namespace std;

int* stockSpan(int *price, int size) {
    stack<int> s;
    int* output=new int[size];
    for(int i=0;i<size;i++){
        if(s.empty()){
            s.push(i);
            output[i]=i+1;
        }
        else if(price[i]>price[s.top()]){
            while(!s.empty() && price[i]>price[s.top()]){
                s.pop();
            }
            if(s.empty()){
                output[i]=i+1;
            }
            else{
                output[i]=i-s.top();
            }
            s.push(i);
        }
        else{
            output[i]=i-s.top();
            s.push(i);
            
        }
    }
    
    return output;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for(int i = 0; i < size; i++) {
    	cin >> input[i];
    }
    int *output = stockSpan(input, size);
    for(int i = 0; i < size; i++) {
    	cout << output[i] << " ";
    }
    
    return 0;
}
