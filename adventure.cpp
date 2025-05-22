#include <iostream> // Include the I/O stream library for input and output

// The starting point of the program
int main()
{
    // Print, "Hello, world!" to the console
    std::cout << "Welcome to the Dragon Realm!" << std::endl;

    // Declare a string variable to hold the player's name
    std::string playerName;

    // Prompt the player for their name
    std::cout << "Please enter your name: ";
    std::cin >> playerName;

    // Display a personalized welcome message to the player with their name
    std::cout << "Welcome " << playerName << " to the Dragon Realm!" << std::endl;

    // Declare an int variable to capture the user's choice
    int choice{};

    // Offer the player a choice of 3 locations
    std::cout << "Where will " << playerName << " go?" << std::endl;
    std::cout << "1. Moonlight Markets" << std::endl;
    std::cout << "2. Grand Library" << std::endl;
    std::cout << "3. Shimmer Lake" << std::endl;
    std::cout << "Please enter your choice: " << std::endl;
    std::cin >> choice; // Store the user's input in choice

    // Check the user's choice and display the corresponding messages
    if (choice == 1)
    {
        std::cout << "You chose Moonlight Markets!" << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "You chose Grand Library!" << std::endl;
    }
    else if (choice == 3)
    {
        std::cout << "You chose Shimmer Lake!" << std::endl;
    }
    else
    {
        std::cout << "Invalid choice." << std::endl;
    }

    // Return 0 to indicate successful completion to operating sytem
    return 0;
}
