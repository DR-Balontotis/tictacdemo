#include <iostream>
// printmap(&tictac[0],&tictac[1],&tictac[2],&tictac[3],&tictac[4],&tictac[5],&tictac[6],&tictac[7],&tictac[8]);

void printmap(char *tictac0,char *tictac1,char *tictac2,char *tictac3,char *tictac4,char *tictac5,char *tictac6,char *tictac7,char *tictac8);
int takeinput(char *ticktack);
int winningcheck(char *ticctacc);

int main(){
    char tictac[9];
    for(int i=0;i<9;i++){
        tictac[i]=' ';
    }
    int fullboxes=0;
    while(winningcheck(*tictac)==1||tictac[0]==' '||tictac[1]==' '||tictac[2]==' '||tictac[3]==' '||tictac[4]==' '||tictac[5]==' '||tictac[6]==' '||tictac[7]==' '||tictac[8]==' '){
        printmap(tictac[0],tictac[1],tictac[2],tictac[3],tictac[4],tictac[5],tictac[6],tictac[7],tictac[8]);
        for(int i=0;i<9;i++){
            if(tictac[i]!=' '){
                fullboxes++;
            }
        }
    if(fullboxes%2==1){
            int box=takeinput(tictac);
            tictac[box-1]='O';
        }else{
            //AI
            }
        }
    }
}

void printmap(char *tictac0,char *tictac1,char *tictac2,char *tictac3,char *tictac4,char *tictac5,char *tictac6,char *tictac7,char *tictac8){
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(&tictac0)<<"  |  "<<(&tictac1)<<"  |  "<<(&tictac2)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(&tictac3)<<"  |  "<<(&tictac4)<<"  |  "<<(&tictac5)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"|  "<<(&tictac6)<<"  |  "<<(&tictac7)<<"  |  "<<(&tictac8)<<"  |"<<std::endl;
    std::cout<<"|     |     |     |"<<std::endl;
    std::cout<<"+-----+-----+-----+"<<std::endl;
}
int takeinput(char *ticktack){
    while(1){
    int input;
    std::cin>>input;
    if(input<10&&input>0){
        break;
    }
    }
    return input;
}
int winningcheck(char *ticctacc){
        if((&ticctacc[0])=='O'&&(&ticctacc[1])=='O'&&(&ticctacc[2]=='O')){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[3])=='O'&&(&ticctacc[4]=='O')&&(&ticctacc[5]=='O')){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[6])=='O'&&(&ticctacc[7])=='O'&&(&ticctacc[8])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[0])=='O'&&(&ticctacc[3])=='O'&&(&ticctacc[6])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[1])=='O'&&(&ticctacc[4])=='O'&&(&ticctacc[7])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[2])=='O'&&(&ticctacc[5])=='O'&&(&ticctacc[8])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[0])=='O'&&(&ticctacc[4])=='O'&&(&ticctacc[8])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[2])=='O'&&(&ticctacc[4])=='O'&&(&ticctacc[6])=='O'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Player wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[0])=='X'&&(&ticctacc[1])=='X'&&(&ticctacc[2]=='X')){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[3])=='X'&&(&ticctacc[4]=='X')&&(&ticctacc[5]=='X')){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[6])=='X'&&(&ticctacc[7])=='X'&&(&ticctacc[8])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[0])=='X'&&(&ticctacc[3])=='X'&&(&ticctacc[6])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[1])=='X'&&(&ticctacc[4])=='X'&&(&ticctacc[7])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[2])=='X'&&(&ticctacc[5])=='X'&&(&ticctacc[8])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[0])=='X'&&(&ticctacc[4])=='X'&&(&ticctacc[8])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }else if((&ticctacc[2])=='X'&&(&ticctacc[4])=='X'&&(&ticctacc[6])=='X'){
            printmap(ticctacc[0],ticctacc[1],ticctacc[2],ticctacc[3],ticctacc[4],ticctacc[5],ticctacc[6],ticctacc[7],ticctacc[8]);
            std::cout<<"Computer wins!!!"<<std::endl;
            return 0;
        }
        return 1;
    }
