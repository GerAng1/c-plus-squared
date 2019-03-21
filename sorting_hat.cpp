#include <iostream>

int main(){
  int g, h, r, s;
  int ans1, ans2, ans3, ans4;
  std::string house;

  g = h = r = s = 0;

  std::cout << "\nThe Sorting Hat Quiz!\n\n";

  std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n";
  std::cout << "  1) The Good\n  2) The Great\n";
  std::cout << "  3) The Wise\n  4) The Bold\n";
  std::cout << "Your answer: ";
  std::cin >> ans1;

  if (ans1 == 1)
    h += 1;
  else if (ans1 == 2)
    s += 1;
  else if (ans1 == 3)
    r += 1;
  else if (ans1 == 4)
    g += 1;
  else
    std::cout << "Invalid Input\n";

  std::cout << "\nQ2) Dawn or Dusk?\n";
  std::cout << "  1) Dawn\n  2) Dusk\n";
  std::cout << "Your answer: ";
  std::cin >> ans2;

  if (ans2 == 1){
    g += 1;
    r += 1;
  }
  else if (ans2 == 2){
    s += 1;
    h += 1;
  }
  else
    std::cout << "Invalid Input\n";

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cout << "Your answer: ";
  std::cin >> ans3;

  if (ans3 == 1)
    s += 1;
  else if (ans3 == 2)
    h += 1;
  else if (ans3 == 3)
    r += 1;
  else if (ans3 == 4)
    g += 1;
  else
    std::cout << "Invalid Output\n";

  std::cout << "\nQ4) Which road tempts you most?\n";
  std::cout << "  1) The wide, sunny grassy lane...\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley...\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods...\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)...\n";
  std::cout << "Your answer: ";
  std::cin >> ans4;

  if (ans4 == 1)
    h += 1;
  else if (ans4 == 2)
    s += 1;
  else if (ans4 == 3)
    g += 1;
  else if (ans4 == 4)
    r += 1;
  else
    std::cout << "Invalid Output\n";

  if (h > r && h > g && h > s)
    house = "Hufflepuff";
  else if (r > h && r > g && r > s)
    house = "Ravenclaw";
  else if (g > r && g > h && g > s)
    house = "Gryffindor";
  if (s > r && s > g && s > h)
    house = "Slytherin";

  std::cout << "\n-----------------------------------------------------------";
  std::cout << "\n\n" << house << "!\n";

  return 0;
}
