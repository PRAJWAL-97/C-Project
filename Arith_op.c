#include <stdio.h>

int main() {
    printf("Welcome to My Carpet Cleaning Service\nI provide both small and large room service\n");
    const double smallRoomRate = 30;
    const double largeRoomRate = 40;
    const double tax = 0.1;
    const int expiration = 25; // days

    printf("How many Small Rooms do you want to be cleaned..?\nEnter here : ");
    int numberOfSmallRooms = 0;
    scanf("%d", &numberOfSmallRooms);

    printf("How many Large Rooms do you want to be cleaned..?\nEnter here : ");
    int numberOfLargeRooms = 0;
    scanf("%d", &numberOfLargeRooms);

    printf("Cost for small rooms : %.2f\n", numberOfSmallRooms * smallRoomRate);
    printf("Cost for Large rooms : %.2f\n", numberOfLargeRooms * largeRoomRate);

    double totalCost = (numberOfLargeRooms * largeRoomRate) + (numberOfSmallRooms * smallRoomRate);
    printf("Total Cost including tax : %.2f\n", totalCost + (totalCost * tax));

    return 0;
}
