#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int monster_hp = 100;
    int your_atk;
    while (monster_hp > 0) {
        your_atk = rand() % 11 + 5;
        monster_hp = monster_hp - your_atk;

        std::cout << "You dealt" << your_atk << "damage!";
        std::cout << "monster_hp" << monster_hp << "\n";
    }
    return 0;
}