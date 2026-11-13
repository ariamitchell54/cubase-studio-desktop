#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string arg = (argc > 1) ? argv[1] : "--help";
    if (arg == "--version") {
        std::cout << "0.3.1\n";
        return 0;
    }
    std::cout << "usage: cubase-studio-util [--version|--help]\n";
    return 0;
}
