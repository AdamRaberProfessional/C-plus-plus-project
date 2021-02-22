#include <iostream>
#include <list>

int main()
{

    std::string name;
    std::list<std::string> mylist;

    std::cout << "Enter 10 names. Names that start with A-M will be in group 1.\nNames that start with "
                 "N-Z will be in group 2.\n\n";

    for(int i=0; i<10; i++) {
        std::cout << "Enter name " << std::to_string(i+1) << ":";
        std::cin >> name;
        mylist.push_back(name);
    }

    std::cout << "\n\nGroup 1:\n";

    for(auto & it : mylist){
        // if the ASCII val of the first character <= the value of char "m", print in group one.
        if ((int)tolower(it[0]) <= (int)"m"[0]) {
            std::cout << it << "\n";
        }
    }

    std::cout << "\nGroup 2:\n";

    for(auto & it : mylist){
        // if the ASCII val of the first character > the value of char "m", print in group two.
        if ((int)tolower(it[0]) > (int)"m"[0]) {
            std::cout << it << "\n";
        }
    }

    return 0;
}

