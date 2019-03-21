#include <iostream>
#include <stdlib.h> // Aqui esta el rand

int main() {
  srand(time(NULL));
  int cmpch = rand() % 5 + 1;
  int usrch;

  std::cout << "====================\n";
  std::cout << "rock paper scissors (lizard spock)!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✂️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";
  std::cout << "shoot! ";
  std::cout << "Your choice: ";
  std::cin >> usrch;

  if (cmpch == usrch)
    std::cout << "\nTIE! (20% odds...)\n";
  else if (cmpch < 1 || cmpch > 5) {
    std::cout << "\nComputer is trying to cheat, quitting...\n";
  	return 1;
  }
  else if (usrch < 1 || usrch > 5) {
    std::cout << "\nAre you trying to cheat?  Quitting...\n";
  	return 1;
  }

  else{
    if (cmpch == 1) { // Computer is ROCK
      if (usrch == 2)
        std::cout << "\nPaper covers Rock. You win!\n";
      else if (usrch == 3)
        std::cout << "\nRock crushes Scissors. You lose...\n";
      else if (usrch == 4)
        std::cout << "\nRock crushes Lizard. You lose...\n";
      else if (usrch == 5)
        std::cout << "\nSpock vaporizes Rock. You win!\n";
  }

    else if (cmpch == 2) { // Computer is PAPER
      if (usrch == 1)
        std::cout << "\nPaper covers Rock. You lose...\n";
      else if (usrch == 3)
        std::cout << "\nScissors cut Paper. You win!\n";
      else if (usrch == 4)
        std::cout << "\nLizard eats paper. You win!\n";
      else if (usrch == 5)
        std::cout << "\nLizard poisons Spock. You lose...\n";
  }

    else if (cmpch == 3) { // Computer is SCISSORS
      if (usrch == 1)
        std::cout << "\nRock crushes Scissors. You win!\n";
      else if (usrch == 2)
        std::cout << "\nScissors cut Paper. You lose...\n";
      else if (usrch == 4)
        std::cout << "\nScissors decapitate Lizard. You lose...\n";
      else if (usrch == 5)
        std::cout << "\nSpock smashes Scissors. You win!\n";
  }

    else if (cmpch == 4) { // Computer is LIZARD
      if (usrch == 1)
        std::cout << "\nRock crushes Lizard. You win!\n";
      else if (usrch == 2)
        std::cout << "\nLizard eats paper. You lose...\n";
      else if (usrch == 3)
        std::cout << "\nScissors decapitate Lizard. You win!\n";
      else if (usrch == 5)
        std::cout << "\nLizard poisons Spock. You lose...\n";
  }

    else if (cmpch == 5) { // Computer is SPOCK
      if (usrch == 1)
        std::cout << "\nSpock vaporizes Rock. You lose...\n";
      else if (usrch == 2)
        std::cout << "\nPaper disproves Spock. You win!\n";
      else if (usrch == 3)
        std::cout << "\nSpock smashes Scissors. You lose...\n";
      else if (usrch == 4)
        std::cout << "\nLizard poisons Spock. You win!\n";
  }
    else
      std::cout << "\nSomething went wrong...\n";
  }

  return 0;
}
