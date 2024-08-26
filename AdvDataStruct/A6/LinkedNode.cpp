// Assignment 4 -> modified for assignment 6
// CS 341

// Honor Pledge: 
//
// I pledge that I have neither given nor
// receieved help on this assignment. 
//
// kmlee1

// LinkedNode.cpp

#include "LinkedNode.h"

LinkedNode::LinkedNode(HashEntry entry): Node(entry), nextLinkedNode_(nullptr) 
{}
LinkedNode::LinkedNode(HashEntry entry, LinkedNode*nextLinkedNode, LinkedNode*prevLinkedNode): Node(entry), nextLinkedNode_(nullptr),prevLinkedNode_(nullptr)
{}

LinkedNode::~LinkedNode()
{
    if(nextLinkedNode_ != nullptr)
    {
        delete nextLinkedNode_; 
    }
}

LinkedNode*LinkedNode::getNextLinkedNode()
{ return nextLinkedNode_; }

void LinkedNode::setNextLinkedNode(LinkedNode*nextNode)
{ nextLinkedNode_ = nextNode; }

LinkedNode*LinkedNode::getPrevLinkedNode()
{ return prevLinkedNode_; }

void LinkedNode::setPrevLinkedNode(LinkedNode*prevLinkedNode)
{ prevLinkedNode_=prevLinkedNode; }

bool LinkedNode::hasNextLinkedNode()
{
    return nextLinkedNode_==nullptr;
    // returns false if there is a next linked node
}

bool LinkedNode::hasPrevLinkedNode()
{
    return prevLinkedNode_==nullptr;
}