#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Employee{
public:
  Employee()
  {

  }
  Employee(string firstName,string lastName,double salary)
  {
    firstname=firstName;
    lastname=lastName;
    monthlySalary=salary;
  }
  ~Employee()
  {
  }
  void set_firstname(string firstName)
  {
    firstname=firstName;
  }
  void set_lastname(string lastName)
  {
    lastname=lastName;
  }
  void set_monthlySalary(double salary)
  {
    if(salary>=0)
    monthlySalary=salary;
    else
    monthlySalary=0.0;
  }
  string get_firstname()
  {
    return firstname;
  }
  string get_lasttname()
  {
    return lastname;
  }
  double get_monthlySalary()
  {
    return monthlySalary;
  }
  void calculate_yearlySalary() {
    monthlySalary*=12;
  }
  void raise_in_salary()
  {
    double profit;
    profit=monthlySalary*0.1;
    monthlySalary+=profit;
  }
private:
  string firstname,lastname;
  double monthlySalary;
};
int main(int argc, char const *argv[]) {
  Employee employee_1("Awais","Saeed",100),employee_2;
  string name;
  double salary;
  /*cout<<"\nEmployee_1 First Name: ";
  cin>>name;
  employee_1.set_firstname(name);
  cout<<"\nEmployee_1 last Name: ";
  cin>>name;
  employee_1.set_lastname(name);
  cout<<"\nEmployee_1 Monthly salary: ";
  cin>>salary;
  employee_1.set_monthlySalary(salary);
/***************/
  cout<<"\nEmployee_2 First Name: ";
  cin>>name;
  employee_2.set_firstname(name);
  cout<<"\nEmployee_2 last Name: ";
  cin>>name;
  employee_2.set_lastname(name);
  cout<<"\nEmployee_2 Monthly salary: ";
  cin>>salary;
  employee_2.set_monthlySalary(salary);
  /************/
  employee_1.calculate_yearlySalary();
  employee_2.calculate_yearlySalary();
  cout<<"\nEmployee_1 Name: "<<employee_1.get_firstname()<<" "<<employee_1.get_lasttname()<<"   Yearly Salary: "<<employee_1.get_monthlySalary()<<endl;
  cout<<"\nEmployee_2 Name: "<<employee_2.get_firstname()<<" "<<employee_2.get_lasttname()<<"   Yearly Salary: "<<employee_2.get_monthlySalary()<<endl;
  employee_1.raise_in_salary();
  employee_2.raise_in_salary();
  cout<<"\nYearly Salary after 10% Raise"<<endl;
  cout<<"\nEmployee_1 Name: "<<employee_1.get_firstname()<<" "<<employee_1.get_lasttname()<<"   Yearly Salary: "<<employee_1.get_monthlySalary()<<endl;
  cout<<"\nEmployee_2 Name: "<<employee_2.get_firstname()<<" "<<employee_2.get_lasttname()<<"   Yearly Salary: "<<employee_2.get_monthlySalary()<<endl;

  return 0;
}
