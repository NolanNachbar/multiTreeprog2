#ifndef BINARYSEARCHTREECOPY2_
#define BINARYSEARCHTREECOPY2_
#include "binaryNodecopy2.h"

int tempNum =0;

template <class T>
class binarySearchTree
{
    public:
    binaryNode<T> * root1;
    binaryNode<T> * root2;
    binaryNode<T> * root3;
    binaryNode<T> * root4;



    void remove (T x, binaryNode<T> *&t)
    {
        if(t == nullptr)
            return;
        if(x.compare(t -> data) < 0)
            remove(x, t->left);
        else if(x.compare(t -> data) > 0)
            remove(x, t->right);
        else
        {
            binaryNode<T> * oldNode;
            if(t -> left == nullptr)
            {
                oldNode == t;
                t = t->right;
                delete oldNode;
                return;
            }
            else if(t -> right == nullptr)
            {
                oldNode == t;
                t = t->left;
                delete oldNode;
                return;
            }
            oldNode = findMin(t -> right);
            t -> data = oldNode -> data;
            remove(t->data,t->right);
        }
    }
    binaryNode<T> * findMin(binaryNode<T>*t)
    {
        if(t == nullptr)
            return nullptr;
        else if( t-> left == nullptr)
            return t;
        return findMin(t->left);
    }
    void insert (T item)
    {
        if(item[0] == 'e')
             insert(item, root4);
        else if(item[0] == 't')
             insert(item, root1);
        else if(item[0] == 'a')
             insert(item, root2);
        else if(item[0] == 'o')
             insert(item, root3);
        else if(item[0] == 'i')
             insert(item, root1);
        else if(item[0] == 'n')
             insert(item, root2);
        else if(item[0] == 's')
             insert(item, root3);
        else if(item[0] == 'r')
             insert(item, root1);
        else if(item[0] == 'h')
             insert(item, root2);
        else if(item[0] == 'l')
             insert(item, root3);
        else if(item[0] == 'd')
             insert(item, root1);
        else if(item[0] == 'c')
             insert(item, root2);
        else if(item[0] == 'u')
             insert(item, root3);
        else if(item[0] == 'm')
             insert(item, root1);
        else if(item[0] == 'f')
             insert(item, root2);
        else if(item[0] == 'p')
             insert(item, root3);
        else if(item[0] == 'g')
             insert(item, root1);
        else if(item[0] == 'u')
             insert(item, root2);
        else if(item[0] == 'y')
             insert(item, root3);
        else if(item[0] == 'b')
             insert(item, root1);
        else if(item[0] == 'v')
             insert(item, root2);
        else if(item[0] == 'k')
             insert(item, root3);
        else if(item[0] == 'x')
             insert(item, root1);
        else if(item[0] == 'j')
             insert(item, root2);
        else if(item[0] == 'q')
             insert(item, root3);
        else if(item[0] == 'z')
             insert(item, root1);
        else 
            insert(item, root4);
    }
    binaryNode<T> * find (T item, long long int & tempComp)
    {

        if(item[0] == 'e')
             return find(item, tempComp, root4);
        else if(item[0] == 't')
             return find(item, tempComp, root1);
        else if(item[0] == 'a')
             return find(item, tempComp, root2);
        else if(item[0] == 'o')
             return find(item, tempComp, root3);
        else if(item[0] == 'i')
             return find(item, tempComp, root1);
        else if(item[0] == 'n')
             return find(item, tempComp, root2);
        else if(item[0] == 's')
             return find(item, tempComp, root3);
        else if(item[0] == 'r')
             return find(item, tempComp, root1);
        else if(item[0] == 'h')
             return find(item, tempComp, root2);
        else if(item[0] == 'l')
             return find(item, tempComp, root3);
        else if(item[0] == 'd')
             return find(item, tempComp, root1);
        else if(item[0] == 'c')
             return find(item, tempComp, root2);
        else if(item[0] == 'u')
             return find(item, tempComp, root3);
        else if(item[0] == 'm')
             return find(item, tempComp, root1);
        else if(item[0] == 'f')
             return find(item, tempComp, root2);
        else if(item[0] == 'p')
             return find(item, tempComp, root3);
        else if(item[0] == 'g')
             return find(item, tempComp, root1);
        else if(item[0] == 'u')
             return find(item, tempComp, root2);
        else if(item[0] == 'y')
             return find(item, tempComp, root3);
        else if(item[0] == 'b')
             return find(item, tempComp, root1);
        else if(item[0] == 'v')
             return find(item, tempComp, root2);
        else if(item[0] == 'k')
             return find(item, tempComp, root3);
        else if(item[0] == 'x')
             return find(item, tempComp, root1);
        else if(item[0] == 'j')
             return find(item, tempComp, root2);
        else if(item[0] == 'q')
             return find(item, tempComp, root3);
        else if(item[0] == 'z')
             return find(item, tempComp, root1);
        else 
            return find(item, tempComp, root4);
    }
    bool isEmpty()
    {
        if(size == 0)
        {
            return true;
        }
        return false;
    }
    int getSize()
    {
        return(size);
    }
    //posible methods: constructors/destructors isEmpty() Clear Prints
    
    private:
    int height;
    int size;
    binaryNode<T> *root;
    binaryNode<T> *  find(T item, long long int &tempComp, binaryNode<T> * t)
    {
        if(t == 0)
        {
            return nullptr;
        }
        else if(item.compare(t -> data) < 0)
        {
            tempComp++;
            return find(item, tempComp, t -> left);
        }
        else if(item.compare(t -> data) > 0)
        {
            tempComp++;
            return find(item, tempComp, t -> right);
        }
        else
            tempComp++;
            return t; //the match case
    }

    void insert(T item, binaryNode<T> *&t)
    {
        if(t == nullptr)
        {
            t = new binaryNode<T>(item);
            size++;
        }
        else if(item.compare(t -> data) < 0)
            insert(item, t -> left);
        else if(item.compare(t -> data) > 0)
            insert(item, t -> right);
        else
        ; //duplicate case (won't do anything)
    };

    void clear(binaryNode<T> *t)
    {
        if(t==nullptr)
            return;
        else
        {
            clear(t->left);
            clear(t->right);
            delete(t);
        }
    };

};

#endif


