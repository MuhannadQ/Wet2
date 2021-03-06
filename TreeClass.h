//
// Created by baha2 on 1/2/2019.
//

#ifndef WET2_TREECLASS_H
#define WET2_TREECLASS_H

typedef void* Data;

template <class T>
T& max(T a, T b) {
    return a > b ? a : b ;
}

template<class T>
class Tree {
    int height;
    T key;
    Data valuePtr= nullptr;
    Tree *father= nullptr;
    Tree *leftSon= nullptr;
    Tree *rightSon= nullptr;
public:
    int size;
    int maxScore;
    int score;
    explicit Tree(const T &key, Data value, Tree *father) : height(0), key(key), valuePtr(value),
     father(father),leftSon(nullptr),rightSon(nullptr) {
        size=0,maxScore=0,score=0;
    }

    T &getKey() {
        return key;
    }

    Data getValue() {
        return valuePtr;
    }

    Tree *getLeft() {
        return leftSon;
    }

    Tree *getRight() {
        return rightSon;
    }

    Tree *getFather() {
        return father;
    }

    void setLeft(Tree *left) {
        leftSon = left;
    }

    void setRight(Tree *right) {
        rightSon = right;
    }

    void setFather(Tree *father) {
        this->father = father;
    }

    int getHeight() {
        if (!this) {
            return -1;//because tree is empty
        }
        return height;
    }

    void setHeight(int newHeight) {
        height = newHeight;
    }


};

#endif //WET2_TREECLASS_H
