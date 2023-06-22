//prompt user for a name
//search through array for student particular

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char studentParticulars[5][3][100];
    char studentName[100];

    // Populate the array of student particulars
    strcpy(studentParticulars[0][0], "John");
    strcpy(studentParticulars[0][1], "20");
    strcpy(studentParticulars[0][2], "3.5");

    strcpy(studentParticulars[1][0], "Jane");
    strcpy(studentParticulars[1][1], "22");
    strcpy(studentParticulars[1][2], "3.8");

    strcpy(studentParticulars[2][0], "Bob");
    strcpy(studentParticulars[2][1], "19");
    strcpy(studentParticulars[2][2], "3.2");

    strcpy(studentParticulars[3][0], "Alice");
    strcpy(studentParticulars[3][1], "21");
    strcpy(studentParticulars[3][2], "3.6");

    strcpy(studentParticulars[4][0], "Tom");
    strcpy(studentParticulars[4][1], "18");
    strcpy(studentParticulars[4][2], "3.0");

    

        printf("\nEnter name of student:");
        scanf("%s",studentName);
        //printf("%s",studentName);

        for (int i = 0; i < 5; i++){
            //printf("\n%s:%d\n",i,studentParticulars[i]);
            int j;
            for (j = 0; j < 5; j++){
                if (studentName[j]=='\0'&&studentParticulars[i][0][j]=='\0'){
                    break;
                } else if (studentName[j]==studentParticulars[i][0][j]){
                    continue;
                } else {
                    break;
                }
                
            }
            if (studentName[j]=='\0'&&studentParticulars[i][0][j]=='\0'){
                printf("\n");
                printf("Age is %s; GPA is %s",studentParticulars[i][1],studentParticulars[i][2]);
                break;
            }
        }
        printf("\nENTER ANY KEY TO CLEAR SCREEN");
        getch();
        system("cls");
    
    
}