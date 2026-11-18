#include "library.hpp"
#include <iostream>
#include <string>

std::string askTitle() {
    std::string title;
    while (true) {
        std::cout << "Enter the movie title: ";
        std::getline(std::cin, title);
        if (!title.empty()) {
            return title;
        }
        std::cout << "Title cannot be empty!\n";
    }
}

int main() {
    Library lib;

    std::string title = askTitle();
    lib.addMovie(title, 2010, "Christopher Nolan");
    lib.addMovie("The Matrix", 1999, "The Wachowskis");

    lib.showAll();
    return 0;
}
