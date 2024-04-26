#include <iostream>
using namespace std;

typedef struct 
{
    string name;
    int age;
    double salary;
    int gender;    //male >> 0 , female >> 1

}Employee;

#define Number_Of_Emoloyee  1000

#define Add_new_employee      1
#define Print_all_Employee    2
#define Delete_employee       3
#define Update_salary         4
#define Escape                5



Employee arr[Number_Of_Emoloyee];
unsigned int Employee_counter;
bool Program_State = true;
unsigned int User_Choise = 1000; 

int main()
{

    while(Program_State)
    {
        cout << "\nEnter your choice:\n";
		cout << "1) Add new employee\n";
		cout << "2) Print all employees\n";
		cout << "3) Delete by age\n";
		cout << "4) Update Salary by name\n";
        cout << "5) Escape From the Program\n";

        cin >> User_Choise;

        if (User_Choise == Add_new_employee)

        {   
            cout << "Enter The Employee Name: ";
            cin >> arr[Employee_counter].name;

            cout << "Enter The Employee Age: ";
            cin >> arr[Employee_counter].age;

            label: cout << "Enter The Employee Gender: ";
            cin >> arr[Employee_counter].gender;
            if((arr[Employee_counter].gender != 0) && (arr[Employee_counter].gender != 1))
            {
                cout << "Invalid Gender...Please Choose the Gender again\n";
                goto label;
            }

            cout << "Enter The Employee Salary: ";
            cin >> arr[Employee_counter].salary;

            ++Employee_counter;

        }
        else if(User_Choise == Print_all_Employee)
        {
            for(int i = 0; i < Employee_counter; ++i)
            {
                cout << "No." << i+1 << " The Employee Name: ";
                cout << arr[i].name << endl;

                cout << "No." << i+1 << " The Employee Age: ";
                cout << arr[i].age << endl;

                cout << "No." << i+1 << " The Employee Gender: ";
                if(arr[i].gender == 0)
                    cout << "male" << endl;
                else
                    cout << "female" << endl;

                cout << "No." << i+1 << " The Employee Salary: ";
                cout << arr[i].salary << endl;

                cout << "\n";
            }
        }
        else if(User_Choise == Delete_employee)
        {
            int Employee_Age = 0;
            cout << "Enter The Employee Age: ";
            cin >> Employee_Age;

            for(int i = 0; i < Employee_counter; ++i)
            {
                if(Employee_Age == arr[i].age)
                {
                    arr[i].age    = -1;      //lazy delete
                    arr[i].name   = "Delated Employee";
                    arr[i].salary = 0.0;
                }
            }

        }
        else if(User_Choise == Update_salary)
        {
            string Employee_Name;
            cout << "Enter The Employee Name: ";
            cin >> Employee_Name;

            for(int i = 0; i < Employee_counter; ++i)
            {
                if(Employee_Name == arr[i].name)
                {
                    cout << "Enter The New Salary: ";
                    cin >> arr[i].salary;
                }
            }
        }
        else if(User_Choise == Escape)
        {
            Program_State = false;
        }
        else
        {
            cout << "Invalid Choice... Please Enter Your Choice again\n";
        }

    }

    return 0;
}