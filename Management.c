#include <stdio.h>

#define MAX_USERS 100

// Define struct
struct Person {
    char name[50];
    int age;
    char contactNumber[20];
};

// Displaying personal information
void displayPersonInfo(struct Person person) {
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Contact Number: %s\n", person.contactNumber);
    printf("\n");
}

int main() {
    struct Person users[MAX_USERS];
    int numUsers;

    // Input
    printf("Enter the number of users: ");
    scanf("%d", &numUsers);

    if (numUsers <= 0 || numUsers > MAX_USERS) {
        printf("Invalid number of users.\n");
        return 1; // Exit with error
    }
	
	printf("Enter personal information for %d users:\n", numUsers);
    for (int i = 0; i < numUsers; i++) {
        printf("User %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", users[i].name);

        printf("Enter age: ");
        scanf("%d", &users[i].age);

        printf("Enter contact number: ");
        scanf("%s", users[i].contactNumber);
    }

    // Display
    printf("\nPersonal Information:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("User %d:\n", i + 1);
        displayPersonInfo(users[i]);
    }

    return 0;
}
