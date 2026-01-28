public class Student extends Person {
    private String program;
    private int year;
    private double fee;
    private double cgpa;

    public Student(String name, String address, String program, int year, double fee, double cgpa) {
        super(name,address); 
        this.program = program;
        this.year = year;
        this.fee = fee;
        this.cgpa = cgpa;
    }

    public String getProgram() { 
        return program; 
    }
    
    public void setProgram(String program) { 
        this.program = program; 
    }

    public int getYear() { 
        return year; 
    }

    public void setYear(int year) { 
        this.year = year; 
    }

    public double getFee() { 
        return fee; 
    }

    public void setFee(double fee) { 
        this.fee = fee; 
    }

    public double getCgpa() { 
        return cgpa; 
    }

    public void setCgpa(double cgpa) { 
        this.cgpa = cgpa; 
    }

    public double calculateFee(double fee){
        if(cgpa>=3.67){
            fee *= 0.75;
            return fee * 0.75;
        }else if(cgpa >=3.30 && cgpa <=3.66){
            fee *= 0.80;
            return fee * 0.80;
        }else if(cgpa >=3.00 && cgpa <=3.29){
            fee *= 0.85;
            return fee * 0.85;
        }else if(cgpa >=2.85 && cgpa <=2.99){
            fee *= 0.90;
            return fee * 0.90;
        }else {
            return fee;
        }
    }

    @Override
    public String toString() {
        return 
            "Student[program=" + program + ", year=" + year + ", fee=" + fee + ", cgpa=" + cgpa + "]";
    }
}