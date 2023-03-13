#include <iostream>
#include <string>

int colvoWorkers;

struct Workers {
    std::string surname;
    std::string post;
    int yearOfBirth;
    double zp;
};

Workers sotr[100];

void addWorkers() {
    std::cout << "Enter colvoWorkers: " << std::endl;
    std::cin >> colvoWorkers;
    for (int i = 0; i < colvoWorkers; i++) {
        std::cout << "Enter surname: " << std::endl;
        std::cin >> sotr[i].surname;
        std::cout << "Enter post: " << std::endl;
        std::cin >> sotr[i].post;
        std::cout << "Enter year of birth: " << std::endl;
        std::cin >> sotr[i].yearOfBirth;
        std::cout << "Enter zp: " << std::endl;
        std::cin >> sotr[i].zp;
        std::cout << std::endl;
    }
}

void addNewWorker() {
    int num;

    colvoWorkers++;

    std::cout << "After which worker to add the new worker: " << std::endl;
    std::cin >> num;

    for (int i = num; i < colvoWorkers; i++)
        sotr[i + 1] = sotr[i];

    std::cout << "Enter surname: " << std::endl;
    std::cin >> sotr[num].surname;
    std::cout << "Enter post: " << std::endl;
    std::cin >> sotr[num].post;
    std::cout << "Enter year of birth: " << std::endl;
    std::cin >> sotr[num].yearOfBirth;
    std::cout << "Enter zp: " << std::endl;
    std::cin >> sotr[num].zp;
    std::cout << std::endl;
}

void printWorkers() {
    for (int i = 0; i < colvoWorkers; i++) {
        std::cout << "Number:\t\t" << i + 1 << std::endl;
        std::cout << "Surname:\t" << sotr[i].surname << std::endl;
        std::cout << "Post:\t\t" << sotr[i].post << std::endl;
        std::cout << "Year of birth:\t" << sotr[i].yearOfBirth << std::endl;
        std::cout << "Zp:\t\t" << sotr[i].zp << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void deleteWorkers() {
    int num;
    std::cout << "Which worker to remove?: " << std::endl;
    std::cin >> num;
    for (int i = num - 1; i < colvoWorkers; i++)
        sotr[i] = sotr[i + 1];
    colvoWorkers--;
}

int main() {
    std::cout << "Add workers" << std::endl;

    addWorkers();
    printWorkers();

    deleteWorkers();
    printWorkers();

    addNewWorker();
    printWorkers();
}