#ifndef lib_h
#define lib_h
#include <iostream>
typedef std::string WORD;

typedef stuct BOOK{
    WORD name;
    WORD author;
    int ISBN;
    BOOK *add;
}

class Sys{
    private;
    book *head;
    book *pre;
    book *loc;
    int count;

    public:
    bool add(WORD title, WORD author, int ISBN);
    bool del(WORD title, WORD author, int ISBN);
    bool search(WORD title, WORD author, int ISBN)
    bool displa
    
    
    
    
    y
}
#endif // !lib_h