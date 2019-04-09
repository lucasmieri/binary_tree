#include <stdio.h>
#include <stdio.h>

// definindo a estrutura de uma uma arvore binária  que recebe valores inteiros
typedef struct tree_bin tree_bin;
struct tree_bin{
    int data;
    tree_bin *right, *left;
}

// cria arvore
void create_tree();
void create_tree() {
    tree_bin *root= (tree_bin*) malloc(siezeof(tree_bin));
    if(raiz!= NULL){
        *root=NULL
    }
    return root;
}

tree_bin * new_node(int x);
tree_bin *new_node(int x){
    tree_bin *newnode=malloc(sizeof(tree_bin));
    newnode->left=node->right=NULL;
    newnode->data=x;
    return newnode;
}
void destroy_node(tree_bin *root);
void destroy_node(tree_bin *root){
    if(root==NULL){
        return;
    }
    destroy_node(root->left);
    destroy_node(root->right);
    free(root);
    root=NULL;
}

void destroy_tree(tree_bin *root);
void destroy_tree(tree_bin *root){
    if(root==NULL){
        return ;
    }
    destroy_node(root);
    free(root);
    destroy_tree(root);
}




int height();
int height(tree_bin *root){
    if(root==NULL) return -1;
    int left= height(root->left);
    int right= height(root->right);
    return(left>right? left+1: right+1);
}



int main(){}