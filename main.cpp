//
//  main.cpp
//  tictac
//
//  Created by Mani Kireeti on 05/04/20.
//  Copyright © 2020 Mani Kireeti. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int A[4][4];
void game();
void game2();


void display(){
    system("clear");
    for(int i=1;i<4;i++){
        cout<<"-------------"<<endl;
        cout<<"|";
        for(int j=1;j<4;j++){
            if(A[i][j]>0){
                cout<<" O |";
            }
            else if(A[i][j]<0){
                cout<<" X |";
            }
            else{
                cout<<"   |";
            }
        }
        cout<<endl;
    }
    cout<<"-------------"<<endl;
}

int check(char b){
    int sum=0;
    for(int i=1;i<4;i++){
        sum=0;
        for(int j=1;j<4;j++){
            sum=sum+A[i][j];
        }
        if(sum==3 || sum==-3){
            if(sum==3){
                if(b=='x' || b=='X'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 2 won the Game"<<endl;
                }
                if(b=='o' || b=='O'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 1 won the Game"<<endl;
                }
                cout<<"Want to play another game:Y or N"<<endl;
                char p;
                cin>>p;
                if(p=='Y' ||p=='y'){
                    return 1;
                }
                if(p=='n' || p=='N'){
                    return 2;
                }
            }
            if(sum==-3){
                if(b=='x' || b=='X'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 1 won the Game"<<endl;
                }
                if(b=='o' || b=='O'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 2 won the Game"<<endl;
                }
                cout<<"Want to play another game:Y or N"<<endl;
                char p;
                cin>>p;
                if(p=='Y' ||p=='y'){
                    return 1;
                }
                if(p=='n' || p=='N'){
                    return 2;
                }
            }
        }
    }
    
    int sum1=0;
    for(int i=1;i<4;i++){
        sum1=0;
        for(int j=1;j<4;j++){
            sum1=sum1+A[j][i];
        }
        if(sum1==3 || sum1==-3){
            if(sum1==3){
                if(b=='x' || b=='X'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 2 won the Game"<<endl;
                }
                if(b=='o' || b=='O'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 1 won the Game"<<endl;
                }
                cout<<"Want to play another game:Y or N"<<endl;
                char p;
                cin>>p;
                if(p=='Y' ||p=='y'){
                   return 1;
                }
                if(p=='n' || p=='N'){
                    return 2;
                }
            }
            if(sum1==-3){
                if(b=='x' || b=='X'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 1 won the Game"<<endl;
                }
                if(b=='o' || b=='O'){
                    cout<<"CONGRATULATIONS"<<endl;
                    cout<<"Player 2 won the Game"<<endl;
                }
                cout<<"Want to play another game:Y or N"<<endl;
                char p;
                cin>>p;
                if(p=='Y' ||p=='y'){
                   return 1;
                }
                if(p=='n' || p=='N'){
                    return 2;
                }
            }
        }
    }
    
    int count1=1,sum2=0;
    for(int i=1;i<4;i++){
        sum2=sum2+A[i][count1];
        count1++;
    }
    if(sum2==3 || sum2==-3){
                   if(sum2==3){
                       if(b=='x' || b=='X'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 2 won the Game"<<endl;
                       }
                       if(b=='o' || b=='O'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 1 won the Game"<<endl;
                       }
                       cout<<"Want to play another game:Y or N"<<endl;
                       char p;
                       cin>>p;
                       if(p=='Y' ||p=='y'){
                           return 1;
                       }
                       if(p=='n' || p=='N'){
                           return 2;
                       }
                   }
                   if(sum2==-3){
                       if(b=='x' || b=='X'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 1 won the Game"<<endl;
                       }
                       if(b=='o' || b=='O'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 2 won the Game"<<endl;
                       }
                       cout<<"Want to play another game:Y or N"<<endl;
                       char p;
                       cin>>p;
                       if(p=='Y' ||p=='y'){
                           return 1;
                       }
                       if(p=='n' || p=='N'){
                           return 2;
                       }
                   }
    }
    
    int count3=3,sum3=0;
    for(int i=1;i<4;i++){
        sum3=sum3+A[i][count3];
        count3--;
    }
    if(sum3==3 || sum3==-3){
                   if(sum3==3){
                       if(b=='x' || b=='X'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 2 won the Game"<<endl;
                       }
                       if(b=='o' || b=='O'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 1 won the Game"<<endl;
                       }
                       cout<<"Want to play another game:Y or N"<<endl;
                       char p;
                       cin>>p;
                       if(p=='Y' ||p=='y'){
                           return 1;
                       }
                       if(p=='n' || p=='N'){
                           return 2;
                       }
                   }
                   if(sum3==-3){
                       if(b=='x' || b=='X'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 1 won the Game"<<endl;
                       }
                       if(b=='o' || b=='O'){
                           cout<<"CONGRATULATIONS"<<endl;
                           cout<<"Player 2 won the Game"<<endl;
                       }
                       cout<<"Want to play another game:Y or N"<<endl;
                       char p;
                       cin>>p;
                       if(p=='Y' ||p=='y'){
                           return 1;
                       }
                       if(p=='n' || p=='N'){
                           return 2;
                       }
                   }
    }
    return 0;
}

void game(){
    
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            A[i][j]=0;
        }
    }
    display();
    cout<<"What does player1 want: X or O"<<endl;
    char b;
    cin>>b;
    int count=0;
    if(b=='x' ||b=='X' || b=='o' ||b=='O'){
        while(true){
            
            if(count%2==0){
                cout<<"Enter the coordinates of player1"<<endl;
                int a,d;
                cin>>a>>d;
                if(a<=0 || a>=4 || d<=0 || d>=4){
                    cout<<"Invalid input"<<endl;
                    continue;
                }
                else{
                    if(b=='X' || b=='x') {
                        if(A[a][d]==0){
                            A[a][d]=-1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    if(b=='O' || b=='o'){
                        if(A[a][d]==0){
                            A[a][d]=1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    display();
                    count++;
                }
            }
            int a=check(b);
            if(a==1){
                cout<<"M:2 Players or C:To play with computer"<<endl;
                char w;
                cin>>w;
                if(w=='M' || w=='m'){
                    game();
                }
                if(w=='C' || w=='c'){
                    game2();
                }
            }
            if(a==2){break;}
            
            if(count%2==1){
                cout<<"Enter the coordinates of player2"<<endl;
                int a,d;
                cin>>a>>d;
                if(a<=0 || a>=4 || d<=0 || d>=4){
                    cout<<"Invalid input"<<endl;
                    continue;
                }
                else{
                    if(b=='X' || b=='x') {
                        if(A[a][d]==0){
                            A[a][d]=1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    if(b=='O' || b=='o') {
                        if(A[a][d]==0){
                            A[a][d]=-1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    display();
                    count++;
                }
                
            }
            
            int g=check(b);
            if(g==1){
                cout<<"M:2 Players or C:To play with computer"<<endl;
                char w;
                cin>>w;
                if(w=='M' || w=='m'){
                    game();
                }
                if(w=='C' || w=='c'){
                    game2();
                }
            }
            if(g==2){break;}
            
        }
    }
    else{
        cout<<"Invalid input"<<endl;
        game();
    }
}


void game2(){
    
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            A[i][j]=0;
        }
    }
    display();
    cout<<"What does You want: X or O"<<endl;
    char b;
    cin>>b;
    int count=0;
    if(b=='x' ||b=='X' || b=='o' ||b=='O'){
        while(true){
            
            if(count%2==0){
                cout<<"Enter the coordinates"<<endl;
                int a,d;
                cin>>a>>d;
                if(a<=0 || a>=4 || d<=0 || d>=4){
                    cout<<"Invalid input"<<endl;
                    continue;
                }
                else{
                    if(b=='X' || b=='x') {
                        if(A[a][d]==0){
                            A[a][d]=-1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    if(b=='O' || b=='o'){
                        if(A[a][d]==0){
                            A[a][d]=1;
                        }
                        else{
                            cout<<"Invalid Move"<<endl;
                            continue;
                        }
                    }
                    display();
                    count++;
                }
            }
            int a=check(b);
            if(a==1){
                cout<<"M:2 Players or C:To play with computer"<<endl;
                char w;
                cin>>w;
                if(w=='M' || w=='m'){
                    game();
                }
                if(w=='C' || w=='c'){
                    game2();
                }
            }
            if(a==2){break;}
            
            if(count%2==1){
                int a,d;
                while(true){
                    a=rand()%3 + 1;
                    d=rand()%3 + 1;
                    if(A[a][d]==0) break;
                    else continue;
                }
                    if(b=='X' || b=='x') {
                            A[a][d]=1;
                    }
                    if(b=='O' || b=='o') {
                            A[a][d]=-1;
                    }
                    display();
                    count++;
            }
            
            int g=check(b);
            if(g==1){
                cout<<"M:2 Players or C:To play with computer"<<endl;
                char w;
                cin>>w;
                if(w=='M' || w=='m'){
                    game();
                }
                if(w=='C' || w=='c'){
                    game2();
                }}
            if(g==2){break;}
            
        }
    }
    else{
        cout<<"Invalid input"<<endl;
        game2();
    }
}


int main() {
    system("clear");
    srand( static_cast<unsigned int>(time(nullptr)));
    cout<<"WELCOME TO THE TIC TAC GAME"<<endl;
    cout<<"press P to play the game or Q to quit the game"<<endl;
    char a;
    cin>>a;
    if(a=='P' || a=='p'){
        cout<<"M:2 Players or C:To play with computer"<<endl;
        char w;
        cin>>w;
        if(w=='M' || w=='m'){
            game();
        }
        if(w=='C' || w=='c'){
            game2();
        }
    }
    else{
        return 0;
    }
}
