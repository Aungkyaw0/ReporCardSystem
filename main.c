/*Developed By AKT*/
#include <stdio.h>
void StudentInfo();
int ScanfIntHandling();
char ScanfCharHandling();
int AddingMark(int Mine[]);
void ViewMarks(int s_id, char s_name[], int s_age, int Mine[]);
int main() {
    int pass, acc_type, guest_op;
    int teacher_pass = 100;//Password For Teacher
    int op = 0, op1 = 0, op2 = 0, op3 = 0;
    //Student Data
    //For Student 1
    int stu1_id = 1;
    char student1_name[] = {"Thomas"};
    int stu1_mark[6] = {0};// {78,77,85,98,65,94};
    int stu1_age = 18;
    //For Student 2
    int stu2_id = 2;
    char student2_name[] = {"William"};
    int stu2_mark[6] = {0}; //= {64,44,74,82,85,90};
    int stu2_age = 17;
    //For Student 3
    int stu3_id = 3;
    char student3_name[] = {"James"};
    int stu3_mark[6] = {0};
    int stu3_age = 17;

   while(1)
   {
       printf("\nStudent Report Card System\n---------------------------\n!!!You Must Need To Insert Data First!!!\n1. Teacher \n2. Guest \n3. Quit\n");
       printf("Enter Your account type ::> ");
       acc_type = ScanfIntHandling();
       //For Teacher
       if(acc_type == 1)
       {
           int P_warning = 6;
           while(P_warning)
           {
               printf("Enter The Password For Your Account ::> ");
               pass = ScanfIntHandling();
               do{
                   if(pass == teacher_pass)
                   {//If Teacher
                       int stun;
                       printf("\nWelcome From Teacher Section\n-----------------------------\n");
                       printf("1. Add Marks For Students\n2. View Student Information\n3. Quit From Teacher Section\n");
                       printf("Enter the operation number ::> ");
                       op1 = ScanfIntHandling();
                       if(op1 == 1)
                       {
                           //Mark Adding
                           printf("\nAdding Marks For Students\n----------------------------\n");
                           printf("Enter The Student no :: ");
                           stun = ScanfIntHandling();
                           switch(stun)
                           {

                               case 1://Add marks for student 1
                                   char ch1;
                                   printf("Are you sure to add marks for %s (y,n) ::> ",student1_name);
                                   ch1 = ScanfCharHandling();
                                   if(ch1 == 'n')
                                   {
                                       break;
                                   }
                                   else if(ch1 != 'y' && ch1 != 'n')
                                   {
                                       printf("!!!!!Invlaid Input!!!!!");
                                       break;
                                   }
                                   if(AddingMark(stu1_mark) == 1)
                                   {
                                       printf("Adding Operation Done");
                                   }
                                   break;
                               case 2:// Add Marks For Student 2
                                   char ch2;
                                   printf("Are you sure to add marks for %s (y,n) ::> ",student2_name);
                                   //scanf(" %c", &ch2);
                                   ch2 = ScanfCharHandling();
                                   if(ch2 == 'n')
                                   {
                                       break;
                                   }
                                   else if(ch2 != 'y' && ch2 != 'n')
                                   {
                                       printf("!!!!!Invlaid Input!!!!!");
                                       break;
                                   }
                                   AddingMark(stu2_mark);
                                   break;
                               case 3:// Add Marks For Student 3
                                   char ch3;
                                   printf("Are you sure to add marks for %s (y,n) ::> ",student3_name);
                                   ch3 = ScanfCharHandling();
                                   if(ch3 == 'n')
                                   {
                                       break;
                                   }
                                   else if(ch3 != 'y' && ch3 != 'n')
                                   {
                                       printf("!!!!!Invlaid Input!!!!!");
                                       break;
                                   }
                                   AddingMark(stu3_mark);
                                   break;
                               default:
                                   printf("!!!These are only 3 students in Database!!!");
                           }
                       }
                       else if(op1 == 2)//Viewing Student Information
                       {
                           printf("\nStudent Information Schema\n---------------------------\n");
                           printf("Enter the student id ::> ");
                           op2 = ScanfIntHandling();
                           switch (op2)
                           {
                               case 1:
                                   ViewMarks(stu1_id,student1_name,stu1_age,stu1_mark);
                                   break;
                               case 2:
                                   ViewMarks(stu2_id,student2_name,stu2_age,stu2_mark);
                                   break;

                               case 3:
                                   ViewMarks(stu3_id,student3_name,stu3_age,stu3_mark);
                                   break;
                               default:
                                   printf("!!!Please Enter Between (1-3)!!!");
                                   break;

                           }

                       }
                       else if(op1 == 3)//Quitting
                       {
                           P_warning = 0;
                           break;
                       }
                       else
                       {
                           printf("!!Please Enter the operation number (1-3)!!");
                       }

                       printf("\nEnter 1 to try again ::> ");
                       op = ScanfIntHandling();
                       if(op != 1)
                       {
                           break;
                       }



                   }//If Teacher
                   else
                   {
                       printf("!!Your Password is Wrong!!");
                       P_warning--;
                       printf("You have %d times to wrong\n", P_warning);
                       break;
                   }
               }
               while(pass > 0);
               /*printf("\nEnter 1 to run again ::> ");
               scanf("%d", &op);
               if(op != 1)
               {
                   break;
               }
                */

           }


       }//For Teacher
       //For THe Guest
       else if(acc_type == 2)
       {
           while(acc_type)
           {
               printf("Welcome From Guest Section\n-----------------------\n");
               printf("Enter the student id ::>");
               guest_op = ScanfIntHandling();

               switch (guest_op)
               {
                   case 1:
                       ViewMarks(stu1_id,student1_name,stu1_age,stu1_mark);
                       break;
                   case 2:
                       ViewMarks(stu2_id,student2_name,stu2_age,stu2_mark);
                       break;

                   case 3:
                       ViewMarks(stu3_id,student3_name,stu3_age,stu3_mark);
                       break;
                   default:
                       printf("!!!Please Enter the id 1-3!!!");

               }
               printf("\nEnter 1 to run again ::> ");
               op3 = ScanfIntHandling();
               if(op3 != 1)
               {
                   break;
               }

           }


       }
       else if(acc_type == 3)
       {
           printf("Bye Bye");
           break;
       }

   }

}
int ScanfIntHandling()
{
    int inp;
    int status = scanf("%d", &inp);
    if(status != 1)
    {
        scanf( "%*[^\n]" );
        inp = 0;
    }
    return  inp;

}
char ScanfCharHandling()
{
    char inp;

    scanf(" %c", &inp);
    if(inp == 'y' || inp == 'Y')
    {
        scanf( "%*[^\n]" );
        return 'y';
    }
    else if(inp == 'n' || inp == 'N')
    {
        scanf( "%*[^\n]" );
        return 'n';
    }
    else
    {
        scanf( "%*[^\n]" );
        return 'a';
    }
}

int AddingMark(int Mine[])
{
    int counter = 0;
    printf("Enter the marks of student As Follows\nSubj 1 = Myanmar, Subj2 = English, Subj3 = Math, subj4 = Chemistry, Subj5 = Physics, Subj6 = Bio\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the mark for subject %d ::> ", i + 1);
        Mine[i] = ScanfIntHandling();
        if(Mine[i] <= 0)
        {
            printf("Invalid data input Try Again");
            break;
        }
        counter = 1;
    }
    return counter;

    printf("Adding Marks Operation Done!!!\n");
    /*for(int i = 0; i < 6; i++)
    {
        printf("The mark for Subject %d = %d", i, Mine[i]);
    }*/
}

void ViewMarks(int s_id, char s_name[], int s_age, int Mine[])
{

    printf("\nRecord For Student %d\n---------------------\n", s_id);
    printf("Student ID ::> %d\n",s_id);
    printf("Student Name ::> %s\n", s_name);
    printf("Student Age ::> %d\n", s_age);
    if(Mine[0] != 0)
    {
        printf("Marks For Myanmar ::> %d\n", Mine[0]);
        printf("Marks For English ::> %d\n", Mine[1]);
        printf("Marks For Mathematics ::> %d\n", Mine[2]);
        printf("Marks For Chemistry ::> %d\n", Mine[3]);
        printf("Marks For Physics ::> %d\n", Mine[4]);
        printf("Marks For Biology ::> %d\n", Mine[5]);
    }
    else
    {
        printf("!!!NO DATA for Marks!!! \n");
    }
}
