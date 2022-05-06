//
// Created by Gino Tateo on 4/28/22.
//

#ifndef ASSIGNMENT5SORTDETECTIVE_DATAFACTORY_H
#define ASSIGNMENT5SORTDETECTIVE_DATAFACTORY_H


#include "fstream"
#include <iostream>

struct Factory{

public:

    Factory();

    // Data Read/Write
    void read();        // Reads a data set from a file
    void write();       // Writes linked list to file

    // Data creation
    void dataMachine(); // Created a singly linked list of data; Data size specified by user; Default 1000;

    // Data Sorting
    void selectionSort();

private:

    struct Node
    {
        int data;
        struct Node *next;
    };
    Node* head;
    int DataSize;
};

#endif //ASSIGNMENT5SORTDETECTIVE_DATAFACTORY_H
