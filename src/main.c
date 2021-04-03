#include "config.h"
#include "mytree.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char ** argv){
    f();

    struct mynode * root = (struct mynode*)malloc(sizeof(struct mynode)); 

    root->data = strdup("node0");

    return 0;
}
