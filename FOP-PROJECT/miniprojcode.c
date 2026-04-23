#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int choice;
    int happiness = 50;
    int weather;

    srand(time(0));   // start random number generator

    printf("🌸 Welcome to Relax & Grow Garden 🌸\n");
    printf("Take care of your plant and enjoy the weather!\n\n");

    do {

        // Generate random weather (0,1,2)
        weather = rand() % 3;

        printf("\n----- TODAY'S WEATHER -----\n");

        if(weather == 0) {
            printf("Weather: ☀ Sunny\n");
            happiness += 5;   // plant likes sun
        }
        else if(weather == 1) {
            printf("Weather: 🌧 Rainy\n");
            happiness += 7;   // plant likes rain more
        }
        else {
            printf("Weather: ☁ Cloudy\n");
        }

        printf("\n----- MENU -----\n");
        printf("1. Water the plant 💧\n");
        printf("2. Talk to the plant 🌱\n");
        printf("3. Check plant happiness 🌿\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("You watered the plant. It feels refreshed!\n");
                happiness += 10;
                break;

            case 2:
                printf("You said kind words. The plant smiles 🌸\n");
                happiness += 5;
                break;

            case 3:
                printf("Plant happiness level: %d\n", happiness);
                break;

            case 4:
                printf("Goodbye! Keep growing 🌼\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
