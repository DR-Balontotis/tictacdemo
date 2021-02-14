#include <iostream>

char tictac[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void printmap();
int winningcheck();
int closewinningcheck();
int takeinput();

int main(){
    int fullboxes=0;
    printmap();
    while(fullboxes<9&&winningcheck()==1){
        if(fullboxes%2==1){
            int playerbox=takeinput();
            tictac[playerbox-1]='O';
            fullboxes++;
            printmap();
        }else{
            int sc=closewinningcheck();
            switch(sc){
            case 0:
                for(int i=0;i<9;i+=2){
                    if(tictac[i]==' '){
                        tictac[i]='X';
                        i=1231;
                    }
                }
                fullboxes++;
            case 10:
                tictac[0]='X';
                fullboxes++;
            case 11:
                tictac[1]='X';
                fullboxes++;
            case 12:
                tictac[2]='X';
                fullboxes++;
            case 13:
                tictac[3]='X';
                fullboxes++;
            case 14:
                tictac[4]='X';
                fullboxes++;
            case 15:
                tictac[5]='X';
                fullboxes++;
            case 16:
                tictac[6]='X';
                fullboxes++;
            case 17:
                tictac[7]='X';
                fullboxes++;
            case 18:
                tictac[8]='X';
                fullboxes++;
            }
        }
    }
    winningcheck();
    return 0;
}

void printmap(){
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<tictac[0]<<"  |  "<<tictac[1]<<"  |  "<<tictac[2]<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<tictac[3]<<"  |  "<<tictac[4]<<"  |  "<<tictac[5]<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<tictac[6]<<"  |  "<<tictac[7]<<"  |  "<<tictac[8]<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
}

int winningcheck(){
    if((tictac[0])=='O'&&(tictac[1])=='O'&&(tictac[2]=='O')){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[3])=='O'&&(tictac[4]=='O')&&(tictac[5]=='O')){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[6])=='O'&&(tictac[7])=='O'&&(tictac[8])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[0])=='O'&&(tictac[3])=='O'&&(tictac[6])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[1])=='O'&&(tictac[4])=='O'&&(tictac[7])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[2])=='O'&&(tictac[5])=='O'&&(tictac[8])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[0])=='O'&&(tictac[4])=='O'&&(tictac[8])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[2])=='O'&&(tictac[4])=='O'&&(tictac[6])=='O'){
            printmap();
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((tictac[0])=='X'&&(tictac[1])=='X'&&(tictac[2]=='X')){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[3])=='X'&&(tictac[4]=='X')&&(tictac[5]=='X')){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[6])=='X'&&(tictac[7])=='X'&&(tictac[8])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[0])=='X'&&(tictac[3])=='X'&&(tictac[6])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[1])=='X'&&(tictac[4])=='X'&&(tictac[7])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[2])=='X'&&(tictac[5])=='X'&&(tictac[8])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[0])=='X'&&(tictac[4])=='X'&&(tictac[8])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((tictac[2])=='X'&&(tictac[4])=='X'&&(tictac[6])=='X'){
            printmap();
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }
        return 1;
}
int takeinput(){
    int input;
    while(1){
        std::cin>>input;
        bool notfull=true;
        for(int i=1;i<10;i++){
            if(tictac[i]!=' '){
                notfull=false;
            }
        }
        if(notfull){
            if(input<10||input>0){
                break;
            }else{
                std::cout<<"Please choose a valid box."<<std::endl;
            }
        }else{
            std::cout<<"Please choose an empty box."<<std::endl;
        }
    }
    return input;
}

int closewinningcheck(){
    if((((tictac[0]=='X'&&tictac[1]=='X')||(tictac[5]=='X'&&tictac[8]=='X'))||(tictac[4]=='X'&&tictac[6]=='X'))||(((tictac[0]=='O'&&tictac[1]=='O')||(tictac[5]=='O'&&tictac[8]=='O'))||(tictac[4]=='X'&&tictac[6]=='X'))){
        return 12;
    }else if((((tictac[1]=='X'&&tictac[2]=='X')||(tictac[3]=='X'&&tictac[6]=='X'))||(tictac[4]=='X'&&tictac[8]=='X'))||(((tictac[1]=='O'&&tictac[2]=='O')||(tictac[3]=='O'&&tictac[6]=='O'))||(tictac[4]=='O'&&tictac[8]=='O'))){
        return 10;
    }else if(((tictac[0]=='X'&&tictac[2]=='X')||(tictac[4]=='X'&&tictac[7]=='X'))||((tictac[0]=='O'&&tictac[2]=='O')||(tictac[4]=='O'&&tictac[7]=='O'))){
        return 11;
    }else if(((tictac[3]=='X'&&tictac[4]=='X')||(tictac[2]=='X'&&tictac[8]=='X'))||((tictac[3]=='O'&&tictac[4]=='O')||(tictac[2]=='O'&&tictac[8]=='O'))){
        return 15;
    }else if(((tictac[4]=='X'&&tictac[5]=='X')||(tictac[0]=='X'&&tictac[6]=='X'))||((tictac[4]=='O'&&tictac[5]=='O')||(tictac[0]=='O'&&tictac[6]=='O'))){
        return 13;
    }else if(((((tictac[3]=='X'&&tictac[5]=='X')||(tictac[1]=='X'&&tictac[7]=='X'))||(tictac[0]=='X'&&tictac[8]=='X'))||(tictac[2]=='X'&&tictac[6]=='X'))||((((tictac[3]=='O'&&tictac[5]=='O')||(tictac[1]=='O'&&tictac[7]=='O'))||(tictac[0]=='O'&&tictac[8]=='O'))||(tictac[2]=='O'&&tictac[6]=='O'))){
        return 14;
    }else if(((tictac[6]=='X'&&tictac[8]=='X')||(tictac[1]=='X'&&tictac[4]=='X'))||((tictac[6]=='O'&&tictac[8]=='O')||(tictac[1]=='O'&&tictac[4]=='O'))){
        return 17;
    }else if((((tictac[6]=='X'&&tictac[7]=='X')||(tictac[2]=='X'&&tictac[5]=='X'))||(tictac[0]=='X'&&tictac[4]=='X'))||(((tictac[6]=='O'&&tictac[7]=='O')||(tictac[2]=='O'&&tictac[5]=='O'))||(tictac[0]=='O'&&tictac[4]=='O'))){
        return 18;
    }else if((((tictac[7]=='X'&&tictac[8]=='X')||(tictac[0]=='X'&&tictac[3]=='X'))||(tictac[2]=='X'&&tictac[4]=='X'))||(((tictac[7]=='O'&&tictac[8]=='O')||(tictac[0]=='O'&&tictac[3]=='O'))||(tictac[2]=='O'&&tictac[4]=='O'))){
        return 16;
    }
    return 0;
}
