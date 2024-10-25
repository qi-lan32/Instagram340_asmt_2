//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** @file Node.h 
    Listing 4-1 */
#ifndef NODE_
#define NODE_

#include <memory>

template<class ItemType>
class Node
{
private:
   ItemType        item; // A data item
   Node<std::unique_ptr<ItemType>> next; // Pointer to next node
   
public:
   Node();
   Node(const ItemType& anItem);
   Node(const ItemType& anItem, Node<std::unique_ptr<ItemType>> nextNodePtr);
   void setItem(const ItemType& anItem);
   void setNext(Node<std::unique_ptr<ItemType>> nextNodePtr);
   ItemType getItem() const ;
   Node<std::unique_ptr<ItemType>> getNext() const ;
};

// end Node

#include "Node.cpp"
#endif