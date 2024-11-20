#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

int value = 0;
mutex value_mutex;

void change_value(int thread_n, int new_value) {
    lock_guard<mutex> lock(value_mutex);
    value = new_value;
    cout << "thread_" << thread_n << " value_" << value << endl;
}

int main() {
    thread thread_0(change_value, 0, 20);
    thread thread_1(change_value, 1, 24);
    thread_0.join();
    thread_1.join();
}
