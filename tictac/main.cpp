#include <iostream>
// printmap(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8]);

void printmap(char *tictac0,char *tictac1,char *tictac2,char *tictac3,char *tictac4,char *tictac5,char *tictac6,char *tictac7,char *tictac8);
int takeinput(char *ticktack);

int main(){
    char tictac[9];
    for(int i=0;i<9;i++){
        tictac[i]=' ';
    }
    while(tictac[0]==' '&tictac[1]==' '&tictac[2]==' '&tictac[3]==' '&tictac[4]==' '&tictac[5]==' '&tictac[6]==' '&tictac[7]==' '&tictac[8]==' '){
        int fullboxes=0;
        for(int i=0;i<9;i++){
            if(tictac[i]!=' '){
                fullboxes++;
            }
        }
    if(fullboxes%2==1){
            int box=takeinput(tictac);
        for(int i=1;i<10;i++){
                if(box==0){
                    std::cout<<"Please choose a valid box."<<std::endl;
                }if(box==10){
                    std::cout<<"Please choose an empty box."<<std::endl;
                }
            if(box==i){
                tictac[(i-1)]='O';
                }
            }
        }
    }
}

void printmap(char *tictac0,char *tictac1,char *tictac2,char *tictac3,char *tictac4,char *tictac5,char *tictac6,char *tictac7,char *tictac8){
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*tictac0)<<"  |  "<<(*tictac1)<<"  |  "<<(*tictac2)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*tictac3)<<"  |  "<<(*tictac4)<<"  |  "<<(*tictac5)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*tictac6)<<"  |  "<<(*tictac7)<<"  |  "<<(*tictac8)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
}
int takeinput(char *ticktack){
    int input;
    std::cin>>input;
    if(input>9&input<1){
        return 0;
    }
    if(ticktack[input]!=' '){
        return 10;
    }else{
        return input;
    }
    return 0;
}
