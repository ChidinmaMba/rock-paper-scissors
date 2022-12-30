#include <iostream>
#include <stdlib.h>

int main() {
  // 1 > 3
  // 2 > 1
  // 3 > 2
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "==================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "==================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";

  std::cin >> user;
  std::cout << "computer pick: " << computer;
  if (user == computer) {
    std::cout << "You tied!\n";
  }
  else if (user == 1 and computer == 2) { 
    std::cout << "You win!\n";
  }
  else if (user == 2 and computer == 1) {
    std::cout << "You win!\n";
  }
  else if (user == 3 and computer == 2) {
    std::cout << "You win!\n";
  }
  else {
    std::cout << "You lost!\n";
  }
}
