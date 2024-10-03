//
// Created by gn65240 on 10/3/2024.
//

#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;

class Book {
public:
    Book(string titleIn, string authorIn, bool fictionIn) {
        title = titleIn;
        author = authorIn;
        fiction = fictionIn;

    }



    string pretty_string() {
        return title + " (" + author + ")";

    }


private:
    string title;
    string author;
    bool fiction = false;
};



#endif //BOOK_H
