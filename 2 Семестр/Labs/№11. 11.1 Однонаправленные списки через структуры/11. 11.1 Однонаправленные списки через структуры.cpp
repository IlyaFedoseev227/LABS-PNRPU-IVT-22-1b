#include <iostream>

struct Node {
	int data;
	Node* pointer_to_next_node = nullptr;
};

struct List {
	Node* head_node = nullptr;
};

void pushBack(List& list, const int& data) {
	Node* new_node = new Node;
	new_node->data = data;

	if (list.head_node == nullptr)
		list.head_node = new_node;
	else {
		Node* current_node = list.head_node;

		while (current_node->pointer_to_next_node != nullptr)
			current_node = current_node->pointer_to_next_node;

		current_node->pointer_to_next_node = new_node;
	}
}

int main() {
	List list;
	int colvo, num;

	std::cout << "How many numbers do you want to enter?" << std::endl;
	std::cin >> colvo;

	for (int i = 0; i != colvo; i++) {
		std::cout << "Enter the " << i + 1 << " number:" << std::endl;
		std::cin >> num;
		pushBack(list, num);
	}
	Node* current_node = list.head_node;
	while (current_node != nullptr) {
		std::cout << current_node->data << ' ';
		current_node = current_node->pointer_to_next_node;
	}
}