#include <iostream>

enum class Operation
{
  Add,
  Subtract,
  Multiply,
  Divide
};

struct Calculator
{
  Operation op;

  Calculator(Operation operation) : op(operation) {}

  int calculate(int a, int b)
  {
    switch (op)
    {
    case Operation::Add:
      return a + b;
    case Operation::Divide:
      if (b != 0)
      {
        return a / b;
      }
      else
      {
        std::cerr << "Error division by zero!\n";
        return 0;
      }
    case Operation::Subtract:
      return a - b;
    case Operation::Multiply:
      return a * b;
    }
    return 0;
  }
};

int main() {
  Calculator calcMult(Operation::Multiply);
  std::cout << calcMult.calculate(5, 7)<< std::endl;
}