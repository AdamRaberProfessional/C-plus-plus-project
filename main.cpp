#include <iostream>
#include <list>

int main()
{

    std::string name;
    std::list<std::string> mylist;

    std::cout << "\nWelcome to the field trip group creator! This app will help you split your students into 2 groups by their names.\n\n";
    std::cout << "Enter 10 names. Names that start with A-M will be in group 1. Names that start with "
                 "N-Z will be in group 2.\n\n";

    for(int i=0; i<10; i++) {
        std::cout << "Enter name " << std::to_string(i+1) << ":";
        std::cin >> name;
        mylist.push_back(name);
    }

    std::cout << "\n\nGroup 1:\n";

    for(auto & it : mylist){
        // if the ASCII val of the first character <= the value of char "m", print in group one.
        it[0] = toupper(it[0]);
        if ((int)it[0] <= (int)"M"[0]) {
            std::cout << it << "\n";
        }
    }

    std::cout << "\nGroup 2:\n";

    for(auto & it : mylist){
        // if the ASCII val of the first character > the value of char "m", print in group two.
        it[0] = toupper(it[0]);
        if ((int)it[0] > (int)"M"[0]) {
            std::cout << it << "\n";
        }
    }

    return 0;
}

