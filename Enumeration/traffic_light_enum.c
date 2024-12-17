#include <stdio.h>

// Define enum for traffic light states
enum TrafficLight {
    Red,    // 0
    Yellow, // 1
    Green   // 2
};

// Function to print the traffic light state
void printTrafficLightState(enum TrafficLight state) {
    switch(state) {
        case Red:    printf("Red Light: Stop\n"); break;
        case Yellow: printf("Yellow Light: Get Ready\n"); break;
        case Green:  printf("Green Light: Go\n"); break;
        default:     printf("Invalid Light State\n");
    }
}

int main() {
    // Example usage: Simulate a traffic light sequence
    enum TrafficLight currentLight;

    currentLight = Red;
    printTrafficLightState(currentLight);

    currentLight = Yellow;
    printTrafficLightState(currentLight);

    currentLight = Green;
    printTrafficLightState(currentLight);

    return 0;
}
