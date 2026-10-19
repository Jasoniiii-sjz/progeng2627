#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    std::srand(std::time(NULL));

    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    std::cout<<"you start at"<<row<<col<<std::endl;
    int Nrow=0,Ncol=0;
    bool reached = false;
    while (reached==false){
        std::cout<<"enter the new row coordinate"<<std::endl;
        std::cin >> Nrow;
        std::cout<<"enter the new col coordinate"<<std::endl;
        std::cin>>Ncol;
        if(Nrow-row==-2||Nrow-row==2){
            if(Ncol-col==-1||Ncol-col==1){
                std::cout<<"valid move"<<std::endl;
                col=Ncol;
                row=Nrow;
            }
            else{
                std::cout<<"invalid move"<<std::endl;
            }
        }
        if(Nrow-row==-1||Nrow-row==1){
            if(Ncol-col==-2||Ncol-col==2){
                std::cout<<"valid move"<<std::endl;
                col=Ncol;
                row=Nrow;
            }
            else{
                std::cout<<"invalid move"<<std::endl;
            }
        }
        if((row==1&&col==1)||(row==1&&col==8)||(row==8&&col==1)||(row==8&&col==8)){
            reached=true;
            std::cout<<"well done"<<std::endl;
        }



    }
        

}
