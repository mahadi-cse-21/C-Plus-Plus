#include <iostream>
using namespace std;

struct node {
    int key;
    node *l,*r;
};
node *head,*tail;
void init()
{
    head=NULL;
    tail=NULL;
}
void pushLeft(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->key=x;
    temp->r=head;
    if(head!=NULL) head->l=temp;
    head=temp;
    head->l=NULL;
    if(tail==NULL)
    {
        tail=head;
    }
    cout<<"Pushed in left: "<<x<<endl;
}
void pushRight(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->key=x;
    temp->l=tail;
    if(tail!=NULL) tail->r=temp;
    tail=temp;
    temp->r=NULL;
    if(head==NULL)
    {
        head=tail;
    }
    cout<<"Pushed in right: "<<x<<endl;
}
void popLeft()
{
    if(head==NULL||tail==NULL)
    {
        cout<<"The queue is empty"<<endl;
        return ;
    }
    node *temp=head;
    head=head->r;
    cout<<"Popped from left: "<<temp->key<<endl;
    if(head==NULL)
    {
        tail=NULL;

    }
    free(temp);
    if(head!= NULL) head->l=NULL;

}
void popRight()
{
    if(tail==NULL||head==NULL)
    {
        cout<<"The queue is empty"<<endl;
        return ;
    }
    node *temp=tail;
    tail=tail->l;
    cout<<"Popped from right: "<<temp->key<<endl;
    if(tail==NULL)
    {
        head=NULL;
    }
    free(temp);
    if(tail!=NULL) tail->r=NULL;
}

void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->r;
    }
    cout<<endl;
}
void print2()
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->l;
    }
    cout<<endl;
}
int main() {
    init();
    int t;
    cin>>t;
    int l=1;
    while (t--)
    {
        int  n,m;
        cin>>n>>m;
        getchar();
        cout<<"Case "<<l<<":"<<endl;
        int count=0;
        int ch=0;
        for(int i=1; i<=m; i++)
        {

            string s;
            cin>>s;
            if(s=="pushLeft")
            {

                int a;
                cin>>a;
                getchar();
                if(count==n)
                {
                    cout<<"The queue is full"<<endl;
                    continue ;
                }
                pushLeft(a);
                count++;
            }
            else if(s=="pushRight")
            {

                int a;
                cin>>a;
                getchar();
                if(count==n)
                {
                    cout<<"The queue is full"<<endl;
                    continue ;
                }
                pushRight(a);
                count++;
            }

            else if(s=="popLeft")
            {
                count--;
                if(count<0) count=0;
                popLeft();

            }
            else if(s=="popRight")
            {
                count--;
                if(count<0) count=0;
                popRight();
            }
        }
        head=NULL;
        tail=NULL;
        l++;
    }

    return 0;
}


    