#ifndef MYTREE_H
#define MYTREE_H

int f();

struct mynode{
    struct mynode * left;
    struct mynode * right;
    char * data;
};


struct mynode * createTree();
void traverseTree(struct mynode * root);

#endif
