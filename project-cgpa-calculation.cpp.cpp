/////////////////////////////////////
////PROJECT NAME: CGPA CALCULATION///
/////////////////////////////////////
//////// NAME: Md. Fokhor Uddin /////
//////// ID: 2014-2-60-054 //////////
//////// DEPARTMENT: CSE ////////////
//////// SEMESTER: SPRING 2015 ////////
//////// COURSE:CSE-107(OPP) ////////
//////// SECTION: 5 /////////////////
/////////////////////////////////////
/////////////////////////////////////

#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>

int TotalSubject;
float TotalCredit=0;
int i;
float sum=0;
float sum1=0;
float grade;

/////////////////////////////////////////

class StudentInfo
{
    public:

       char name[20];
       char id[20];
       char department[20];
       char section[20];


       void getStudentInfo()
       {

         cout<<"\nENTER NAME: ";
         cin>>name;
         cout<<"\nENTER ID: ";
         cin>>id;
         cout<<"\nENTER DEPARTMENT: ";
         cin>>department;
         cout<<"\nENTER SECTION: ";
         cin>>section;

       }
};

//////////////////////////////////////////

class SubjectInfo : public StudentInfo
{

       public:
       char SubjectName[10][20];
       char SubjectCode[10][20];
       float gpa[10];
       float credit[10];


       void getSubjectInfo()

        {

          cout<<"\n\n\nENTER TOTAL NUMBER OF SUBJECTS: ";
          cin>>TotalSubject;
          for(i=0;i<TotalSubject;i++)

          {
            cout<<"\nENTER SUBJECT NAME: ";
            cin>>SubjectName[i];
            cout<<"\nENTER SUBJECT CODE: ";
            cin>>SubjectCode[i];
            cout<<"\nENTER GPA: ";
            cin>>gpa[i];
            cout<<"\nENTER CREDIT: ";
            cin>>credit[i];
            sum=gpa[i]*credit[i];
            sum1=sum+sum1;
            TotalCredit+=credit[i];

          }

        }

        void CgpaCalculation()

        {

            cout<<"\nNAME: "<<name;
            cout<<"\nID: "<<id;
            cout<<"\nDEPARTMENT: "<<department;
            cout<<"\nSECTION: "<<section;
            grade=sum1/TotalCredit;
            cout<<"\nYOUR GRADE POINT IS: "<<grade;
            cout<<"\nYOUR GRADE IS: ";
            if(grade == 4.00)
            {
                cout<<"A+/A\n";
            }
            else if((grade >= 3.70) && (grade <=3.99))
            {
                cout<<"A-\n";
            }
             else if((grade >= 3.30) && (grade <= 3.69))
            {
                cout<<"B+\n";
            }
            else if((grade >= 3.00) && (grade <= 3.29))
            {
                cout<<"B\n";
            }
            else if((grade >= 2.70) && (grade <= 2.99))
            {
                cout<<"B-\n";
            }
            else if((grade >= 2.30) && (grade <= 2.69))
            {
                cout<<"C+\n";
            }
            else if((grade >= 2.00) && (grade <= 2.29))
            {
                cout<<"C\n";
            }
            else if((grade >= 1.70) && (grade <= 1.99))
            {
                cout<<"C-\n";
            }
            else if((grade >= 1.30) && (grade <= 1.69))
            {
                cout<<"D+\n";
            }
            else if((grade >= 1.00) && (grade <= 1.29))
            {
                cout<<"D\n";
            }
            else
            {
                cout<<"F\n";
            }
     }
};

//////////////////////////////////////////

int main()
{

    int option;
    int p=0;
    int check=0;
    int show=0;
    int TotalStudent;
    char StudentId[20];
    int count=0;
    cout<<"\nENTER TOTAL NUMBER OF STUDENTS: ";
    cin>>TotalStudent;
    SubjectInfo ob2[TotalStudent];

    while(1)
    {
        cout<<"\nCHOOSE AN OPTION\n\n1. INPUT\n2. SHOW\n3. EXIT\n";
        cin>>option;

        switch(option)
        {
            case 1:
                int num;
                i=0;
                while(1)
                {
                    ob2[i].getStudentInfo();
                    ob2[i].getSubjectInfo();
                    i++;
                    count++;
                    cout<<"\nTAKE MORE STUDENT'S INFO.\n1. YES 2. NO\n";
                    cin>>num;
                    if(num == 1)
                    {
                        continue;
                    }
                    else if(num == 2)
                    {
                        break;
                    }
                }
                show=1;
                break;

            case 2:
                if(show == 1)
                {
                    while(1)
                    {
                     cout<<"ENTER STUDENT ID: ";
                     cin>>StudentId;
                     for(i=0;i<=count;i++)
                     {
                         if(!(strcmp(ob2[i].id,StudentId)))
                         {
                          ob2[i].CgpaCalculation();
                          p=1;
                          break;
                         }
                     }
                     if(p == 1)
                     {
                      break;
                     }
                  cout<<"ID DOES NOT MATCH ANY STUDENT.TRY AGAIN\n\n";
                  }
                  break;
                  }
                  else
                  {
                  cout<<"PLEASE INPUT STUDENT'S INFORMATION FIRST\n\n";
                  break;
                  }
                case 3:
                check=1;
                break;
            default:
                cout<<"YOU CHOSE WRONG OPTION.TRY AGAIN\n";
                break;
        }
        if(check == 1)
        {
           break;
        }
    }
return 0;
}
/////////////////////////////////////////////////////////////

