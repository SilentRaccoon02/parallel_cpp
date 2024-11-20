#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

int value = 0;
recursive_mutex value_mutex;

void func_1(int thread_n, int new_value) {
    lock_guard<recursive_mutex> lock(value_mutex);
    value = new_value;
    cout << "func_1 thread_" << thread_n << " value_" << value << endl;
}

void func_2(int thread_n, int new_value) {
    lock_guard<recursive_mutex> lock(value_mutex);
    value = new_value;
    cout << "func_2 thread_" << thread_n << " value_" << value << endl;
    func_1(thread_n, new_value);
}

int main() {
    thread thread_0(func_1, 0, 20);
    thread thread_1(func_2, 1, 24);
    thread_0.join();
    thread_1.join();
}
