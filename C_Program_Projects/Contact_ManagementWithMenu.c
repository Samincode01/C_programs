#include <stdio.h>
struct Contact
{
    char name[50];
    char phone[50];
    char email[50];

};
void addcontact()
{
    FILE *file;
    // Open the file in any mode
    file = fopen("contacts.txt", "a");
    if(file==NULL)
    {
        printf("File does not exists or could not be created");
    }

    else
    {
    struct Contact contact;
    fflush(stdin);
    printf("Enter Name: ");
    fgets(contact.name, sizeof contact.name, stdin);
    printf("Enter Phone: ");
    fgets(contact.phone, sizeof contact.phone, stdin);
    printf("Enter Email: ");
    fgets(contact.email, sizeof contact.email, stdin);

    //write to the file
    fprintf(file, "%s%s%s\n", contact.name, contact.phone, contact.email);
    fclose(file);
    printf("Added to Contact Management System");
    }

}
void displaycontact()
{
    struct Contact contact;
    FILE *file;
    // Open the file in any mode
    file = fopen("contacts.txt", "r");
    if(file==NULL)
    {
        printf("File does not exists or ould not be created");
    }

    else
{
    printf("Contacts.\n");
    while (fscanf(file, " %[^\n] %[^\n] %[^\n]", contact.name, contact.phone, contact.email) != EOF)
    {
        printf("Name = %s\nNumber = %s\nEmail = %s\n", contact.name, contact.phone, contact.email);
    }
    fclose(file);

    }
}
int main()
{
    int choice;
    do
    {
        printf("Contact Management System\n");
        printf("1.Add Contacts\n");
        printf("2.Display Contacts\n");
        printf("3.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            addcontact();
            break;
        case 2:
            displaycontact();
            break;
        case 3:
            printf("Exiting.....\n");
            break;
        default:
            printf("Invalid choice. Please Try again.\n");
            break;
    }

    }while (choice!=3);
return 0;
}
