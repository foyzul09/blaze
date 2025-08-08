#include<stdio.h>


int main () {

char arr1[5][5];

char arr2[5][5];

int i,j;

for(i=0;i<5;i++) {

    for(j=0;j<5;j++) {

        arr1[i][j]= '_';
        arr2[i][j]= '*';
    }


}


for(i=0;i<5;i++) {

    for(j=0;j<5;j++) {

        printf("%c ",arr1[i][j]);
    }
    printf("\n");
}

arr2[0][4]='!';
arr2[2][3]='!';
arr2[3][4]='!';
arr2[1][3]='!';
arr2[3][2]='!';
arr2[4][4]='!';
arr2[0][0]='2';
arr2[0][1]='1';
arr2[0][2]='5';
arr2[0][3]='1';
arr2[1][0]='3';
arr2[1][1]='4';
arr2[1][2]='2';
arr2[1][4]='4';
arr2[2][0]='1';
arr2[2][1]='0';
arr2[2][2]='3';
arr2[2][4]='1';
arr2[3][0]='3';
arr2[3][1]='4';
arr2[3][3]='1';
arr2[4][0]='0';
arr2[4][1]='3';
arr2[4][2]='6';
arr2[4][3]='1';




int game_over=0;

int reveal=0;

int safe = 5*5 -6;

while(!game_over) {

    int r,c;

    printf("Enter a cell to reveal:(row and col):");
    scanf("%d %d",&r,&c);

    if(arr1[r][c]!='_') {

        printf("Already revealed!\n");
        printf("Type again\n");
        continue;
    }

    if(arr2[r][c]=='!') {
         char ch;
        printf("Boom Boom! Game over!\n");
        printf("Want to try again?(y/n)\n");


        printf("Enter:");
        scanf(" %c",&ch);

        if(ch=='Y'||ch=='y') {

            continue;
        }
         else if(ch=='N'||ch=='n') {
        game_over=1;
        break;
         }
    }

    arr1[r][c]=arr2[r][c];
    reveal++;

    printf("New board:\n");

    for(i=0;i<5;i++) {

        for(j=0;j<5;j++) {

            printf("%c ",arr1[i][j]);
        }

        printf("\n");
    }


 if(reveal==safe) {

    printf("Congratulations!You have won!\n");

    game_over=1;
 }

}
   return 0;
}
