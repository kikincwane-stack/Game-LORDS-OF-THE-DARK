
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lives = 10;
int coins = 0;
string name;
int option;

void showStatus()
{
    cout << "-------------------------------------------" << endl;
    cout << "Name: " << name << " | Lives: " << lives << " | Coins: " << coins << endl;
    cout << "Location: LORDS OF THE DARK" << endl;
    cout << "-------------------------------------------" << endl;
}

void left()
{
    cout << endl;
    cout << "You walk LEFT into the Whispering Forest..." << endl;
    int chance = rand() % 3;

    if (chance == 0)
    {
        cout << "A DARK WOLF attacks you! You lose 4 lives but find 20 coins!" << endl;
        lives = lives - 4;
        coins = coins + 20;
    }
    else if (chance == 1)
    {
        cout << "You found a MAGIC CHEST! +30 coins and +2 lives!" << endl;
        coins = coins + 30;
        lives = lives + 2;
    }
    else
    {
        cout << "You are the Dark Lord! You scared everyone away. -5 lives for being too evil!" << endl;
        lives = lives - 5;
    }
    cout << "Lives: " << lives << " | Coins: " << coins << endl;
}

void middle()
{
    cout << endl;
    cout << "You walk MIDDLE into the Dark Castle..." << endl;
    cout << "The Gatekeeper asks you a RIDDLE:" << endl;
    cout << "What has a face and two hands but no arms or legs?" << endl;
    cout << "1. A Clock  2. A Ghost  3. A Mirror" << endl;
    cout << "Your answer: ";
    int answer;
    cin >> answer;

    if (answer == 1)
    {
        cout << "CORRECT! The Gatekeeper bows to you! +3 lives and +25 coins!" << endl;
        lives = lives + 3;
        coins = coins + 25;
    }
    else
    {
        cout << "WRONG! The Gatekeeper laughs at you! -3 lives!" << endl;
        lives = lives - 3;
    }
    cout << "Lives: " << lives << " | Coins: " << coins << endl;
}

void right()
{
    cout << endl;
    cout << "You walk RIGHT to the River of Shadows..." << endl;
    cout << "You could not obtain a role... BUT you find a glowing potion!" << endl;
    cout << "1. Drink it  2. Throw it away" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        cout << "YUM! You feel powerful! +6 lives!" << endl;
        lives = lives + 6;
    }
    else
    {
        cout << "You threw it away... and a fairy gives you 15 coins for being kind!" << endl;
        coins = coins + 15;
    }
    cout << "Lives: " << lives << " | Coins: " << coins << endl;
}

void shop()
{
    cout << endl;
    cout << "--- DARK SHOP ---" << endl;
    cout << "You have " << coins << " coins." << endl;
    cout << "1. Buy 5 Lives - costs 20 coins" << endl;
    cout << "2. Buy 10 Lives - costs 35 coins" << endl;
    cout << "3. Leave shop" << endl;
    cout << "Choose: ";
    int shopChoice;
    cin >> shopChoice;

    if (shopChoice == 1 && coins >= 20)
    {
        coins = coins - 20;
        lives = lives + 5;
        cout << "You bought 5 lives!" << endl;
    }
    else if (shopChoice == 2 && coins >= 35)
    {
        coins = coins - 35;
        lives = lives + 10;
        cout << "You bought 10 lives!" << endl;
    }
    else if (shopChoice == 3)
    {
        cout << "You left the shop." << endl;
    }
    else
    {
        cout << "Not enough coins! Go find more treasure!" << endl;
    }
}

void userinput()
{
    cout << "---------------------------------------------------" << endl;
    cout << "      PATRICIA'S ADVENTURE CLUB         " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Please provide your full name : ";
    getline(cin, name);
    cout << "Welcome " << name << " to LORDS OF THE DARK!" << endl;
    cout << "Collect 100 COINS to become QUEEN OF THE DARK!" << endl;
    cout << "If your lives reach 0... YOU DIE!" << endl;
    cout << "HAVE FUN... IF YOU DARE..." << endl;
}

void menu()
{
    showStatus();
    cout << "Where do you want to go?" << endl;
    cout << "Enter 1 to go LEFT - Whispering Forest" << endl;
    cout << "Enter 2 to go MIDDLE - Dark Castle" << endl;
    cout << "Enter 3 to go RIGHT - River of Shadows" << endl;
    cout << "Enter 4 to go to DARK SHOP" << endl;
    cout << "Enter 5 to LEAVE" << endl;
    cout << "Choose: ";
    cin >> option;

    switch (option)
    {
        case 1:
            left();
            break;
        case 2:
            middle();
            break;
        case 3:
            right();
            break;
        case 4:
            shop();
            break;
        case 5:
            cout << "Thanks for playing, " << name << "! You left with " << lives << " lives and " << coins << " coins." << endl;
            break;
        default:
            cout << "Invalid input! The darkness laughs at you!" << endl;
            break;
    }
}

int main()
{
    srand(time(0));
    userinput();

    do
    {
        menu();

        if (lives <= 0)
        {
            cout << endl;
            cout << "GAME OVER! " << name << " has died in the Dark..." << endl;
            cout << "You had " << coins << " coins. Try again!" << endl;
            break;
        }

        if (coins >= 100)
        {
            cout << endl;
            cout << "YOU WIN! " << name << " is now QUEEN OF THE DARK!" << endl;
            cout << "You finished with " << lives << " lives!" << endl;
            break;
        }

    } while (option != 5);

    return 0;
}
