#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int v){
        data=v;
        next=NULL;
    }
};

class list{
    node*head;
    node*tail;

    public:
    list(){
        head=tail=NULL;
    }

    void push_front(int v){
        node*newnode=new node(v);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void display(){
        cout<<endl;
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void check(list l1,list l2){
        node*temp=l1.head;
        node*temp2=l2.head;
        int value=0;
        int value2=0;
        bool lock=true;

        while(temp2!=NULL){

            if(lock){
                value=value*10;
                value=value+temp->data;
                temp=temp->next;

            }

            if(temp==NULL){
                lock=false;
                value2=value2*10;
                value2=value2+temp2->data;
                temp2=temp2->next;

            }
        }
        cout<<value<<" "<<value2;
        cout<<endl;
        int final=value+value2;

        cout<<final;

    }
};

int main()
{
    list ll;

    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(5);

    list l2;

    l2.push_front(5);
    l2.push_front(6);
    l2.push_front(4);

    ll.check(ll,l2);

    



  
return 0;
}