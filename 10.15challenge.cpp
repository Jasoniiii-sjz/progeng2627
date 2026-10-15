#include <iostream>
int main(){
    int m,n,o;
    std::cout<<"How many sets for today"<<std::endl;
    std::cin>>n;
    for(m=0;m<n;m++){
        o=n-m;
        if(o==1){
            std::cout<<"Last set, come on!"<<std::endl;
        }
        else{
            std::cout<< o <<" more sets left!"<<std::endl;
        }
    }
    std::cout<<"Well done"<<std::endl;


}