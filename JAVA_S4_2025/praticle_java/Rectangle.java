public class Rectangle {
    float length = 1.0f;
    float width = 1.0f;

    public Rectangle() {
        length = 1.0f;
        width = 1.0f;
    }

    public Rectangle(float length, float width) {
        this.length=length;
        this.width=width;
    }
    public void setLength(float length){
        this.length = length;
    }
    public void setWidth(float Widt){
        this.width = Widt;
    }
    public float getLength(){
        return length;
    }
    public float getWidth(){
        return width;
    }

    public double getArea(){
        double area = length * width;
        return area;
    }

    public double getPerimeter(){
        double perimeter = length +length +width+width;
        return perimeter;
    }

    public String toString(){
        return "Rectangle length :"+this.length+" width:"+this.width+" Area:"+this.getArea()+" Perimeter:"+this.getPerimeter();
    }

    public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        String text = rect.toString();
        System.out.println(text);
    }
}
