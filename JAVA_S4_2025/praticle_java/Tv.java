import java.util.Scanner;

public class Tv {
    int channel = 0;
    int volumeLevel = 0;
    boolean status = false;

    public Tv() {
        channel = 1;
        volumeLevel = 1;
        status = false;
    }

    public void turnOn(){
        status = true;
    }

    public void turnOff(){
        status = false;
    }
    
    public void setChannel(int newChannel){
        channel = newChannel;
    }

    public void setVolume(int newVolume){
        volumeLevel = newVolume;
    }

    public void channelUp(){
        if(channel > 120){
            System.out.println("no more channel");
        }else{
            channel++;
        }
        
    }

    public void channelDown(){
        if(channel < 1){
            System.out.println("no more channel");
        }else{
            channel--;
        }
    }

    public void volumeUp(){
        if (volumeLevel >7){
            System.out.println("you are reach max volume");
        }else{
            volumeLevel++;
        }
        
    }

    public void volumeDown(){
        if(volumeLevel < 1){
            System.out.println("you are reach min volume");
        }else{
            volumeLevel--;
        }
    }

    public static void main(String[] args) {
        Tv tv = new Tv();
        int startChannel = 2;
        int startVolume = 3;
        boolean turnOn = true;
        System.out.println("now current channel is " + tv.channel+ " \nnow current volume "+ tv.volumeLevel + "\n");
        tv.setChannel(startChannel);
        tv.setVolume(startVolume);
        System.out.println("now current channel is " + tv.channel+ " \nnow current volume "+ tv.volumeLevel + "\n");
        Scanner scanner = new Scanner(System.in);
        while (turnOn == true){
            
            System.out.println("1. turn on tv");
            System.out.println("2. turn off tv");
            System.out.println("3. Channel up");
            System.out.println("4. Channel down");
            System.out.println("5. Volume up");
            System.out.println("6. Volume down");
            System.out.println("7. set Channel");
            System.out.println("8. set volume");
            System.out.println("9. exit");
            System.out.print("please enter the function that you want :");
            char op =scanner.next().charAt(0);
            if (tv.status == true){
                switch (op) {
                case '1' :
                    tv.turnOn();
                break;
                case '2' :
                    tv.turnOff();
                break;
                case '3' :
                    tv.channelUp();
                    System.out.println("Now channel is "+tv.channel);
                break;
                case '4' :
                    tv.channelDown();
                    System.out.println("Now channel is "+tv.channel);
                break;
                case '5' :
                    tv.volumeUp();
                    System.out.println("Now volume level is "+tv.volumeLevel);
                break;
                case '6' :
                    tv.volumeDown();
                    System.out.println("Now volume level is "+tv.volumeLevel);
                break;
                case '7' :
                    System.out.print("please enter channel code:");
                    startChannel = scanner.nextInt();
                    tv.setChannel(startChannel);
                    System.out.println("Now channel is "+tv.channel);
                break;
                case '8' :
                    System.out.print("please enter volume level:");
                    startVolume = scanner.nextInt();
                    tv.setVolume(startVolume);
                    System.out.println("Now volume level is "+tv.volumeLevel);
                break;
                case '9' :
                    turnOn = false;
                break;

                default:
                        System.out.println("please enter a valid number");
                }
            }else{
                System.out.println("your tv haven't start yet , turning on television");
                tv.turnOn();
                System.out.println("please enter again");
            }
            
        }
        scanner.close();   
    }
}

