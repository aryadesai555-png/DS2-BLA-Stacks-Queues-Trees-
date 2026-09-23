# C++ Programming Lab 01 — Data Structures

**Student:** Arya Desai  
**Course:** C++ Programming  
**Lab:** Lab 01  
**Topics:** Stack, Queue, Circular Queue, Binary Tree, Binary Search Tree

## About This Lab

This lab focuses on understanding and implementing basic data structures in C++.

The lab covers:

- Stacks and LIFO behavior
- Queues and FIFO behavior
- Circular queues and wrap-around
- Binary tree terminology
- Binary Search Trees (BST)
- Inorder, preorder, and postorder traversal
- Overflow and underflow
- Real-world applications of these data structures

All explanations, examples, diagrams, code, and testing demonstrations in this repository are my own work.

## Repository Structure

DS2-BLA-Stacks-Queues-Trees/
│
├── README.md
│
├── Stack/
│   └── Stack.cpp
│
├── Queue/
│   └── CircularQueue.cpp
│
├── Tree/
│   └── BinarySearchTree.cpp
│
├── diagrams/
│   ├── 01_Stack_Push_Pop.png
│   ├── 02_Queue_Enqueue_Dequeue.png
│   ├── 03_Circular_Queue_Wrap_Around.png
│   ├── 04_Binary_Tree_Terminology.png
│   ├── 05_Completed_BST.png
│   ├── 06_Inorder_Traversal.png
│   ├── 07_Preorder_Traversal.png
│   └── 08_Postorder_Traversal.png
│
└── documentation/
    └── Lab01-Documentation.md

## Stack

A stack follows the **LIFO (Last In, First Out)** principle.

The Stack implementation includes:

- `push()` — adds an element to the top
- `pop()` — removes the top element
- `peek()` — displays the top element
- `isEmpty()` — checks whether the stack is empty
- `isFull()` — checks whether the stack is full
- `displayAll()` — displays all elements

The stack uses a static array with a fixed size of 5.

The program also demonstrates **stack overflow** when the stack is full and **stack underflow** when trying to pop from an empty stack.

## Queue and Circular Queue

A queue follows the **FIFO (First In, First Out)** principle.

The queue implementation includes:

- `enqueue()` — adds an element to the rear
- `dequeue()` — removes an element from the front
- `isEmpty()` — checks whether the queue is empty
- `isFull()` — checks whether the queue is full
- `displayAll()` — displays the queue

### Circular Queue

The circular queue allows previously used array positions to be reused.

In my demonstration, after removing elements from the front, the rear wraps around from the final array position back to the beginning.

The modulo operator `%` is used to perform the wrap-around.

## Binary Tree

A binary tree is a tree structure where each node can have at most two children.

Important terminology includes:

- **Root** — the top node of the tree
- **Parent** — a node that has child nodes
- **Child** — a node connected below a parent
- **Leaf** — a node with no children
- **Subtree** — a smaller tree within a larger tree

## Binary Search Tree

A Binary Search Tree (BST) follows these rules:

- Smaller values are placed in the left subtree.
- Larger values are placed in the right subtree.
- Duplicate values are not inserted.

### Dataset Used

50 30 70 20 40 60 80 30 70 10 35 65 90 55 75

### Duplicate Values

The dataset contains two duplicate values:

- 30
- 70

The duplicate occurrences were detected and ignored.

### Values Inserted into the BST

After removing the duplicate occurrences, the values inserted in their original order are:

50 30 70 20 40 60 80 10 35 65 90 55 75

### BST Information

- **Root:** 50
- **Predecessor of 50:** 40
- **Successor of 50:** 55
- **Leaf nodes:** 10, 35, 55, 65, 75, 90

## Tree Traversals

### Inorder Traversal

**Left → Root → Right**

10 20 30 35 40 50 55 60 65 70 75 80 90

The inorder traversal of a Binary Search Tree produces the values in sorted order.

### Preorder Traversal

**Root → Left → Right**

50 30 20 10 40 35 70 60 55 65 80 75 90

### Postorder Traversal

**Left → Right → Root**

10 20 35 40 30 55 65 60 75 90 80 70 50

