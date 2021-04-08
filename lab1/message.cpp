//
// Created by Sergio on 08/04/2021.
//

#include <cstring>
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
    const char* data = m.getData();
    string s(data == nullptr ? "NULL" : data);
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
}

Message::~Message() {
    delete[] _data;
}

Message::Message(const Message& source){
    _id = source._id;
    _size = source._size;
    if(source._size > -1) {
        _data = new char[_size + 1];
        memcpy(_data, source._data, _size + 1);
    }
}

Message::Message(Message&& source) {
    _id = source._id;
    _size = source._size;
    _data = source._data;
    source._data = nullptr;
    source._id = -1;
    source._size = -1;
}
