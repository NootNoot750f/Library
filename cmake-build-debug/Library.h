//
// Created by gn65240 on 10/3/2024.
//

#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>

#endif //LIBRARY_H
#include "book.h"
#include "address.h"
class Library {

    public:

    address library1address{"123 Library Lane", "Schaumburg","Illinois", "60169","USA"};
    Book book1{"Barney", "Anne", false};

    void add_book(Book* book) {
        books.push_back(book);

    }

    void getAddress() {
        cout << library1.address();

    }

private:
    vector<Book> books;













};