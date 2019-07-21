#include<bits/stdc++.h>
using namespace std;

queue<int> reverseKElements(queue<int> input, int k) {
	
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(input.front());
        input.pop();
    }
    
    queue<int> ans;
    for(int i=0;i<k;i++){
        ans.push(s.top());
        s.pop();
    }
    
    while(!input.empty()){
        ans.push(input.front());
        input.pop();
    }
    
    return ans;  
}

int main() {
	int n=0;
	cin>>n;
	queue<int> Queue;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		Queue.push(temp);
	}
	int k;
	cin>>k;
	
	queue<int> ans = reverseKElements(Queue,k);
	while (!ans.empty()) {
        	cout << ans.front() << endl;
        	ans.pop();
    	}
      
      return 0;
}
