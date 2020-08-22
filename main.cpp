#include <iostream>
#include "Queue.h"

using namespace std;

void input(Queue<int> &q) {

    while (1) {
        int x;
        cin >> x;
        try {
            q.enQueue(x);
        }
        catch (fullQueue &e) {
            cout << "Queue is full. " << x << " not enqueued." << endl;
            break;
        }
    }
}

void print(Queue<int> &q) {
    while (1) {
        try {
            int x = q.getFront();
            q.deQueue();
            cout << "Q : " << x << endl;
        }
        catch (emptyQueue &e) {
            cout << "Queue is end" << endl;
            break;
        }
    }


}

    int main() {
    Queue<int> q;

    input(q);

    q.deQueue();
    q.deQueue();
    q.enQueue(5);

    print(q);
    input(q);
    q.enQueue(2);
    q.enQueue(3);
    print(q);

    try {
        q.deQueue();
    }
    catch (emptyQueue &e) {

    }
        cout << " " << endl;
    return 0;


}

























