#include "LinkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::getNode(int position) {
    if ((position >= this->length) || (position < 0)) {
        throw string("getNode(): Node out of range");
    }
    Node* outNode = this->head;
    for (int i = 0; i < position; i++) {
        outNode = outNode->next;
    }
    return outNode;
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    if (isEmpty()) {
        this->head = new Node(elem);
        this->length++;
        return;
    }
    Node* lastNode = getNode(this->length - 1);
    lastNode->next = new Node(elem);
    this->length++;
}

template <typename T>
void LinkedList<T>::clear() {
    Node* prev = nullptr;
    while (this->head) {
        prev = this->head;
        this->head = this->head->next;
        delete prev;
    }
    delete this->head;
    this->length = 0;
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    // Can't use getNode() helper within const function
    if ((position >= this->length) || (position < 0)) {
        throw string("getElement(): Element out of range");
    }
    Node* outNode = this->head;
    for (int i = 0; i < position; i++) {
        outNode = outNode->next;
    }
    return outNode->value;
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
void LinkedList<T>::insert(int position, const T& elem) {
    Node* curr = getNode(position);
    if (curr == this->head) {
        this->head = new Node(elem, curr);
        this->length++;
        return;
    }
    Node* prev = getNode(position - 1);
    prev->next = new Node(elem, curr);
    this->length++;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::remove(int position) {
    Node* toRemove = getNode(position);
    if (toRemove == this->head) {
        this->head = this->head->next;
        delete toRemove;
        this->length--;
        return;
    }
    Node* prev = getNode(position - 1);
    prev->next = toRemove->next;
    delete toRemove;
    this->length--;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    Node* toReplace = getNode(position);
    toReplace->value = elem;
}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
