#include <iostream>

class bitArray {
public:
    bitArray() { bits = 0; }
    ~bitArray() { bits = 0; }
    bool set(const unsigned int n) {
        if (n <= sizeof(unsigned int) * 8) {
            bits |= 1 << n;
            return true;
        }
        else {
            return false;
        }
    }

    bool unset(const unsigned int n) {
        if (n <= sizeof(unsigned int) * 8) {
            bits &= ~(1 << n);
            return true;
        }
        else {
            return false;
        }
    }

    bool flip(const unsigned int n) {
        if (n <= sizeof(unsigned int) * 8) {
            bits ^= 1 << n;
            return true;
        }
        else {
            return false;
        }
    }

    unsigned int getValue(){
        return bits;
    }
private:
    unsigned int bits;
};

int main(){
    bitArray b;
    b.set(4);
    std::cout << b.getValue() << std::endl;
    b.set(0);
    std::cout << b.getValue() << std::endl;
    b.flip(2);
    std::cout << b.getValue() << std::endl;
    b.unset(4);
    std::cout << b.getValue() << std::endl;
    b.flip(3);
    std::cout << b.getValue() << std::endl;
    return 0;

}
