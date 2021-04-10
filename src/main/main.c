#include "config.h"
#include "mytree.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char ** argv){
    f();

    struct mynode * root = createTree();

    traverseTree(root);
    return 0;
}
