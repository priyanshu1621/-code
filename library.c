#include <stdio.h>
#include<stdlib.h>
struct book
{
    char author[25];
    char edition[20];
    char price[20];
    char id[25];
    char book_name[30];
};
//struct student_id
// {
//     char st_name[25];
//     char Id[25];
//     int rollno[25];
// };
void book_available(struct book b1, struct book b2, struct book b3)
{

    printf(" Author: %s\n Edition: %s\n Price: %s\n Book id: %s\n Book Name: %s\n\n", b1.author, b1.edition, b1.price, b1.id, b1.book_name);
    printf(" Author: %s\n Edition: %s\n Price: %s\n Book id: %s\n Book Name: %s\n\n", b2.author, b2.edition, b2.price, b2.id, b2.book_name);
    printf(" Author: %s\n Edition: %s\n Price: %s\n Book id: %s\n Book Name: %s\n\n", b3.author, b3.edition, b3.price, b3.id, b3.book_name);
}

char name[20], student_no[25], sure;
int student_id=0;
char code[20];
char *r, *r2, *r3;

void student_list()
{

            printf("\n\n1. Priyanshu Gaur -'101'\t 2. Vidhan Gaur -'102'\t 3. Himanshu -'103'\t 4. Parth-'104'\n\n" );

      printf("Enter the Student Id: ");
      scanf("%d",student_id);

switch(student_id){
        
    case 101 :
    {
        printf("Welcome Priyanshu Gaur\n");
        name[20] = "Priyanshu Gaur";
        issue_book(name);
        break;
    }
    case 102 :
    {
        printf("Welcome Vidhan\n");
        name[20] = "Vidhan Gaur";
        issue_book(name);
        break;
    }
    case 103 :
    {
        printf("Welcome Himanshu\n");
        name[20] = "Himanshu maharishi";
        issue_book(name);
        break;
    }
    case 104 :
    {
        printf("Welcome Parth\n");
        name[20] = "Parth";
        issue_book(name);
        break;
    }
    default :
        {
            printf("\n\nIncorrect ID!!");
            break;
        }
             
        }
}

void issue_book(char name[20])
{
    // int i;
    printf("Book Available:");

    printf("101\t TO BECAME A MILLOIONAR?\n 102\t To BECOME RICH TODAY\t 103\t TO BECOME A POPULAR IN 1 DAY ");

    printf("Enter the Book code u want to issue.");
    scanf("%d", code);

    if (code == 101 || code == 102 || code == 103 || code == 104)
        printf("\nBook is available!\n");

    else
        printf("\nBook is Not Available!\n");

    printf("\n\nAre u sure u want to issue this book??\n\n enter 'y' = yes \t 'n' = no");
            scanf("%c",sure);

            if(sure == 'y'){
            r = code;
            printf("\nBook code %d issued to %s",*code, name);
            }
            else exit(1);
    // for (i = 0; i < 1; i++)
    // {

    //     printf("Enter the Student name: \n");
    //     scanf("%s ", &student.st_name);
    //     printf("enter the Student ID: \n");
    //     scanf("%s", &student.Id);
    //     printf("\nenter the Student Roll no: ");
    //     scanf("%d", &student.rollno);
    // }
    // for (i = 0; i < 1; i++)
    // {

    //     printf("\n the Student name: ", student[i]->st_name);
    //     printf("\nenter the Student ID: ", student[i]->Id);
    //     printf("\nenter the Student Roll no: ", student[i]->rollno);
    // }
}
int main()
{
    printf("*****************************************************\n");

    printf("             WELCOME TO PUBLIC LIBRARY\n");

    printf("*****************************************************");
    int ip, i;

    printf("\n1. Issue Book\n2. Search Book\n3. Show Issued Book Student Wise\n4. Show Issued Book Book Wise\n5. Show Student List In Ascending Order\n6. Show Book List In Ascending Order\n7. Submit Issued Book\n8. Book available\n 9.Exit\n\n");

    printf("Choose any choices from above: \n\n");
    scanf("%d", &ip);

    struct book book = {"Mr. raju", "3rd Generation", "Rs = 50000", "Pg!$u", "TO BECAME A MILLOIONAR?\n\n"};
    struct book book2 = {"Mr. Kaju", "7th Generation", "Rs = 10000", "P@343", "To BECOME RICH TODAY\n\n"};
    struct book book3 = {"Mr. Badam", "10th dGeneration", "Rs = 300000", "Pg#12", "TO BECOME A POPULAR IN 1 DAY\n\n"};

   // struct student_id student;

   // if ()
    {
        switch (ip)
        {
        case 1 : {
                student_list();
                break;
                 }
        case 8:
            book_available(book, book2, book3);
        case 9:  exit(1);
        }
    }
    return 0;
}
