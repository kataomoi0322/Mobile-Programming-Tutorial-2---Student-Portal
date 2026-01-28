/*Lab Skill 2 - Question 3
Name		: Lee Xuan hui
Date		: 21 August 2025
*/
public class L2Question3 {
    public static class Employee{
        int id;
        String firstName ,lastName;
        double salary;

        public Employee(int id, String firstName,String lastName, double salary) {
            this.id = id;
            this.firstName =firstName;
            this.lastName = lastName;
            this.salary = salary;
        }
        
        public int getId(){
            return id;
        }

        public String getFirstName(){
            return firstName;
        }

        public String getLastName(){
            return lastName;
        }
        
        public String getName(){
            return firstName + " " +lastName;
        }
        
        public double getSalary(){
            return salary;
        }

        public void setSalary(double salary){
            this.salary =salary;
        }

        public double getAnnualSalary(){
            return salary *12 ;
        }

        public void raiseSalary(double percent){
            System.out.println(getName()+ "staring salary RM" +salary+ " has been raised by " + percent);
            salary = salary + (salary * percent/100);
            System.out.println("New Salary is RM"+salary);
        }

        public String toString(){
            return "id :" + id +" Name" + getName() + " Salary" +salary +" Annual Salary:"+getAnnualSalary();
        }
    }

    public static void main(String[] args) {
        Employee emp1 = new Employee(101, "Ali", "Bin Abu", 1000.0);
        Employee emp2 = new Employee(102, "Muthu", "Ramasamy", 1230.0);

        System.out.println(emp1.toString());
        System.out.println(emp2.toString());

        emp1.raiseSalary(10.0);
        emp2.raiseSalary(20.0);

        System.out.println(emp1.toString());
        System.out.println(emp2.toString());
    }
}
