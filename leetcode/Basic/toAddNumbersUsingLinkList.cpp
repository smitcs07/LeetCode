#include <iostream>
using namespace std;
#define nu nullptr

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nu;
    }
};

class Linklist {
public:
    Node* head;

    Linklist() {
        head = nu;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nu) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nu) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        if (head == nu) return;
        Node* temp = head;
        while (temp != nu) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* l3 = new Node(0);
        Node* temp = l3; 
        int carry = 0;

        while (l1 != nu || l2 != nu || carry) {
            int sum = carry;
            if (l1 != nu) {
                sum += l1->data;
                l1 = l1->next;
            }
            if (l2 != nu) {
                sum += l2->data;
                l2 = l2->next;
            }

            carry = sum / 10;
            l3->next = new Node(sum % 10);
            l3 = l3->next;
        }

        return temp->next;
    }
};

int main() {
    Linklist obj1, obj2;
    int value, n1, n2;

    cout << "Enter number of nodes in first list: ";
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cout << "Enter " << i + 1 << " number: ";
        cin >> value;
        obj1.insert(value);
    }

    cout << "First number: ";
    obj1.display();

    cout << "Enter number of nodes in second list: ";
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cout << "Enter " << i + 1 << " number: ";
        cin >> value;
        obj2.insert(value);
    }

    cout << "Second number: ";
    obj2.display();

    Linklist result;
    result.head = result.addTwoNumbers(obj1.head, obj2.head);

    cout << "Result (sum as reversed list): ";
    result.display();

    return 0;
}

