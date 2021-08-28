#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
class Tree{
    public:
    void insertnode(Node* root,int data){
        Node* temp,*prev,*cur;
        temp = new Node(data);
        cur = root;
        prev = NULL;
        while(cur!=NULL){
            prev = cur;
            if(data<cur->data)
                cur = cur->left;
            else
                cur = cur->right;
        }
        if(prev->data>data)
            prev->left = temp;
        else
            prev->right = temp;
         
    }
    void inorder(Node* root){
        if(root!=NULL){
            inorder(root->left);
            cout<<root->data<<"\t";
            inorder(root->right);
        }
    }
    void preorder(Node* root){
        if(root!=NULL){
            cout<<root->data<<"\t";
            preorder(root->left);
            preorder(root->right);
        }
    }
    Node* deletenode(Node* root,int key){
        Node* temp;
        if(root==NULL)
            return root;
        if(key < root->data)
            root->left = deletenode(root->left,key);
        else if(key > root->data)
            root->right = deletenode(root->right,key);
        else{
            if(root->left == NULL){
                temp = root->right;
                return temp;
            }
            else if(root->right == NULL){
                temp = root->left;
                return temp;
            }
            temp = inordersuccessor(root->right);
            root->data = temp->data;
            root->right = deletenode(root->right,temp->data);
        }
        return root;
    }
    Node* inordersuccessor(Node* root){
        Node* cur = root;
        while(cur->left!=NULL){
            cur = cur->left;
        }
        return cur;
    }
    int height(Node* root){
        if(root==NULL)
            return -1;
        return 1 + max(height(root->left),height(root->right));
    }
    bool checkBST(Node* root, int minValue, int maxValue) {
        if (root == NULL) {
            return true;
        }

        if (root->data < minValue || root->data > maxValue) {
            return false;
        }

        return (    checkBST(root->left, minValue, root->data - 1) 
                &&  checkBST(root->right, root->data + 1, maxValue)
                );
    }

    bool checkBST(Node* root) {
        return checkBST(root, 0, 10000);
    }
};
int main(){
    Node* root = new Node(1);
    Tree tree;
    tree.insertnode(root,2);
    tree.insertnode(root,4);
    tree.insertnode(root,3);
    tree.insertnode(root,5);
    tree.insertnode(root,6);
    tree.insertnode(root,7);
    tree.inorder(root);
    cout<<endl;
    //tree.insertnode(root,6);
    //tree = tree->deletenode(tree,2)
    // tree.inorder(root);
    // cout<<endl;
    // cout<<"Height "<<tree.height(root)<<endl;
    tree.preorder(root);
    cout<<endl;
    // root = tree.deletenode(root,2);
    // tree.inorder(root);
    // cout<<endl;
    // tree.preorder(root);
    // cout<<endl;
    
    cout<<tree.checkBST(root)<<endl;
    return 0;
}