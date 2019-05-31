#include<iostream>
using namespace std;


template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head=NULL;
        size=0;
        
    }
    
    int getSize() {
        
        return size;
        
    }
    
    bool isEmpty() {
        
        return size==0;
        
    }
    
    void push(T element) {
        
        Node<T> *newNode= new Node<T>(element);
            newNode->next=head;
            head=newNode;
        
        size++;
        
    }
    
    T pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(head==NULL){
            return 0;
        }
        
            T a=head->data;
            Node<T> *temp=head;
            head=head->next;
            delete temp;
            size--;
            return a;
    
        
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(head==NULL){
            return 0;   
        }
        else{
            return head->data;
        }  
    }
     
    
};

#include "Stack.h"
    int main() {
        
        Stack<int> st;
        
        int choice;
        cin >> choice;
        int input;
        
        while (choice !=-1) {
            if(choice == 1) {
                cin >> input;
                st.push(input);
            }
            else if(choice == 2) {
                int ans = st.pop();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 3) {
                int ans = st.top();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 4) {
                cout << st.getSize() << endl;
            }
            else if(choice == 5) {
		if(st.isEmpty()){
                	cout << "true" << endl;
		}else{
			cout << "false" << endl;
		}
            }
            cin >> choice;
        }
    return 0;
    }
