#ifndef BINARYNODECOPY2_
#define BINARYNODECOPY2_
#include "binarySearchTreecopy2.h"

template<class T>
class binaryNode 
{

    public:
    T data;
    binaryNode<T> * left;
    binaryNode<T> * right;

    binaryNode( T d)
    : data (d), left (nullptr), right (nullptr) {}
        
};
#endif
