/*
    Game Action Selector
    Description: Allows selection of actions like Attack, Defend, Jump, or Run, common in video games.
*/

#include<stdio.h>

int main() {
    int x, y, z; // Variables for input and calculation
    char option; // Variable to store the chosen option
    
    // Display program information
    printf("VG Action Selector\n");
    printf("Select actions like Attack (A), Defend (D), Jump (J), or Run (R).\n");
    
    // Display menu and prompt user for option
    printf("\n1. Press 'A' for Attack\n2. Press 'D' for Defend\n3. Press 'J' for Jump\n4. Press 'R' for Run\nEnter your option: ");
    scanf(" %c", &option); // Read the option
    
    // Switch statement to handle different options
    switch(option) {
        case 'A': // Attack option
            printf("You chose Attack! Enter damage dealt and received: ");
            scanf("%d %d", &x, &y); // Read damage
            z = x - y; // Calculate net damage
            printf("Damage dealt: %d", z); // Display net damage
            break;
        case 'D': // Defend option
            printf("You chose Defend! Enter damage mitigated and received: ");
            scanf("%d %d", &x, &y); // Read damage
            z = x - y; // Calculate net damage received
            printf("Net damage received: %d", z); // Display net damage received
            break;
        case 'J': // Jump option
            printf("You chose Jump! Enter height jumped: ");
            scanf("%d", &x); // Read height jumped
            printf("You jumped %d feet!", x); // Display height jumped
            break;
        case 'R': // Run option
            printf("You chose Run! Enter distance covered: ");
            scanf("%d", &x); // Read distance
            printf("You ran %d miles!", x); // Display distance
            break;
        default: // Invalid input
            printf("Invalid option! Choose a valid action.\n");
    }
    
    return 0; // Return 0 for successful execution
}
