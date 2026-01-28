/*Lab Skill 3 - Question 1
Name		: Lee Xuan Hui
Date		: 11 September 2025*/


import java.util.ArrayList;

public class Q1labskill3 {
    public static void main (String[]args){
        //a and b
        ArrayList<String> animal = new ArrayList<String>();

        //c
        animal.add("Kangaroo");
        animal.add("Cow");
        animal.add("Sheep");
        animal.add("Snake");
        animal.add("Buffalo");
        animal.add("Camel");
        animal.add("Giraffe");
        animal.add("Cat");
        animal.add("Dog");
        animal.add("Monkey");

        //d
        System.out.println("Size List Animal: "+animal.size());

        //e
        System.out.print("Animal list Array: ");

        for (int i = 0; i < animal.size(); i++) {
            System.out.print(animal.get(i)+"|");
        }

        System.out.println("");

        //f
        if(animal.contains("Camel")||animal.contains("Spider")){
            System.out.println("The elements was found in list");
        }else{
            System.out.println("The element was not found in list");
        }

        //g
        animal.add(6,"dolphin");
        
        //h
        System.out.println("Animal list after dolphin: ");
        for (int i = 6; i < animal.size(); i++) {
            System.out.print(animal.get(i)+"|");
        }

        System.out.println("");
        //i
        animal.remove("Snake");
        animal.remove("Dog");

        //j
        animal.remove(1);

        //k
        System.out.println("Animal list after remove: ");
        for (int i = 0; i < animal.size(); i++) {
            System.out.print(animal.get(i)+"|");
        }
        System.out.println("");
        //l
        System.out.println("The location of Monkey is at index " +animal.indexOf("Monkey"));
        
        //m
        animal.set(animal.indexOf("Cat"),"Hamster");
        
        //n
        System.out.println("Animal list after replace: ");
        for (int i = 0; i < animal.size(); i++) {
            System.out.print(animal.get(i)+"|");
        }
        System.out.println("");

        //o
        if(animal.isEmpty()){
            System.out.println("Array List is Empty");
        }else{
            System.out.println("Array list is not Empty");
        }

        //p
        String data1 = animal.get(4);
        String data2 = animal.get(6);

        int compare = data1.compareTo(data2);

        if(compare < 0){
            System.out.println(data1+" is come before "+data2);
        }else if (compare == 0){
            System.out.println(data1+"is equal"+data2);
        }else{
            System.out.println(data2+" is come before "+data1);
        }

        //q
        String dataNew =animal.get(3);
        if(dataNew.endsWith("y")){
            System.out.println("this element is end with y");
        }else{
            System.out.println("this element is not end with y");
        }
        //r
        System.out.println("animal list before clear: " + animal);

        //s
        System.out.println("Performance Clear Operation");

        //t
        animal.clear();

        //u
        System.out.println("Animal list after clear"+animal);

    }
}
