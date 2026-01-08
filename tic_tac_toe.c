#include <stdio.h>
int main(){
    printf("Use the following keys to input 'X' ,'O' at respective places: \n");
    int keys[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i = 0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            printf("| %d |",keys[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int n = 1;
    char a[3][3] = {{' ',' ',' '}, {' ',' ',' '}, {' ', ' ',' '}};
        for(int i = 0; i<3 ; i++){
            for(int j=0; j<3 ; j++){
                printf("| %c |",a[i][j]);
            }
            printf("\n");
        } 
    while (1>0){
        int count = 0;
        for(int i = 0; i<3 ; i++){
            for(int j=0; j<3 ; j++){
                if(a[i][j] != ' '){
                    count += 1;
                }
            }
            printf("\n");
        }
        if(count == 9){
            printf("Game Over! \n It's a draw");
            break;
        }
        printf("Turn %d\n",n);
        
        int choice;
        if(n%2==1){
            printf("Player 1's Turn (X)");
        }
        else{
            printf("Player 2's Turn (O)");
        }
        scanf("%d", &choice);
        if (n%2==1)
        {      
            if(choice == 1 && a[0][0] == ' '){
                a[0][0] = 'X';
            }
            else if(choice == 2 && a[0][1] == ' '){
                a[0][1] = 'X';
            }
            else if(choice == 3 && a[0][2] == ' '){
                a[0][2] = 'X';
            }
            else if(choice == 4 && a[1][0] == ' '){
                a[1][0] = 'X';
            }
            else if(choice == 5 && a[1][1] == ' '){
                a[1][1] = 'X';
            }
            else if(choice == 6 && a[1][2] == ' '){
                a[1][2] = 'X';
            }
            else if(choice == 7 && a[2][0] == ' '){
                a[2][0] = 'X';
            }
            else if(choice == 8 && a[2][1] == ' '){
                a[2][1] = 'X';
            }
            else if(choice == 9 && a[2][2] == ' '){
                a[2][2] = 'X';
            }  
            else if(choice >9 || choice < 1){
                printf("Please enter the number between 1 to 9\n");
                continue;
            }
            else {
                printf("That place is already marked, try another key\n");
                continue;
            }
        }
        else{
            if(choice == 1 && a[0][0] == ' '){
                a[0][0] = 'O';
            }
            else if(choice == 2 && a[0][1] == ' '){
                a[0][1] = 'O';
            }
            else if(choice == 3 && a[0][2] == ' '){
                a[0][2] = 'O';
            }
            else if(choice == 4 && a[1][0] == ' '){
                a[1][0] = 'O';
            }
            else if(choice == 5 && a[1][1] == ' '){
                a[1][1] = 'O';
            }
            else if(choice == 6 && a[1][2] == ' '){
                a[1][2] = 'O';
            }
            else if(choice == 7 && a[2][0] == ' '){
                a[2][0] = 'O';
            }
            else if(choice == 8 && a[2][1] == ' '){
                a[2][1] = 'O';
            }
            else if(choice == 9 && a[2][2] == ' '){
                a[2][2] = 'O';
            }  
            else if(choice >9 || choice < 1){
                printf("Please enter the number between 1 to 9\n");
                continue;
            }
            else {
                printf("That place is already marked, try another key\n");
                continue;
            }
        }
        for(int i = 0; i<3 ; i++){
            for(int j=0; j<3 ; j++){
                printf("| %c |",a[i][j]);
            }
            printf("\n");
        }
        if(a[0][0]=='O'){
            if(a[0][0]==a[0][1] && a[0][0]==a[0][2]){
                printf("Player 2 wins");
                break;
            }
            if(a[0][0]==a[1][0] && a[0][0]==a[2][0]){
                printf("Player 2 wins");
                break;
            }
            if(a[0][0]==a[1][1] && a[0][0]==a[2][2]){
                printf("Player 2 wins");
                break;
            }
        }
        if(a[1][1]=='O'){
            if(a[1][1]==a[0][1] && a[1][1]==a[2][1]){
                printf("Player 2 wins");
                break;
            }   
            if(a[1][1]==a[1][0] && a[1][1]==a[1][2]){
                printf("Player 2 wins");
                break;
            }   
            if(a[1][1]==a[2][0] && a[1][1]==a[0][2]){
                printf("Player 2 wins");
                break;
            }   
        }
        if(a[2][2]=='O'){
            if(a[2][2]==a[2][0] && a[2][2]==a[2][1]){
                printf("Player 2 wins");
                break;
            }   
            if(a[2][2]==a[0][2] && a[2][2]==a[1][2]){
                printf("Player 2 wins");
                break;
            }
        }
        if(a[0][0]=='X'){
            if(a[0][0]==a[0][1] && a[0][0]==a[0][2]){
                printf("Player 1 wins");
                break;
            }
            if(a[0][0]==a[1][0] && a[0][0]==a[2][0]){
                printf("Player 1 wins");
                break;
            }
            if(a[0][0]==a[1][1] && a[0][0]==a[2][2]){
                printf("Player 1 wins");
                break;
            }
        }
        if(a[1][1]=='X'){
            if(a[1][1]==a[0][1] && a[1][1]==a[2][1]){
                printf("Player 1 wins");
                break;
            }   
            if(a[1][1]==a[1][0] && a[1][1]==a[1][2]){
                printf("Player 1 wins");
                break;
            }   
            if(a[1][1]==a[2][0] && a[1][1]==a[0][2]){
                printf("Player 1 wins");
                break;
            }   
        }
        if(a[2][2]=='X'){
            if(a[2][2]==a[2][0] && a[2][2]==a[2][1]){
                printf("Player 2 wins");
                break;
            }   
            if(a[2][2]==a[0][2] && a[2][2]==a[1][2]){
                printf("Player 2 wins");
                break;
            }
        }
        n++;
    }
}
