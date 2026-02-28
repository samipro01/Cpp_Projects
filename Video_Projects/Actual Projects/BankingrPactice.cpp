#include <iostream>
#include <ctime>
#include <string>

// Updated prototypes to ensure Jhoy Daddy can actually lose HP
void displayStats(int health, int enemyHealth, int bullets);
bool fireChamber(int bullets);
void jhoyDaddyTurn(int &jhoyHP, int &bullets);

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    int playerHP = 2;
    int jhoyHP = 2;
    int bullets = 1; 
    bool playerTurn = true;

    std::cout << "====================================\n";
    std::cout << "   WELCOME TO JHOY DADDY'S CHAMBER   \n";
    std::cout << "====================================\n";

    while (playerHP > 0 && jhoyHP > 0) {
        displayStats(playerHP, jhoyHP, bullets);

        if (playerTurn) {
            char choice;
            std::cout << "Your turn. [S]queeze trigger or [D]ouble Down (Add bullet)? ";
            std::cin >> choice;

            if ((choice == 'd' || choice == 'D') && bullets < 6) {
                bullets++;
                std::cout << ">> You added a bullet. Tension rises...\n";
            }

            std::cout << "You point the tool at your head... *Click*\n";
            if (fireChamber(bullets)) {
                std::cout << "--- BANG! You took a hit! ---\n";
                playerHP--;
                bullets = 1; // Reset bullets after a hit
            } else {
                std::cout << "...Silence. You survived.\n";
            }
            playerTurn = false;
        } else {
            jhoyDaddyTurn(jhoyHP, bullets);
            playerTurn = true;
        }
    }

    std::cout << "\n====================================\n";
    if (playerHP > 0) {
        std::cout << "RESULT: Jhoy Daddy has fallen. You walk away a legend.\n";
    } else {
        std::cout << "RESULT: You were bested. Jhoy Daddy remains the King.\n";
    }
    std::cout << "====================================\n";

    return 0;
}

void displayStats(int health, int enemyHealth, int bullets) {
    std::cout << "\n------------------------------------";
    std::cout << "\n[YOU] HP: " << health << " | [JHOY DADDY] HP: " << enemyHealth;
    std::cout << "\nDanger Level: " << bullets << " / 6 bullets loaded";
    std::cout << "\n------------------------------------\n";
}

// Simplified logic: Pull a number 1-6. If it's <= bullet count, it's a hit.
bool fireChamber(int bullets) {
    int pull = (rand() % 6) + 1; 
    return (pull <= bullets);
}

void jhoyDaddyTurn(int &jhoyHP, int &bullets) {
    std::string quotes[] = {
        "Jhoy Daddy: 'Luck is for the weak.'",
        "Jhoy Daddy: 'Don't blink.'",
        "Jhoy Daddy: 'You're shaking, kid.'",
        "Jhoy Daddy: 'This is my favorite part.'"
    };

    std::cout << "\n" << quotes[rand() % 4] << "\n";
    std::cout << "Jhoy Daddy stares you down and pulls the trigger...\n";

    if (fireChamber(bullets)) {
        std::cout << "--- BANG! Jhoy Daddy takes a hit! ---\n";
        jhoyHP--; 
        bullets = 1; // Reset bullets after a hit
    } else {
        std::cout << ">> Jhoy Daddy survives. He smiles at you.\n";
    }
}