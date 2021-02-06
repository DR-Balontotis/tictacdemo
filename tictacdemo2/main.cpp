#include <iostream>
#include <cstdlib>

void printmap(char *ticktack0,char *ticktack1,char *ticktack2,char *ticktack3,char *ticktack4,char *ticktack5,char *ticktack6,char *ticktack7,char *ticktack8);
int winningcheck(char *ticctacc0,char *ticctacc1,char *ticctacc2,char *ticctacc3,char *ticctacc4,char *ticctacc5,char *ticctacc6,char *ticctacc7,char *ticctacc8);
int takeinput(char *thickthack0,char *thickthack1,char *thickthack2,char *thickthack3,char *thickthack4,char *thickthack5,char *thickthack6,char *thickthack7,char *thickthack8);
int closewinningcheck(char *thiccthacc0,char *thiccthacc1,char *thiccthacc2,char *thiccthacc3,char *thiccthacc4,char *thiccthacc5,char *thiccthacc6,char *thiccthacc7,char *thiccthacc8);

int main()
{
    char tictac[9];
    for(int i=0;i<9;i++){
        tictac[i]=' ';
    }
    int fullboxes=0;
    while(fullboxes<9&&winningcheck(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8])==1){
        if(fullboxes%2==1){
            int playerbox=takeinput(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8]);
            tictac[playerbox-1]='O';
        }else{
            switch(closewinningcheck(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8])){
            case 0:
                int randomnumber;
                while(1){
                    randomnumber=std::rand()%9;
                    if(tictac[randomnumber]==' '){
                        break;
                    }
                }
                tictac[randomnumber]='X';
            case 10:
                tictac[0]='X';
            case 11:
                tictac[1]='X';
            case 12:
                tictac[2]='X';
            case 13:
                tictac[3]='X';
            case 14:
                tictac[4]='X';
            case 15:
                tictac[5]='X';
            case 16:
                tictac[6]='X';
            case 17:
                tictac[7]='X';
            case 18:
                tictac[8]='X';
            case 19:
                tictac[9]='X';
            default:
                std::cout<<"Error. Please restart the program."<<std::endl;
                return 0;
            }
        }
    }
    if(winningcheck(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8])==0){
        return 0;
    }else{
        std::cout<<"Nobody wins! :)"<<std::endl;
    }
}
void printmap(int *ticktack0,int *ticktack1,int *ticktack2,int *ticktack3,int *ticktack4,int *ticktack5,int *ticktack6,int *ticktack7,int *ticktack8){
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*ticktack0)<<"  |  "<<(*ticktack1)<<"  |  "<<(*ticktack2)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*ticktack3)<<"  |  "<<(*ticktack4)<<"  |  "<<(*ticktack5)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(*ticktack6)<<"  |  "<<(*ticktack7)<<"  |  "<<(*ticktack8)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
}
int winningcheck(int *ticctacc0,int *ticctacc1,int *ticctacc2,int *ticctacc3,int *ticctacc4,int *ticctacc5,int *ticctacc6,int *ticctacc7,int *ticctacc8){
    if((*ticctacc0)=='O'&&(*ticctacc1)=='O'&&(*ticctacc2=='O')){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc3)=='O'&&(*ticctacc4=='O')&&(*ticctacc5=='O')){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc6)=='O'&&(*ticctacc7)=='O'&&(*ticctacc8)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc0)=='O'&&(*ticctacc3)=='O'&&(*ticctacc6)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc1)=='O'&&(*ticctacc4)=='O'&&(*ticctacc7)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc2)=='O'&&(*ticctacc5)=='O'&&(*ticctacc8)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc0)=='O'&&(*ticctacc4)=='O'&&(*ticctacc8)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc2)=='O'&&(*ticctacc4)=='O'&&(*ticctacc6)=='O'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc0)=='X'&&(*ticctacc1)=='X'&&(*ticctacc2=='X')){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc3)=='X'&&(*ticctacc4=='X')&&(*ticctacc5=='X')){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc6)=='X'&&(*ticctacc7)=='X'&&(*ticctacc8)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc0)=='X'&&(*ticctacc3)=='X'&&(*ticctacc6)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc1)=='X'&&(*ticctacc4)=='X'&&(*ticctacc7)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc2)=='X'&&(*ticctacc5)=='X'&&(*ticctacc8)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc0)=='X'&&(*ticctacc4)=='X'&&(*ticctacc8)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((*ticctacc2)=='X'&&(*ticctacc4)=='X'&&(*ticctacc6)=='X'){
            printmap(ticctacc0,ticctacc1,ticctacc2,ticctacc3,ticctacc4,ticctacc5,ticctacc6,ticctacc7,ticctacc8);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }
        return 1;
}
int takeinput(int *thickthack0,int *thickthack1,int *thickthack2,int *thickthack3,int *thickthack4,int *thickthack5,int *thickthack6,int *thickthack7,int *thickthack8){
    int input;
    char thickthack[9];
    thickthack[0]=*thickthack0;
    thickthack[1]=*thickthack1;
    thickthack[2]=*thickthack2;
    thickthack[3]=*thickthack3;
    thickthack[4]=*thickthack4;
    thickthack[5]=*thickthack5;
    thickthack[6]=*thickthack6;
    thickthack[7]=*thickthack7;
    thickthack[8]=*thickthack8;
    while(1){
        std::cin>>input;
        if(input>0&&input<10){
            if(thickthack[input-1]==' '){
                break;
            }else{
                std::cout<<"Please choose an empty box."<<std::endl;
            }
        }else{
            std::cout<<"Please choose a valid box."<<std::endl;
        }
    }
    return input;
}
int closewinningcheck(int *thiccthacc0,int *thiccthacc1,int *thiccthacc2,int *thiccthacc3,int *thiccthacc4,int *thiccthacc5,int *thiccthacc6,int *thiccthacc7,int *thiccthacc8){
    //will be updated with a better algorithm
    if((((*thiccthacc0=='X'&&*thiccthacc1=='X')||(*thiccthacc5=='X'&&*thiccthacc8=='X'))||(*thiccthacc4=='X'&&*thiccthacc6=='X'))||(((*thiccthacc0=='O'&&*thiccthacc1=='O')||(*thiccthacc5=='O'&&*thiccthacc8=='O'))||(*thiccthacc4=='X'&&*thiccthacc6=='X'))){
        return 12;
    }else if((((*thiccthacc1=='X'&&*thiccthacc2=='X')||(*thiccthacc3=='X'&&*thiccthacc6=='X'))||(*thiccthacc4=='X'&&*thiccthacc8=='X'))||(((*thiccthacc1=='O'&&*thiccthacc2=='O')||(*thiccthacc3=='O'&&*thiccthacc6=='O'))||(*thiccthacc4=='O'&&*thiccthacc8=='O'))){
        return 10;
    }else if(((*thiccthacc0=='X'&&*thiccthacc2=='X')||(*thiccthacc4=='X'&&*thiccthacc7=='X'))||((*thiccthacc0=='O'&&*thiccthacc2=='O')||(*thiccthacc4=='O'&&*thiccthacc7=='O'))){
        return 11;
    }else if(((*thiccthacc3=='X'&&*thiccthacc4=='X')||(*thiccthacc2=='X'&&*thiccthacc8=='X'))||((*thiccthacc3=='O'&&*thiccthacc4=='O')||(*thiccthacc2=='O'&&*thiccthacc8=='O'))){
        return 15;
    }else if(((*thiccthacc4=='X'&&*thiccthacc5=='X')||(*thiccthacc0=='X'&&*thiccthacc6=='X'))||((*thiccthacc4=='O'&&*thiccthacc5=='O')||(*thiccthacc0=='O'&&*thiccthacc6=='O'))){
        return 13;
    }else if(((((*thiccthacc3=='X'&&*thiccthacc5=='X')||(*thiccthacc1=='X'&&*thiccthacc7=='X'))||(*thiccthacc0=='X'&&*thiccthacc8=='X'))||(*thiccthacc2=='X'&&*thiccthacc6=='X'))||((((*thiccthacc3=='O'&&*thiccthacc5=='O')||(*thiccthacc1=='O'&&*thiccthacc7=='O'))||(*thiccthacc0=='O'&&*thiccthacc8=='O'))||(*thiccthacc2=='O'&&*thiccthacc6=='O'))){
        return 14;
    }else if(((*thiccthacc6=='X'&&*thiccthacc8=='X')||(*thiccthacc1=='X'&&*thiccthacc4=='X'))||((*thiccthacc6=='O'&&*thiccthacc8=='O')||(*thiccthacc1=='O'&&*thiccthacc4=='O'))){
        return 17;
    }else if((((*thiccthacc6=='X'&&*thiccthacc7=='X')||(*thiccthacc2=='X'&&*thiccthacc5=='X'))||(*thiccthacc0=='X'&&*thiccthacc4=='X'))||(((*thiccthacc6=='O'&&*thiccthacc7=='O')||(*thiccthacc2=='O'&&*thiccthacc5=='O'))||(*thiccthacc0=='O'&&*thiccthacc4=='O'))){
        return 18;
    }else if((((*thiccthacc7=='X'&&*thiccthacc8=='X')||(*thiccthacc0=='X'&&*thiccthacc3=='X'))||(*thiccthacc2=='X'&&*thiccthacc4=='X'))||(((*thiccthacc7=='O'&&*thiccthacc8=='O')||(*thiccthacc0=='O'&&*thiccthacc3=='O'))||(*thiccthacc2=='O'&&*thiccthacc4=='O'))){
        return 16;
    }
    return 0;
}
