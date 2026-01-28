/*Lab Skill 2 - Question 1
Name		: Lee Xuan hui
Date		: 21 August 2025
*/

public class L2Question1 {
    public static class Rectangle{
        int width,length,area;

        public Rectangle(){
            width = 1;
            length = 1;
        }

        public Rectangle(int length, int width) {
            this.length=length;
            this.width=width;
        }

        public int getArea(){
            area = length * width;
            return area;
        }
    }

    public static void main(String[] args) {
        Rectangle rect1 = new Rectangle();
        Rectangle rect2 = new Rectangle(2,2);

        int area1 = rect1.getArea();
        System.out.println("the area of rectangle1 is " + area1 );
        int area2 = rect2.getArea();
        System.out.println("area of rectangle 2 is " + area2);
        
    }
    
}
