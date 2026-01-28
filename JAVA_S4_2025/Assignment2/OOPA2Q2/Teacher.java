public class Teacher extends Person implements Comparable<Teacher> {
    private String school;
    private double salary;

    public Teacher(String name, String address, String school, double salary) {
        super(name,address); 
        this.school = school;
        this.salary = salary;
    }

    public String getSchool() { 
        return school; 
    }

    public void setSchool(String school) { 
        this.school = school; 
    }

    public double getSalary() { 
        return salary; 
    }
    
    public void setSalary(double salary) { 
        this.salary = salary; 
    }

    @Override
    public int compareTo(Teacher other) {
        return Double.compare(this.salary, other.salary);
    }

    @Override
    public String toString() {
        return "Teacher name: "+ super.name +"\naddress:"+super.address+ "\nschool:" + school + "\nsalary:" + salary + "\n";
    }
}