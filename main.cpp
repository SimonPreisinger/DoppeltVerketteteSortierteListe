#include <iostream>
#include "List.h"
using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;


    List *li;
    li = new List();
    li->insert(3);
    li->insert(4);
    li->insert(2);
    if(li->search(2)){
        cout << "found 3" << endl;
    }
    else{
        cout << "didn`t found 3" << endl;
    }
    li->deleteElem(3);


    cout << li << endl;
}
