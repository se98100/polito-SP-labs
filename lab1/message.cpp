//
// Created by Sergio on 08/04/2021.
//

#include "message.h"

char* mkMessage(int n) {
    string vowels = "aeiou";
    string consonants = "bcdfghlmnpqrstvz";
    char* m = new (nothrow) char[n+1];
    if(m != nullptr){
        for(int i=0; i<n; i++)
            m[i] = i%2 ? vowels [rand() % vowels.size()] : consonants[rand() % consonants.size()];
        m[n] = '\0';
    }
    return m;
}

ostream& operator<<(ostream& out, const Message& m) {
    string s(m.getData());
    out << "[id:" << m.getId() << "][size:" << m.getSize() << "][data:" << s.substr(0, 20) << "]";
    return out;
}

Message::Message() : _size(0), _id(-1) {
    _data = mkMessage(_size);
}

Message::Message(int size, long id) : _size(size), _id(id) {
    if(_size > -1){
        _data = mkMessage(_size);
    }
};

Message::~Message() {
    if(_data != nullptr)
        delete[] _data;
}