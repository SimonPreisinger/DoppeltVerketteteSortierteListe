//
// Created by Simon on 27.01.2018.
//

#ifndef WS16DOPPELTVERKETTESORTIERTELISTE_LIST_H
#define WS16DOPPELTVERKETTESORTIERTELISTE_LIST_H


class
List {
private    :
    struct
    Elem {
        const int value;
        Elem *prev = nullptr, *next = nullptr;

        Elem(const int v) : value(v) {}
    };

    Elem *head = nullptr;
public    :
    bool search(const int) const;

    void deleteElem(const int);

    void insert(const int);
};

#endif //WS16DOPPELTVERKETTESORTIERTELISTE_LIST_H
