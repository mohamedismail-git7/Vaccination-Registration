#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    int pno, age;
    long int cell;
    char name[40], vname[40], gender[10], email[40], address[100];
};

int main() {
    struct Contact s[3];
    int i, search, ch = 0, a, day, sheet, asheet = 3, registered = 0;

    while (1) {
        printf("\n1. Registration\n2. Edit Details\n3. Search Detail\n4. Check Eligibility\n5. Show All Details\n6. Check Day Availability\n7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter how many injections you have: ");
                scanf("%d", &sheet);
                
                if (sheet <= asheet) {
                    for (i = 0; i < sheet; i++) {
                        printf("\nEnter Your Name: ");
                        scanf("%s", s[i].name);
                        printf("Enter Your Age (ONLY 18+): ");
                        scanf("%d", &s[i].age);
                        printf("Enter Your Gender: ");
                        scanf("%s", s[i].gender);
                        printf("Enter Person No: ");
                        scanf("%d", &s[i].pno);
                        printf("Enter Your Vaccination Name: ");
                        scanf("%s", s[i].vname);
                        printf("Enter Your Phone Number: ");
                        scanf("%ld", &s[i].cell);
                        printf("Enter Your Email Address: ");
                        scanf("%s", s[i].email);
                        printf("Enter Your Address: ");
                        scanf("%s", s[i].address);
                        registered++;
                    }
                } else {
                    printf("\nNo available slots for registration.\n");
                }
                break;

            case 2:
                printf("\nEnter The Search No (Person No): ");
                scanf("%d", &search);
                for (i = 0; i < registered; i++) {
                    if (search == s[i].pno) {
                        printf("\nRe-enter Your Name: ");
                        scanf("%s", s[i].name);
                        printf("Re-enter Your Age: ");
                        scanf("%d", &s[i].age);
                        printf("Re-enter Your Gender: ");
                        scanf("%s", s[i].gender);
                        printf("Re-enter Person No: ");
                        scanf("%d", &s[i].pno);
                        printf("Re-enter Your Vaccination Name: ");
                        scanf("%s", s[i].vname);
                        printf("Re-enter Your Phone Number: ");
                        scanf("%ld", &s[i].cell);
                        printf("Re-enter Your Email Address: ");
                        scanf("%s", s[i].email);
                        printf("Re-enter Your Address: ");
                        scanf("%s", s[i].address);
                        printf("\nDetails Updated Successfully!\n");
                        break;
                    }
                }
                break;

            case 3:
                printf("\nEnter The Search No (Person No): ");
                scanf("%d", &search);
                for (i = 0; i < registered; i++) {
                    if (search == s[i].pno) {
                        printf("\nName: %s\nAge: %d\nGender: %s\nPerson No: %d\nVaccination: %s\nPhone No: %ld\nEmail: %s\nAddress: %s\n",
                               s[i].name, s[i].age, s[i].gender, s[i].pno, s[i].vname, s[i].cell, s[i].email, s[i].address);
                    }
                }
                break;

            case 4:
                printf("\nEnter Your Age: ");
                scanf("%d", &a);
                if (a >= 18) {
                    printf("\nYou Are Eligible For Vaccination\n");
                } else {
                    printf("\nYou Are Not Eligible For Vaccination\n");
                }
                break;

            case 5:
                printf("\nDETAILS:\n");
                for (i = 0; i < registered; i++) {
                    printf("\nName: %s\nAge: %d\nGender: %s\nPerson No: %d\nVaccination: %s\nPhone No: %ld\nEmail: %s\nAddress: %s\n",
                           s[i].name, s[i].age, s[i].gender, s[i].pno, s[i].vname, s[i].cell, s[i].email, s[i].address);
                }
                break;

            case 6:
                printf("\nEnter the number of days since your first dose: ");
                scanf("%d", &day);
                if (day >= 28) {
                    printf("\nYou should have your second dose now.\n");
                } else {
                    printf("\nYou need to wait %d more days for the second dose.\n", 28 - day);
                }
                break;

            case 7:
                printf("\nThank You for Using Our System!\n");
    
                exit(0);
                break;

            default:
                printf("\nEnter a Valid Choice!\n");
                break;
        }
    }
    return 0;
}
