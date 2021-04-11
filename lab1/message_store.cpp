//
// Created by Sergio on 11/04/2021.
//

#include "message_store.h"

MessageStore::MessageStore(int n) : _n(n), _dim(n){
    if(_n < 1){
        _n = 1;
        _dim = _n;
    }

    _messages = new Message[_n];
}

MessageStore::~MessageStore() {
    delete[] _messages;
}
