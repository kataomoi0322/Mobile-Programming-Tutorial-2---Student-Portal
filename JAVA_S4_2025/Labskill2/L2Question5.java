/*Lab Skill 2 - Question 5
Name		: Lee Xuan hui
Date		: 21 August 2025
*/
import java.util.Scanner;

public class L2Question5 {
    public static class Movie{
        String title;
        String director;
        int rating;

        public Movie() {
            title = "a";
            director = "b";
            rating = 0;
        }

        public Movie(String title, String director,int rating ) {
            this.title = title;
            this.director = director;
            this.rating = rating;
        }

        public void setMovie (String title,String director,int rating){
            this.title = title;
            this.director = director;
            this.rating = rating;
        }
        
        public String toString(){
            return "Title :"+title+" Director: "+director+" Rating: "+rating+"\n";
        }
    }

    public static void main(String[] args) {
        String title;
        String director;
        int rating;

        Scanner scanner = new Scanner(System.in);
        Movie[] movie= new Movie[5];
        for (int i = 0; i<5; i++) {
            System.out.print("please enter movie title:");
            title = scanner.nextLine();
            System.out.print("please enter the director:");
            director = scanner.nextLine();
            System.out.print("please enter rating:");
            rating = scanner.nextInt();
            scanner.nextLine();
            movie[i] = new Movie();
            movie[i].setMovie(title, director, rating);
        }
        scanner.close();
        System.out.println(" ");
        for(int i= 0;i<5;i++){
            String text = movie[i].toString();
            System.out.println(text);
        }

        movie[4].setMovie("KL_Gangster_2", "Syamsul_Yusof", 8);
        System.out.println(movie[4].toString());
    }
}
