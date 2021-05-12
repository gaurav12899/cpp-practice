#include<bits/stdc++.h>
using namespace std;
   
struct node{
    int data;
    node* next;

};

void insert(node**head,int x){
node* newNode=new node();
newNode->data=x;
newNode->next=NULL;
if(*head==NULL)*head=newNode;
else{
    newNode->next=*head;
    *head=newNode;
}
}

void print(node* head){
// temp=*head;
while(head!=NULL){
    cout<<head->data<<"-> ";
head=head->next;
}
cout<<endl;
}
int main(){
 node* head=NULL;
int n,x;
cout<<"how many numbers you want to insert"<<endl;
cin>>n;
for(int i=0;i<n;i++){
   cout<< "Enter your integer"<<endl;
    cin>>x;
insert(&head,x);
cout<<"Linked list is ->";
print(head);

}

return 0;
}