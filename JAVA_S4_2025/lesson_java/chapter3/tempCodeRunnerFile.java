package JAVA_S4_2025.lesson_java.chapter3;

public class Circle {
    protected double radius;

    public Circle(double radius) {
        this.radius = radius;  // Also fix this bug!
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }

    public double getCircumference() {
        return 2 * Math.PI * radius;
    }

    public static void main(String[] args) {
        Circle c = new Circle(2.5);
        System.out.println("Area: " + c.getArea());
        System.out.println("Circumference: " + c.getCircumference());
    }
}
