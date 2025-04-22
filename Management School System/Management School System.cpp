// Management School System Project (opp and basic)
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

// classes 
class Teachers
{
    private :
        string name ;
        int age ;
        int salary ;
    public :
        // parameterized constructor
        Teachers(string name , int age , int salary)     
        {
            this-> name = name ;
            this-> age = age ;
            this-> salary = salary ;
        }
        /*  
        ///  parameterized constructor
        Teachers(string n , int a , int s)     
        {
            name = n ;
            age = a ;
            salary = s;
        }
        */

        void show (int i)        // i ===> counter start from zero
        {
            cout << "---------------------------------------" << endl;
            cout << "Teacher "<< i + 1 << " information " ;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Name "<< i+1 <<" : " << name << endl;
            cout << "Age " << i+1 <<" : " << age << endl;
            cout << "Salary "<< i+1 <<" : " << salary << endl;
        }
} ;

class Students
{
    private :
        string name ;
        int age ;
        int benchNumber ;
    public :
        // parameterized constructor
        Students(string name , int age , int benchNumber)     
        {
            this-> name = name ;
            this-> age = age ;
            this-> benchNumber = benchNumber ;
        }
        /*  
        /// parameterized constructor
        Students(string n , int a , int bn)     
        {
            name = n ;
            age = a ;
            benchNumber = bn ;
        }
        */

       void show (int i)         // i ===> counter start from zero
       {
            cout << "---------------------------------------" << endl;
            cout << "Student "<< i + 1 << " information " ;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Name "<< i+1 <<" : " << name << endl;
            cout << "Age " << i+1 <<" : " << age << endl;
            cout << "benchNumber "<< i+1 <<" : " << benchNumber << endl;
            cout << "---------------------------------------" << endl;           

       }

} ;

// ---------------------------------------------------

// Function prototypes
void add_teacher() ;
void add_student() ;
void main_func() ;

// ---------------------------------------------------

int main ()
{      
    main_func() ;
    return 0 ;
}

// ---------------------------------------------------

void main_func()
{
    int choice ;
    do 
    {
        cout << "--------------------- System Option ---------------------" << endl;
        cout << "1 - press 1 to add teachers "<<"\n" ;
        cout << "2 - press 2 to add students "<<"\n" ;
        cout << "3 - press 3 to Exit " <<"\n" ;
        cout << "---------------------------------------" << endl;

        cin >> choice ;
        cout << "---------------------------------------" << endl;

        // switch statement 
        switch(choice)
        {
            case 1 :
                add_teacher() ;
                break ;

            case 2 :
                add_student() ;
                break ;

            case 3 :
                break ;

            default :
                cout << "Enter a valid number !" << endl;
        }

    }while(choice != 3) ;

}

// ---------------------------------------------------

void add_teacher()
{
    int teacherChoice ;
    cout <<"enter a number of teachers : " << endl;
    cout << "---------------------------------------" << endl;
    cin >> teacherChoice ;
    cout << "---------------------------------------" << endl;

    // three array for store information 
    string name[1000] ;
    int age[1000] ;
    int salary[1000] ;

    // for ===> for to getting data from user
    for(int i =0 ; i < teacherChoice ; i++)
    {
        cout << "enter name " << i+1 << endl;
        cin >> name[i] ;

        cout << "enter age " << i+1 << endl;
        cin >> age[i] ;

        cout << "enter salary " << i+1 << endl;
        cin >> salary[i] ;

    }

    // for ===> for to print data 
    for(int i = 0 ; i < teacherChoice ;i++)
    {
        Teachers teacher(name[i] , age[i] , salary[i]) ;         // i ===> counter start from zero
        
        teacher.show(i) ;          // i ===> counter start from zero
        
    }


}

// ---------------------------------------------------

void add_student()
{
    int studentChoice ;
    cout <<"enter a number of Students : " << endl;
    cout << "---------------------------------------" << endl;
    cin >> studentChoice ;
    cout << "---------------------------------------" << endl;

    // three array for store information 
    string name[1000] ;
    int age[1000] ;
    int benchNumber[1000] ;

    // for ===> for to getting data from user
    for(int i =0 ; i < studentChoice ; i++)
    {
        cout << "enter name " << i+1 << endl;
        cin >> name[i] ;

        cout << "enter age " << i+1 << endl;
        cin >> age[i] ;

        cout << "enter benchNumber " << i+1 << endl;
        cin >> benchNumber[i] ;

    }

    // for ===> for to print data 
    for(int i = 0 ; i < studentChoice ;i++)
    {
        Students student(name[i] , age[i] , benchNumber[i]) ;       // i ===> counter start from zero
        
        student.show(i) ;          // i ===> counter start from zero
        
    }


}

// ---------------------------------------------------


