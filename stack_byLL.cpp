#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int k){
        this->data=k;
        this->next=NULL;
    }
   
};
class Stack{
    Node*top;
   public:
   Stack(){
       top=NULL;
   }
    void push(int p){
       Node*temp= new Node(p);
       temp->next=top;
       top=temp;
    }
    void print(){
        Node*p=top;
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
    }
    void pop(){
        Node*temp=top;
       top=top->next;
       
       // delete(temp);
    }
    void empty(){
        if(top==NULL){
            cout<<"Yes, The stack is empty"<<endl;
        }
        else{
            cout<<"No, the stack is not empty"<<endl;
        }
    }
    void peek(){
        if(top==NULL){
            cout<<"NO Data";
        }
        else{
            cout<<"Element at top is "<<top->data<<endl;
        }
    }
    
};
int main(){
    Stack s1;
    s1.empty();
    s1.push(3);
    s1.push(23);
    s1.push(63);
    s1.push(89);
   // s1.print();
    s1.pop();
    s1.print();
    s1.peek();
     s1.empty();
}
