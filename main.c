#include<stdio.h>
void initialize(char arr[3][3]);
void malnupulation(char arr[3][3],char ch,int position);
void charector_put(char arr[3][3],char ch,int position);
int condition_check(char arr[3][3]);
void print(char arr[3][3]);
int main(){
    char arr[3][3];
    int temp=0;
    initialize(arr); // initialize the charector array value
    int position=0;
    for(int i=0;i<9;i++){
    if(i>4){
    temp=condition_check(arr);}
    if(temp==1){
    printf("\nPLAYER 1 WINFS");
    break;
    }
    else if(temp==2){
    printf("\nPLAYER 2 WINFS");
    break;   
    }
    if(i%2==0){
    printf("\nplayer 1 : Enter a position to put x : ");
    scanf("%d",&position);
    malnupulation(arr,'x',position);
    }
    else{
    printf("\nplayer 2 : Enter a position to put 0 : ");
    scanf("%d",&position);
    malnupulation(arr,'o',position);
    }}     // print the char arr
}
void initialize(char arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]='-';
        }
    }
}
void malnupulation(char arr[3][3],char ch,int position){
    charector_put(arr,ch,position);
    print(arr);
}
void charector_put(char arr[3][3],char ch,int position){
    switch(position){
        case 1:
            arr[0][0]=ch;
            break;
        case 2:
            arr[0][1]=ch;
            break;
        case 3:
            arr[0][2]=ch;
            break;
        case 4:
            arr[1][0]=ch;
            break;
        case 5:
            arr[1][1]=ch;
            break;
        case 6:
            arr[1][2]=ch;
            break;
        case 7:
            arr[2][0]=ch;
            break;
        case 8:
            arr[2][1]=ch;
            break;
        case 9:
            arr[2][2]=ch;
            break;
    }
}
int condition_check(char arr[3][3]){
    int num=0;
    int x1=0,o1=0,x2=0,o2=0,x3=0,o3=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(i==j){
          if(arr[i][j]=='x')
          x1++;
          else if(arr[i][j]=='o')
          o1++;
        }
        if(arr[i][j]=='x')
        x2++;
        else if(arr[i][j]=='o')
        o2++;
        if(arr[j][i]=='x')
        x3++;
        else if(arr[j][i]=='o')
        o3++;
        }
        if(x2==3 || x3==3 || x1==3)
        return 1;
        else if(o2==3 || o3==3 || o1==3)
        return 2;
        x2=0,o2=0,x3=0,o3==0;
    }
    return 0;
}
void print(char arr[3][3]){
    //system("cls");
    printf("\n  -------------");
    printf("\n  | %c | %c | %c |",arr[0][0],arr[0][1],arr[0][2]);
    printf("\n  -------------");
    printf("\n  | %c | %c | %c |",arr[1][0],arr[1][1],arr[1][2]);
    printf("\n  -------------");
    printf("\n  | %c | %c | %c |",arr[2][0],arr[2][1],arr[2][2]);
    printf("\n  -------------");
}