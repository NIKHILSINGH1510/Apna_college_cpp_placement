#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
};
class stack{
    Node* start;
    public:
    stack(){
        start=NULL;
    }
    void push();
    void pop();
};

void stack::push(){
    cout<<"enter the number to be pushed"<<endl;
    int num;
    cin>>num;
    Node *p;
    Node *newnode= new Node();
    newnode->data=num;
    newnode->link=NULL;

    if(start==NULL){
        start = newnode;
    }
    else{ p=start;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link = newnode;
    }
}

void stack::pop(){
    Node *p,*q;
    if(start==NULL){
        cout<<"underflow"<<endl;
    }
    else{p=start;
        while(p->link!=NULL){
            q=p;
            p=p->link;
        }
        cout<<p->data<<endl;
        q->link=NULL;
        delete(p);

    }
}

int main(){

    stack obj1;
    int n;

   do
   {
    cout<<"\nEnter 1 to push"<<endl;
    cout<<"Enter 2 to pop"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    cin>>n;

    switch (n)
    {
    case 1:
            
            obj1.push();
        break;
    case 2: obj1.pop();
        break;
    case 0:
    break;
    
    default: cout<<"incorrect choice"<<endl;
        break;
    }
   }
   while (n!=0);
   
   
   

return 0;
}