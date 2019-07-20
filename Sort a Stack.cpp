#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

void sortStack(stack<int> &s){
	
    int size=s.size();
    int arr[size];
    int i=0;
    while(!s.empty()){
        arr[i]=s.top();
        s.pop();
        i++;
    }
    
    sort(arr,arr+size);
    
    for(int i=size-1;i>=0;i--){
        s.push(arr[i]);
    }
    cout<<endl;

}

int main() {
    stack<int> input;
    int size, value;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cin >> value;
        input.push(value);
    }
    sortStack(input);
    while(!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
    cout << endl;
    
    return 0;
}
