#include <iostream>
#include <vector>

using namespace std;

struct stEmployee {
    string FirstName;
    string LastName;
    int Salary;
};

void FillVectorEmployee(vector<stEmployee> & vEmployee)
{
    char Answer = 'Y';
    stEmployee TemplateEmployee;
    while ((Answer == 'Y') || (Answer == 'y'))
    {
        cout << " First Name  : ";
        cin >> TemplateEmployee.FirstName;
        cout << " Last Name   : ";
        cin >> TemplateEmployee.LastName;
        cout << " Salary      : ";
        cin >> TemplateEmployee.Salary;

        vEmployee.push_back(TemplateEmployee);
        cout << "You want add more number ? Y / N ? ";
        cin >> Answer;
    }
}

void PrintVectorEmployee(vector <stEmployee> & vEmployee)
{
    
    for (stEmployee  Number : vEmployee)
    {
        cout << "\n\nFirst Name Is : " << Number .FirstName<< endl;
        cout << "Last Name Is  : " << Number.LastName << endl;
        cout << "Salary Is     : " << Number.Salary <<endl;
        cout << endl;
    }
}

int main()
{
    vector <stEmployee> vEmployee;

    FillVectorEmployee(vEmployee);
    PrintVectorEmployee(vEmployee);

    return 0;
}