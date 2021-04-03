#include "config.h"
#include "stdio.h"
#include "mytree.h"
#include "stdlib.h"
#include "string.h"
int f(){
    printf("this is f\n");
    return 0;
}



struct mynode * getNode(const char * data){
     struct mynode * tmp = (struct mynode *)malloc(sizeof(struct mynode));
     memset(tmp, 0, sizeof(struct mynode));
     tmp -> data = strdup(data);
     return tmp;
}
struct mynode * createTree(){
    struct mynode * root = getNode("node0");
    root -> left = getNode("node1");
    root -> right = getNode("node2");
    root -> left -> left = getNode("node3");
    root -> left -> right = getNode("node4");
    return root;
}

void traverseTree(struct mynode * root){
    if(!root){
        return;
    }
    traverseTree(root->left);
    printf("%s\n", root->data);
    traverseTree(root->right);
    
}
