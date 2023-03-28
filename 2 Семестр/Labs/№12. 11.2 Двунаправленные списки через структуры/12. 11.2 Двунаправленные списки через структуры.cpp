#include <iostream>

struct ListElem {
    int data;
    ListElem* next;
    ListElem* prev;
};

ListElem* createList(int n) {
    ListElem* start;
    ListElem* prev, * curr;
    start = new ListElem;
    std::cin >> start->data;
    start->next = nullptr;
    start->prev = nullptr;
    prev = start;
    for (int i = 0; i < n - 1; i++) {
        curr = new ListElem;
        std::cin >> curr->data;
        curr->next = nullptr;
        curr->prev = prev;
        prev->next = curr;
        prev = curr;
    }
    return start;
}

void insert_element(ListElem*& start, int pos, int k, int& size) {
    size++;
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
        first = first->next;
    last = first->next;

    ListElem* new_element = new ListElem;
    std::cout << "Type data: ";
    std::cin >> new_element->data;
    if (pos == 1) {
        new_element->prev = nullptr;
        start->prev = new_element;
        new_element->next = start;
        start = new_element;
    }
    else {
        new_element->prev = first;
        new_element->next = last;
        if (last != nullptr)
            last->prev = new_element;
        first->next = new_element;
    }
}
void insert_elements(ListElem*& list, int pos, int k, int& size) {
    for (int i = 0; i < k; i++)
        insert_element(list, pos + i, k, size);
}

void delete_element(ListElem*& start, int pos, int k, int& size) {
    size--;
    ListElem* first = start;
    ListElem* last;

    for (int i = 1; i < pos - 1; i++)
        first = first->next;
    last = first->next;

    if (pos == 1) {
        start = start->next;
        start->prev = nullptr;
    }
    else {
        first->next = last->next;
        if (last->next != nullptr)
            last->next->prev = first;
    }
}

void delete_elements(ListElem*& start, int pos, int k, int& size) {
    size -= k;
    ListElem* first = start;
    ListElem* last;

    for (int i = 1; i < pos - 1; i++)
        first = first->next;;
    last = first;

    for (int i = 0; i < k; i++)
        last = last->next;

    if (pos == 1) {
        start = last;
        start->prev = nullptr;
    }
    else {
        first->next = last->next;
        if (last->next != nullptr)
            last->next->prev = first;
    }
}

void search_element(ListElem* start, int element) {
    ListElem* curr = start;
    int pos = 0;

    while (curr->data != element && curr->next != nullptr) {
        curr = curr->next;
        pos++;
    }

    if (curr->data == element)
        std::cout << "Element is founded" << std::endl;
    else
        std::cout << "Did not found" << std::endl;
}

void printList(ListElem* start, int n) {
    ListElem* curr = start;
    for (int i = 0; i < n; i++) {
        std::cout << curr->data << ' ';
        curr = curr->next;
    }
    std::cout << std::endl;
}

void deleteList(ListElem* list) {
    delete list;
}

int main() {
    int size, pos, k, element;
    std::cout << "Type size: ";
    std::cin >> size;
    std::cout << "Type elements' data: ";
    ListElem* list = createList(size);
    std::cout << "Your list is" << std::endl;
    printList(list, size);
    std::cout << "Type where to insert element: ";
    std::cin >> pos;
    insert_element(list, pos, 1, size);
    printList(list, size);
    std::cout << "Where and how many elements you want to insert: ";
    std::cin >> pos;
    std::cin >> k;
    insert_elements(list, pos, k, size);
    printList(list, size);
    std::cout << "Which element to delete: ";
    std::cin >> pos;
    delete_element(list, pos, 1, size);
    printList(list, size);
    std::cout << "From which index and how many elements you want to delete: ";
    std::cin >> pos;
    std::cin >> k;
    delete_elements(list, pos, k, size);
    printList(list, size);
    std::cout << "What element to find?: ";
    std::cin >> element;
    search_element(list, element);
    deleteList(list);

    return 0;
}