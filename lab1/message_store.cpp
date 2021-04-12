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

void MessageStore::add(Message &m) {
    if(m.getId() > -1){
        int pos = -1;
        for(int i=0; i<_dim; i++){
            if(_messages[i].getId() == -1 && pos == -1){
                pos = i;
            }else if(_messages[i].getId() == m.getId()){
                _messages[i] = move(m);
                return;
            }
        }

        if(pos != -1){
            _messages[pos] = move(m);
        }else{
            Message* tmp = new Message[_dim + _n];

            for(int i=0; i<_dim; i++){
                tmp[i] = move(_messages[i]);
            }

            delete[] _messages;
            _messages = tmp;
            _messages[_dim] = move(m);
            _dim += _n;
        }
    }
}
