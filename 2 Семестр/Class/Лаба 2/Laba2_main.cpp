#include <iostream>
#include "classBook.h"
#include <string>

int main() {
    classBook book1;
    book1.show();

    classBook book2("The Witcher", "A. S.", 1998);
    book2.show();

    classBook book3 = book2;
    book3.set_name("At the Mountains of Madness");
    book3.set_autor("H.Lovecraft");
    book3.set_year(1931);
    book3.show();

    classBook book1("The Call of Cthulhu", "H.Lovecraft", 1928);
    book1.show();

    return 0;
}