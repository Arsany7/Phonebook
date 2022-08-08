#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

typedef struct
{
    int day,month,year;
} Date;
typedef struct
{
    char f_name[20],l_name[20],address[50],num[16],mail[40];
    Date DoB;
} Contact;

void loadFile(); //Scan file name, read all data from the file, and put it in the array of contacts.
int input(char *x); //Input an integer and check whether it is an integer or not.
void funcSelect(int opt); //Select the function you want to use.
void phonebookOpts(); //Display the menu, all options in our program.
void back(); //Asks the user whether to go back to menu or exit.
void saveFile(); //Save all changes in the file.
void quit(); //Quit without saving.
void decide(); //User decides whether he wants to save the changes made in the file, or go back to menu.
int checkNum(char nmb[12], int except); //Validation of the phone number entered by the user.
int checkDate(int d,int m,int y); //Validation of the date of birth entered by the user.
int check_mail(char x[], int except); //Validation of the email entered by the user.
void searchFile(); //Search for a contact in the file.
void enter_data(int x); //Function used in both "add_contact" and "modify_contact" to prompt the user for the contact's data.
void add_contact(); //Add a contact to the file.
void delete_contact(); //Delete a contact from the file.
void modify_contact(); //Modify a contact in the file
int swap (Contact *x, Contact *y); //Swap two contacts in the array.
void sortByLname(); //Sort all contacts by last name in ascending order.
void sortByDoB(); //Sort all contacts by date of birth in ascending order.
void printFile(); //Print all contacts in the file, sorted by last name or date of birth.

#endif // FUNCTIONS_H_INCLUDED
