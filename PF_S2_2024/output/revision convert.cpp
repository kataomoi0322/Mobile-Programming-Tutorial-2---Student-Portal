#include<iostream>
 
/*int main()
{
    // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    int correct = 8;
    int questions = 10;
    double score1 = correct/ questions * 100;
    double score2 = correct/(double)questions * 100;

    std::cout << score1 << "% \n";
    std::cout << score2 << "% \n";

    return 0;
}*/

/*int main(){
	int x = 1;
	double y = 4;
	double z = x/y;
	
	std::cout<<"answer z: "<<z<<"\n";
	std::cout<<"remainder z: "<<1%4<<"\n";
	
	return 0;
	  
} */
int main() 
{
   char grade;

   std::cout << "What letter grade?: ";
   std::cin >> grade;

   switch(grade){
      case 'A':
         std::cout << "You did great!";
         break;
      case 'B':
         std::cout << "You did good";
         break;
      case 'C':
         std::cout << "You did okay";
         break;
      case 'D':
         std::cout << "You did not do good";
         break;
      case 'F':
         std::cout << "YOU FAILED!";
         break;
      default:
         std::cout << "Please only enter in a letter grade (A-F)";
   }

   return 0;
}

/*int main (){
	char grade;
	
	std::cout << "What letter grade?: ";
    std::cin >> grade;
    
    if (grade == 'A'|| grade == 'a'){
    	std::cout << "You did great!";
	}
	else if (grade == 'B'|| grade == 'b'){
    	std::cout << "You did good";
	}
	else if (grade == 'C'|| grade == 'c'){
    	std::cout << "You did okay";
	}
	else if (grade == 'D'|| grade == 'd'){
    	std::cout << "You did not do good";
	}
	else if (grade == 'E'|| grade == 'e'){
    	std::cout << "YOU ARE IN DANGER!";
	}
	else if (grade == 'F'|| grade == 'f'){
    	std::cout << "YOU FAILED!";
	}
	else{
		std::cout << "Please only enter in a letter grade (A-F)";
	} 
	
	return 0;
} */
