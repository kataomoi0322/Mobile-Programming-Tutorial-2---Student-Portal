/*Lab Skill 2 - Question 6
Name		: Lee Xuan hui
Date		: 21 August 2025
*/
import java.util.Scanner;
public class L2Question6 {
    public static class MUETCandidate{
        String CandidateID;
        double ListeningScore;
        double ReadingScore;
        double WritingScore;
        double SpeakingScore;
        double totalScore;

        public MUETCandidate() {
            CandidateID = "a";
            ListeningScore = 0.00;
            ReadingScore = 0.00;
            WritingScore = 0.00;
            SpeakingScore = 0.00;
        }

        public MUETCandidate(String CandidateId,double ListeningScore,double ReadingScore,double WritingScore, double SpeakingScore){
            this.CandidateID=CandidateId;
            this.ListeningScore=ListeningScore;
            this.ReadingScore=ReadingScore;
            this.WritingScore=WritingScore;
            this.SpeakingScore=SpeakingScore;
        }

        public double calculateTotalScore(){
            totalScore = ListeningScore+ReadingScore+SpeakingScore+WritingScore;
            return totalScore;
        }

        public int determineBandScore(){
            if(totalScore<100){
                return 1;
            }else if(totalScore >=100 && totalScore<140){
                return 2;
            }else if(totalScore >=140 && totalScore<180){
                return 3;
            }else if(totalScore >=180 && totalScore<220){
                return 4;
            }else if(totalScore >=220 && totalScore<260){
                return 5;
            }else if(totalScore >=260 && totalScore<300){
                return 6;
            }else {
                return 0;
            }
        }

        public static void main(String[] args) {
            String CandidateID;
            double ListeningScore;
            double ReadingScore;
            double WritingScore;
            double SpeakingScore;
            int n = 2;
            boolean corrertRange = false;
            MUETCandidate[] muet = new MUETCandidate[10];
            Scanner scanner = new Scanner(System.in);

            
            for (int i = 0; i < n; i++) {
                System.out.print("please enter you candidate id: ");
                CandidateID = scanner.nextLine();
                
                do { 
                    System.out.print("please enter you Listening Score: ");
                    ListeningScore = scanner.nextDouble();
                    if (ListeningScore >= 1 && ListeningScore <= 45){
                        corrertRange = true;
                    }else{
                        System.out.println("error range please enter again");
                    }
                } while (corrertRange == false);

                scanner.nextLine();
                corrertRange = false;
                do { 
                    System.out.print("please enter you Reading Score: ");
                    ReadingScore = scanner.nextDouble();    
                    if (ReadingScore >= 1 && ReadingScore <= 120){
                        corrertRange = true;
                    }else{
                        System.out.println("error range please enter again");
                    }
                } while (corrertRange == false);

                scanner.nextLine();
                corrertRange = false;
                do { 
                    System.out.print("please enter you Writing Score: ");
                    WritingScore = scanner.nextDouble();   
                    if (WritingScore >= 1 && WritingScore <= 90){
                        corrertRange = true;
                    }else{
                        System.out.println("error range please enter again");
                    }
                } while (corrertRange == false);

                scanner.nextLine();
                corrertRange = false;
                do { 
                    System.out.print("please enter you Speaking Score: ");
                    SpeakingScore = scanner.nextDouble();
                    if (SpeakingScore >= 1 && SpeakingScore <= 90){
                        corrertRange = true;
                    }else{
                        System.out.println("error range please enter again");
                    }
                } while (corrertRange == false);
                scanner.nextLine();

                muet[i]= new MUETCandidate(CandidateID, ListeningScore, ReadingScore, WritingScore, SpeakingScore);

            }

            for (int i = 0; i < n; i++) {
                System.out.println("Candidate ID : " +muet[i].CandidateID);
                System.out.println("Listening Score : " +muet[i].ListeningScore);
                System.out.println("Reading Score : " +muet[i].ReadingScore);
                System.out.println("Writing Score : " +muet[i].WritingScore);
                System.out.println("Speaking Score : " +muet[i].SpeakingScore);
                System.out.println("Total Scoree : "+muet[i].calculateTotalScore());
                System.out.println("Grade: "+muet[i].determineBandScore());
            }
        }
    }
}
