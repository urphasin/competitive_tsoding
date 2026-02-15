#include <iostream>
#include <string>

template <typename Object>

class MemoryCell {
public:
  explicit MemoryCell(const Object& initialValue = Object{ })
    : storedValue{ initialValue } {}
private:
  Object storedValue;

};

int main() {
  MemoryCell<int>         m1;
  MemoryCell<std::string> m2{ "hello" };
}