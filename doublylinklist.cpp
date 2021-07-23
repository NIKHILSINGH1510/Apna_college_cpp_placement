#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prevLink;
    Node *nextLink;
};
class doublyll{

    Node *start;
    public:
    doublyll(){
        start=NULL;
    }

    void createnode(int);
    void showlist();
    //void addfirst(int);
    //void addlast(int);



};

void doublyll::createnode(int num){
    Node *p,*q;
    Node * head= new Node();
    head->prevLink=NULL;
    head->data=num;
    head->nextLink=NULL;

    if(start == NULL){
        start=head;
    }

    else{
        p=start;
        while(p != NULL){
            q=p;
            p=p->nextLink;
        }
        p=head;
        q->nextLink=p;
        p->prevLink=q;
        
    }
}

void doublyll::showlist()
{
    Node *p;
    if(start==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        p=start;

        while(p!=NULL)
            {
            cout<<p->data<<" ";
            p=p->nextLink;
            }
        }
}

int main(){
     doublyll obj1;
    int num,n;
    // obj1.createnode(8);
    // obj1.createnode(9);
    // obj1.showlist();

   do
   {
    cout<<"\n Enter 1 to add to list"<<endl;
    cout<<" Enter 2 to print list"<<endl;
    /*cout<<"Enter 3 to count nodes"<<endl;
    cout<<"Enter 4 to search list"<<endl; */
    cout<<" Enter 0 to exit"<<endl;
    cin>>n;

    switch(n)
    {
    case 1:
            cout<<"Enter the number to add to list"<<endl;
            cin>>num;
            obj1.createnode(num);
        break;
    case 2: obj1.showlist();
        break;
    // case 3: obj1.countnode();
    //     break;
    // case 4: cout<<"Enter the number to be searched"<<endl;
    //     cin>>num;
    //     obj1.search(num);
    //     break;
    case 0:
    break;
    
    default: cout<<"incorrect choice"<<endl;
        break;
    }
   }
   while (n!=0);
   
   
   

return 0;
}