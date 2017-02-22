#include<string>
class Employee{
public:
	Employee(std::string employeeName, int initialsalary)
	{
	        name= employeeName;
		{
			if (initialsalary > 0)
			{
				salary = initialsalary;
		  }
		}
		
	}
		void setName(std::string employeeName) 
		{
			name = employeeName;
		}
		std::string getName() 
		{
			return name;
		}
		void addSalary(int add) 
		{
			int multiply;
			multiply = salary*0.10;
			salary = multiply + salary;

			}
		 void setSalary(int salary)
		{
			int actualsalary=salary;
	    }
		int getsalary() 
		{
			return salary;
		}
	private:
		std::string name;
		int salary{0};
};

