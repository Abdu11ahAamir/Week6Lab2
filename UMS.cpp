#include <iostream>
#include <stdlib.h>
using namespace std;

void header()
{
   cout << "**************************************************" << endl;
   cout << "*         University Management System           *" << endl;
   cout << "**************************************************" << endl;
} /////////end of header function

int menu()
{

   cout << "Main Menu";
   cout << endl;
   cout << "------------------------------------------------------";
   cout << endl;
   cout << "Select one of the following options number...";
   cout << endl;
   cout << "1. Add New Student Record";
   cout << endl;
   cout << "2. View all Records";
   cout << endl;
   cout << "3. Print the Record in Merit Order";
   cout << endl;
   cout << "4. Generate the merit list";
   cout << endl;
   cout << "5. Program Seat Management";
   cout << endl;
   cout << "6. Exit";
   cout << endl;

   int option;
   cout << "Your Option..";
   cin >> option;
   cout << endl;
   return option;
} /////////end of menu function

void display_record(string name, float matric_marks, float FSc_marks, float ecat_marks)
{
   cout << "These are the details: " << endl;
   cout << name << '\t' << matric_marks << '\t' << FSc_marks << '\t' << ecat_marks << endl;
} /////////end of display

float aggregate(float matric_marks, float FSc_marks, float ecat_marks)
{
   float agg = (matric_marks * 0.025) + (FSc_marks * 0.045) + (ecat_marks * 0.030);
   return (agg);
} //////////end of aggregate calculator

void sorting(float Totalagg1, float Totalagg2, float Totalagg3, float Totalagg4, string std1Name, string std2Name, string std3Name, string std4Name)
{
   if (Totalagg1 > Totalagg2 && Totalagg1 > Totalagg3 && Totalagg1 > Totalagg4)
   {
      if (Totalagg1 > Totalagg2 && Totalagg2 > Totalagg3 && Totalagg3 > Totalagg4)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      }

      if (Totalagg1 > Totalagg2 && Totalagg2 > Totalagg4 && Totalagg4 > Totalagg3)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      }

      if (Totalagg1 > Totalagg3 && Totalagg3 > Totalagg2 && Totalagg2 > Totalagg4)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      }

      if (Totalagg1 > Totalagg4 && Totalagg4 > Totalagg2 && Totalagg2 > Totalagg3)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      }

      if (Totalagg1 > Totalagg4 && Totalagg4 > Totalagg3 && Totalagg3 > Totalagg2)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      }

      if (Totalagg1 > Totalagg3 && Totalagg3 > Totalagg4 && Totalagg4 > Totalagg2)
      {
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      }
   }

   if (Totalagg2 > Totalagg1 && Totalagg2 > Totalagg3 && Totalagg2 > Totalagg4)
   {
      if (Totalagg2 > Totalagg1 && Totalagg1 > Totalagg3 && Totalagg1 > Totalagg4)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      }

      if (Totalagg2 > Totalagg1 && Totalagg1 > Totalagg4 && Totalagg4 > Totalagg3)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      }

      if (Totalagg2 > Totalagg3 && Totalagg3 > Totalagg1 && Totalagg1 > Totalagg4)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      }

      if (Totalagg2 > Totalagg3 && Totalagg3 > Totalagg4 && Totalagg4 > Totalagg1)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      }

      if (Totalagg2 > Totalagg4 && Totalagg4 > Totalagg1 && Totalagg1 > Totalagg3)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      }

      if (Totalagg2 > Totalagg4 && Totalagg4 > Totalagg3 && Totalagg3 > Totalagg1)
      {
         cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
         cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
         cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
         cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      }
   }
   if (Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2 && Totalagg2 > Totalagg4)
   {
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
   }

   if (Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2 && Totalagg4 > Totalagg2)
   {
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
   }

   if (Totalagg3 > Totalagg2 && Totalagg2 > Totalagg1 && Totalagg1 > Totalagg4)
   {
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
   }

   if (Totalagg3 > Totalagg4 && Totalagg4 > Totalagg1 && Totalagg1 > Totalagg2)
   {
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
   }

   if (Totalagg3 > Totalagg4 && Totalagg4 > Totalagg2 && Totalagg2 > Totalagg1)
   {
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
   }

   if (Totalagg4 > Totalagg1 && Totalagg4 > Totalagg2 && Totalagg4 > Totalagg3)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
   }

   if (Totalagg4 > Totalagg1 && Totalagg1 > Totalagg3 && Totalagg3 > Totalagg2)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
   }

   if (Totalagg4 > Totalagg2 && Totalagg2 > Totalagg1 && Totalagg1 > Totalagg3)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
   }

   if (Totalagg4 > Totalagg2 && Totalagg2 > Totalagg3 && Totalagg3 > Totalagg1)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
   }

   if (Totalagg4 > Totalagg3 && Totalagg3 > Totalagg1 && Totalagg1 > Totalagg2)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
   }

   if (Totalagg4 > Totalagg3 && Totalagg3 > Totalagg2 && Totalagg2 > Totalagg1)
   {
      cout << "The agrregate of " << std4Name << " will be " << Totalagg4 << endl;
      cout << "The agrregate of " << std3Name << " will be " << Totalagg3 << endl;
      cout << "The agrregate of " << std2Name << " will be " << Totalagg2 << endl;
      cout << "The agrregate of " << std1Name << " will be " << Totalagg1 << endl;
   }
}

main()
{
   header();

   int option = menu();
   int count = 0;

   string std_name1, std_name2, std_name3, std_name4;

   float matric_1, matric_2, matric_3, matric_4;
   float FSc_1, FSc_2, FSc_3, FSc_4;
   float ecat_1 = 0, ecat_2 = 0, ecat_3 = 0, ecat_4 = 0;
   float total_agg1, total_agg2, total_agg3, total_agg4;

   char garbage;

   if (option == 1)
   {
      cout << "Enter the Student Name: ";
      cin >> std_name1;
      cout << endl;
      cout << "Enter Your Matric Marks: ";
      cin >> matric_1;
      cout << endl;
      cout << "Enter Your FSc Marks: ";
      cin >> FSc_1;
      cout << endl;
      cout << "Enter your ECAT Marks: ";
      cin >> ecat_1;
      cout << endl;
   }
   if (option == 2)
   {
      cout << "You don't have any record..." << endl;
   }
   if (option == 3)
   {
      cout << "the program does not have the record of second student";
      cout << endl;
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");

   header();
   option = menu();

   if (option == 1)
   {
      cout << "Enter the Student Name: ";
      cin >> std_name2;
      cout << endl;
      cout << "Enter Your Matric Marks: ";
      cin >> matric_2;
      cout << endl;
      cout << "Enter Your FSc Marks: ";
      cin >> FSc_2;
      cout << endl;
      cout << "Enter your ECAT Marks: ";
      cin >> ecat_2;
      cout << endl;
   }
   if (option == 2)
   {
      display_record(std_name1, matric_1, FSc_1, ecat_1);
   }
   if (option == 3)
   {
      cout << "the program does not have the record of second student";
      cout << endl;
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");

   header();
   option = menu();

   if (option == 1)
   {
      cout << "Enter the Student Name: ";
      cin >> std_name3;
      cout << endl;
      cout << "Enter Your Matric Marks: ";
      cin >> matric_3;
      cout << endl;
      cout << "Enter Your FSc Marks: ";
      cin >> FSc_3;
      cout << endl;
      cout << "Enter your ECAT Marks: ";
      cin >> ecat_3;
      cout << endl;
   }
   if (option == 2)
   {
      display_record(std_name1, matric_1, FSc_1, ecat_1);
      display_record(std_name2, matric_2, FSc_2, ecat_2);
   }
   if (option == 3)
   {
      cout << "the program does not have the record of second student";
      cout << endl;
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");

   header();
   option = menu();

   if (option == 1)
   {
      cout << "Enter the Student Name: ";
      cin >> std_name4;
      cout << endl;
      cout << "Enter Your Matric Marks: ";
      cin >> matric_4;
      cout << endl;
      cout << "Enter Your FSc Marks: ";
      cin >> FSc_4;
      cout << endl;
      cout << "Enter your ECAT Marks: ";
      cin >> ecat_4;
      cout << endl;
   }
   if (option == 2)
   {
      display_record(std_name1, matric_1, FSc_1, ecat_1);
      display_record(std_name2, matric_2, FSc_2, ecat_2);
      display_record(std_name3, matric_3, FSc_3, ecat_3);
   }
   if (option == 3)
   {
      cout << "the program does not have the record of second student";
      cout << endl;
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");

   header();
   option = menu();

   if (option == 1)
   {
      cout << "NO further entry for students";
   }
   if (option == 2)
   {
      display_record(std_name1, matric_1, FSc_1, ecat_1);
      display_record(std_name2, matric_2, FSc_2, ecat_2);
      display_record(std_name3, matric_3, FSc_3, ecat_3);
      display_record(std_name4, matric_4, FSc_4, ecat_4);
   }
   if (option == 3)
   {
      cout << "the program does not have the record of second student";
      cout << endl;
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");

   header();
   option = menu();

   if (option == 1)
   {
      cout << "NO further entry for students";
   }
   if (option == 2)
   {
      display_record(std_name1, matric_1, FSc_1, ecat_1);
      display_record(std_name2, matric_2, FSc_2, ecat_2);
      display_record(std_name3, matric_3, FSc_3, ecat_3);
      display_record(std_name4, matric_4, FSc_4, ecat_4);
   }
   if (option == 3)
   {
      total_agg1 = aggregate(matric_1, FSc_1, ecat_1);
      total_agg2 = aggregate(matric_2, FSc_2, ecat_2);
      total_agg3 = aggregate(matric_3, FSc_3, ecat_3);
      total_agg4 = aggregate(matric_4, FSc_4, ecat_4);

      sorting(total_agg1, total_agg2, total_agg3, total_agg4, std_name1, std_name2, std_name3, std_name4);
   }
   if (option == 4)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 5)
   {
      cout << "This option is blocked by Programmer" << endl;
   }
   if (option == 6)
   {
      cout << "Thank you for using the application :)" << endl;
   }

   cout << "Enter any key button and press Enter: ";
   cin >> garbage;
   system("cls");
}