//
// Created by Sergio on 08/04/2021.
//

#ifndef LAB1_MESSAGE_H
#define LAB1_MESSAGE_H


#include <iostream>
using namespace std;

class Message {
    long _id;
    char* _data;
    int _size;

    public:
        Message();
        Message(int size, long id = 0);
        Message(const Message& source);
        Message(Message&& source);
        ~Message();

        const char* getData() const { return _data; }
        long getId() const { return _id; }
        int getSize() const { return _size; }

        Message& operator=(const Message& source);
};

ostream& operator<<(ostream& out, const Message& m);


#endif //LAB1_MESSAGE_H
