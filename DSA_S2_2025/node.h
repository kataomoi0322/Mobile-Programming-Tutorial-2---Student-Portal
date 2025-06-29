/*----------------------------------------------------------------
                        labskill2
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/

#ifndef NODE_H
#define NODE_H
#include"data.h"

//node.h
typedef struct BOOKCASE{
    NAME title;
    BOOKCASE *addr;//address
}b_case;  

//node.h
typedef struct BOOKCASE{
    str user;
    //str book;
    BOOKCASE *next;
    BOOKCASE(str name){
        this -> user = name;
        //this -> book = name;
        this -> next = NULL;
    }
}b_case;


#endif // !NODE_H