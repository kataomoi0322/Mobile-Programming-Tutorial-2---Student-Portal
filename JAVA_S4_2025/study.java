interface Stud{
    void makeSound();
}

class Book implements Stud{
    @Override
    public void makeSound(){
        System.out.println("hi");
    }
}

public class study {
    public static void main(String[] args) {
        Book b = new Book();
        b.makeSound();
    }
}
