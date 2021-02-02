#include <iostream>
#include <list>

int main()
{

    std::string groupOne = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm'};
    std::string groupTwo = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    std::string name;
    std::list<std::string> mylist;

    std::cout << "Enter 10 names. Names that start with A-M will be in group 1.\nNames that start with "
                 "N-Z will be in group 2.\n\n";

    for(int i=0; i<10; i++) {
        std::cout << "Enter name " << std::to_string(i+1) << ":";;
        std::cin >> name;
        mylist.push_back(name);
    }

    std::cout << "\n\nGroup 1:\n";

    for(auto & it : mylist){
        for (int i = 0; i < 13; ++i) {
            if (groupOne[i] == tolower(it[0])) {
                std::cout << it << "\n";
            }
        }
    }

    std::cout << "\nGroup 2:\n";

    for(auto & it : mylist){
        for (int i = 0; i < 13; ++i) {
            if (groupTwo[i] == tolower(it[0])) {
                std::cout << it << "\n";
            }
        }
    }

    return 0;
}

