#include <iostream> // Include the I/O stream library for input and output

struct Player
{
    std::string name;          // The name of the player
    int health;                // The current health of the player
    int xp;                    // Experience points gained by the player. Could be used for leveling up  or for other game mechanics
    std::string inventory[10]; // An array of strings for the player's inventory
    int inventoryCount{};      // The number of items in the inventory
};

// The starting point of the program
int main()
{
    // Print, "Hello, world!" to the console
    std::cout << "Welcome to the Dragon Realm!" << std::endl;

    // Create an instance of the Player struct
    Player player;
    player.name   = "John";
    player.health = 100;
    

    // Declare a string variable to hold the player's name
    // std::string playerName;

    // Prompt the player for their name
    std::cout << "Please enter your name: ";
    std::cin >> player.name;

    // Display a personalized welcome message to the player with their name
    std::cout << "Welcome " << player.name << " to the Dragon Realm!" << std::endl;

    // Declare an int variable to capture the user's choice
    int choice{};

    // Declare an int variable to capture the user's nested choice
    int nestedChoice{};

    // Initialize a flag to control the loop and signify the player's intent to explore
    bool exploring = true;

    // As long as the player wishes to continue exploring, this loop will run
    while (exploring) 
    {
        // If still exploring, ask the player will they will go next
        std::cout << "Where will " << player.name << " go next?" << std::endl;

        // Offer the player a choice of 3 locations
        std::cout << "Where will " << player.name << " go?" << std::endl;
        std::cout << "1. Moonlight Markets" << std::endl;
        std::cout << "2. Grand Library" << std::endl;
        std::cout << "3. Shimmer Lake" << std::endl;
        std::cout << "Please enter your choice: " << std::endl;
        std::cin >> choice; // Store the user's input in choice

        // Check the user's choice and display the corresponding messages
        switch(choice)
        {   
            // If 'choice' is 1, this block is executed.
            case 1:
                std::cout << "You chose Moonlight Markets!" << std::endl;
                break;
            // If 'choice' is 2, this block is executed.
            case 2:
                std::cout << "You chose Grand Library!" << std::endl;
                break;
            // If 'choice' is 3, this block is executed.
            case 3:
                std::cout << player.name << " arrives at Shimmering Lake. It is one of the most beautiful lakes that " << player.name << " has seen. They hear a myterious melody from the water.They can either: " << std::endl; 
                std::cout << "1. Stay quit and listen." << std::endl;
                std::cout << "2. Sing along with the melody." << std::endl;
                std::cout << "Please enter your choice:" << std::endl;

                // Capture the user's nested choice
                std::cin >> nestedChoice;

                // If the player chooses to remain silent.
                if (nestedChoice == 1)
                {
                    std::cout << "Remaining silent, " << player.name << " hears whispers of the merfolk below, but nothing happens." << std::endl;
                }
                // If the player chooses to sing along with the melody.
                else if (nestedChoice == 2)
                {
                    std::cout << "Singing along, a merfolk surfaces and gifts " << player.name << " a special blue gem as a token of appreciation for their voice." << std::endl;
                    player.inventory[player.inventoryCount] = "Blue gem";
                    player.inventoryCount++;
                    std::cout << player.name << "'s inventory:" << std::endl;
                    // Loop through the player's inventory up to the amount of items they have
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        // Check if the inventory slot is not empty
                        if (!player.inventory[i].empty())
                        {
                            // Output the item in the inventory slot
                            std::cout << "- " << player.inventory[i] << std::endl;
                        } 
                    }
                }
                break;
                // If 'choice' is not 1, 2, or 3, this block is executed.
            case 4:
                exploring = false;
                break;
            default:
                std::cout << "You did not enter a valid choice" << std::endl; 
                continue; // Errors continue with the next loop iteration
        }
    }
    // Return 0 to indicate successful completion to operating sytem
    return 0;
}
