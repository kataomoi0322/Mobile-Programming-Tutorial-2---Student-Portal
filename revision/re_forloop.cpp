#include <iostream>

/*int main(){

    for (int i = 0; i <5; i++) {
        std::cout<<i<<"\n";
    }

    return 0;

}*/

int main (){
    int matrix [3][3] = { {1,0,5},
                          {2,1,4},{1,2,3}} ;


    for (int i =0; i<3; i++)
    {
        for (int j=0; j <3; j++)
        {
            std::cout << matrix[i][j]<<",";
        }
        std::cout << "\n";
    }

    for(int i : matrix)
    {
        std::cout << i << std::endl;
    }

}