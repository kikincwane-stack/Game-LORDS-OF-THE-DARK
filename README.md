# PATRICIA'S ADVENTURE CLUB - Lords of the Dark

**Student Name:** Patricia Ncwane  
**Student Number:** 0705271479085  
**Lecturer:** Mr Owami  
**Module:** Computer Programming - NQF Level 4

## Description of Program

Patricia's Adventure Club is a text-based adventure game called Lords of the Dark.

The player enters their name and starts with 10 lives and 0 coins. The player chooses a path - Left, Middle, or Right - and different things happen on each path. The goal is to collect 100 coins to become Queen of the Dark before losing all lives.

The program uses functions, a `do-while` loop, `switch-case`, `if-else` statements, and random numbers to make every game different.

## How to Play

1. Enter your full name
2. Choose where to go:
   - **1. LEFT** - Whispering Forest
   - **2. MIDDLE** - Dark Castle
   - **3. RIGHT** - River of Shadows
   - **4. DARK SHOP** - Buy lives with coins
   - **5. LEAVE** - Exit the game
3. Collect 100 coins to WIN
4. If your lives reach 0, the game is OVER

## Features

1. **Whispering Forest (Left)** - Random event: Dark Wolf attack, Magic Chest, or Dark Lord event
2. **Dark Castle (Middle)** - Answer a riddle to earn lives and coins
3. **River of Shadows (Right)** - Choose to drink a potion or throw it away
4. **Dark Shop** - Buy 5 lives for 20 coins or 10 lives for 35 coins
5. **Win Condition** - Reach 100 coins to become Queen of the Dark
6. **Lose Condition** - Lose all lives and the game ends

## Functions Used

1. `userinput()` - Asks for the player's name and shows the welcome message
2. `showStatus()` - Displays name, lives, coins and location
3. `left()` - Handles the Whispering Forest random event
4. `middle()` - Handles the Dark Castle riddle
5. `right()` - Handles the River of Shadows potion choice
6. `shop()` - Handles buying lives with coins
7. `menu()` - Shows the main menu and handles the player's choice using switch-case

## How to Run the Program

### Option 1: Using Visual Studio Code
1. Open the project folder in Visual Studio Code
2. Open the `.cpp` file
3. Click **Run > Run Without Debugging** or press `Ctrl + F5`

### Option 2: Using Terminal / Command Prompt
```bash
g++ main.cpp -o adventure
./adventure
