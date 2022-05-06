//
// Created by Gino Tateo on 4/28/22.
//


#include "DataFactory.h"
#include <iostream>

Factory::Factory() {
    head = NULL;
    DataSize = 0;
}

void Factory::read(){
    std::ifstream file;
    file.open ("read.txt");
    int line;


    if (file.is_open())
    {
        if(head==NULL) {
            Node *NewNode = new Node;
            head = NewNode;
            file >> line;
            head->data = line;
            head->next = NULL;
            DataSize++;
        }

        Node *curr = head;

        while (file >> line)  {

                curr->next = new Node;
                curr = curr->next;
                curr->data = line;
                curr->next =  NULL;
                DataSize++;
        }
    }
    file.close();
}

void Factory::write() {
    std::ofstream file;
    file.open ("write.txt");

    Node* curr = head;
    int line;

    if (file.is_open())
    {
        for (int i = 0;i<DataSize;i++) {
            line = curr->data;
            file << line << "\n";
            curr = curr->next;
        }
    }
    file.close();
}

void Factory::dataMachine() {

    int setData = 1000;         // Default 1000 ints

    std::cout << "Enter data size: ";
    std::cin >> setData;

//    while(DataSize<setData){
//        data[setData] = rand()%1000;
//        DataSize++;
//    }

    // singly linked list for data
    if(head==NULL) {
        Node *NewNode = new Node;
        head = NewNode;
        head->next = NULL;
        head->data = rand()%1000;
        DataSize++;
    }
    Node *curr = head;
    while(DataSize<setData){
        curr->next = new Node;
        curr = curr->next;
        curr->data = rand()%1000;
        curr->next =  NULL;
        DataSize++;
    }
}

void Factory::selectionSort() {
    Node* temp = head;

    // Traverse the List
    while (temp) {
        Node* min = temp;
        Node* r = temp->next;

        // Traverse the unsorted sublist
        while (r) {
            if (min->data > r->data)
                min = r;

            r = r->next;
        }

        // Swap Data
        int x = temp->data;
        temp->data = min->data;
        min->data = x;
        temp = temp->next;
    }
}







