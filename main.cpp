// git test source
#include <iostream>
#include <string>

// Print test message into console
void show() {
    const std::string message{ "Hello, world!\n"  };
    std::cout << message;
}

int main() {
    // Call show function
    show();
    return 0;
}
