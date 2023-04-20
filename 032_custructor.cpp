#include <iostream>
using namespace std;

class Book {
public:

    string title;
    string author;
    int pages;

    Book() {
        title = "No Title";
        author = "No Author";
        pages = 0;
    }

    Book(string aTitle,string aAuthor,int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }

};

int main() {

    Book book1("Harry Potter", "JK Rowling",500);
    Book book2("Lord of The Rings", "Tolkein",500);
    Book book3;

    cout << book1.title << endl;
    cout << book3.title << endl;

    return 0;
}
