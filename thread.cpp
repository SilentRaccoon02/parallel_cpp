#include <iostream>
#include <string>
#include <thread>

using namespace std;

void simple_print() {
    cout << "simple" << endl;
}

void custom_print(string str) {
    cout << str << endl;
}

void custom_print_ref(const string &str) {
    cout << str << endl;
}

int main() {
    thread simple_print_th(simple_print);
    simple_print_th.join();

    thread custom_print_th(custom_print, "custom");
    custom_print_th.join();

    thread custom_print_ref_th(custom_print, "custom");
    custom_print_ref_th.join();
}
