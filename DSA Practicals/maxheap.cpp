#include <iostream>
using namespace std;

struct Node{
  int marks;
  struct Node *left;
  struct Node *right;
}*Root;

  struct Node* createNode(){
    struct Node *temp;
    temp= new struct Node;
    cout<<"Enter the marks:";
    cin>>temp->marks;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
  }

  void create_BST(){
    if(Root == NULL)
    {
      Root= createNode();
      cout<<"Root of BST is created";
  
    }
  }
  void insert(struct Node* Root, struct Node*newnode){
    if(newnode->marks< Root->marks){
      if(Root->left==NULL)
      Root->left = newnode;
      else
        insert(Root->left,newnode);
    }
      else{
        if(Root->right==NULL)
        Root->right = newnode;
        else
          insert(Root->right, newnode);
        
      }

    }

    void preorder(struct Node *Root)
    {
      if(Root!=NULL){
        cout<<" "<<Root->marks;
        preorder(Root->left);
        preorder(Root->right);
      }
    }

    void MaxHeapify(struct Node* Parent){
      {
        int val;
        val=Parent->right->marks;
        Parent->right->marks= Parent->marks;
        Parent->marks =val;
      }
    }
  




int main(){
  int cnt, i,j;
  struct Node* newnode;
  cout<<"max heap tree is display:";

  Root=NULL;
  i=j=0;
  create_BST();
  cout<<"How many Nodesto insert?"
  for(i=0; i<cnt; i++){

  }

}