//
// Created by Sergio on 11/04/2021.
//

#ifndef LAB1_MESSAGE_STORE_H
#define LAB1_MESSAGE_STORE_H

#include <cstring>
#include "message.h"


class MessageStore {
    Message* _messages;
    int _dim;
    int _n;

public:
    MessageStore(int n);
    ~MessageStore();

    void add(Message& m);
};


#endif //LAB1_MESSAGE_STORE_H
