#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float, char[]);
int main() {
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playername[20];
mainhome:
    printf("\t\t\t  << QUIZ GAME >>\n");
    printf("\n\t\t**\n");

    printf("\n\t\t\t      WELCOME\n ");
    printf("\n\t\t\t        to\n ");
    printf("\n\t\t\t    THE QUIZ GAME ");
    printf("\n\t\t");
    printf("\n\t\t**");
    printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
    printf("\n\t\t**");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t__\n\n");
    choice = toupper(getch());

    if (choice == 'V') {
        system("cls");
        show_record();
        system("cls");
        goto mainhome;
    } else if (choice == 'H') {
        system("cls");
        help();
        getch();
        system("cls");
        goto mainhome;
    } else if (choice == 'R') {
        system("cls");
        reset_score();
        getch();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);

        system("cls");
        printf("\n *********** Welcome %s to the Quiz Game *****************", playername);
        printf("\n\n Here are some tips you might want to know before playing:");
        printf("\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game: WARMUP ROUND & CHALLENGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give at least 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score up to 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B, C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y to start the game!\n");
        printf("\n Press any other key to return to the main menu!");

        if (toupper(getch()) == 'Y') {
            system("cls");
            goto home;
        } else {
            system("cls");
            goto mainhome;
        }

home:
        system("cls");
        count = 0;

        for (i = 1; i <= 3; i++) {
            r1 = i;
            switch (r1) {
                case 1:
                    printf("\n\nA collection of 8 bits is called?");
                    printf("\n\nA. Bit\t\tB. Word\n\nC. Byte\t\tD. Record");
                    if (toupper(getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        count++;
                        getch();
                        system("cls");
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. Byte");
                        getch();
                        system("cls");
                        break;
                    }
                case 2:
                    printf("\n\nWhich of the following is NOT a primary component of a computer?");
                    printf("\n\nA. CPU\t\tB. RAM\n\nC. Hard Disk\tD. Mouse");
                    if (toupper(getch()) == 'D') {
                        printf("\n\nCorrect!!!");
                        count++;
                        getch();
                        system("cls");
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is D. Mouse");
                        getch();
                        system("cls");
                        break;
                    }
                case 3:
                    printf("\n\nWhich of the following is NOT a programming language?");
                    printf("\n\nA. Python\tB. Java\n\nC. HTML\t\tD. C++");
                    if (toupper(getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        count++;
                        getch();
                        system("cls");
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. HTML");
                        getch();
                        system("cls");
                        break;
                    }
            }
        }

        if (count >= 2) {
            goto test;
        } else {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }

test:
        system("cls");
        printf("\n\n\t*** CONGRATULATIONS %s you are eligible to play the Game ***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        if (toupper(getch()) == 'P') {
            goto game;
        }

game:
        countr = 0;
        for (i = 1; i <= 10; i++) {
            system("cls");
            r = i;

            switch (r) {
                case 1:
                    printf("\n\nAll are examples of input devices except:");
                    printf("\n\nA. Scanner\tB. Mouse\n\nC. Printer\tD. Keyboard");
                    if (toupper(getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. Printer");
                        getch();
                        goto score;
                        break;
                    }

                case 2:
                    printf("\n\nWhat does RAM stand for?");
                    printf("\n\nA. Random Access Memory\tB. Read Access Memory\n\nC. Run Access Memory\tD. None of the above");
                    if (toupper(getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Random Access Memory");
                        getch();
                        goto score;
                        break;
                    }

                case 3:
                    printf("\n\nWhich language is primarily used for web development?");
                    printf("\n\nA. Python\tB. C\n\nC. JavaScript\tD. Java");
                    if (toupper(getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. JavaScript");
                        getch();
                        goto score;
                        break;
                    }

                case 4:
                    printf("\n\nWhat is the main function of the ALU?");
                    printf("\n\nA. Store data\tB. Perform arithmetic and logical operations\n\nC. Control computer operations\tD. Manage memory");
                    if (toupper(getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Perform arithmetic and logical operations");
                        getch();
                        goto score;
                        break;
                    }

                case 5:
                    printf("\n\nWhich of the following is an output device?");
                    printf("\n\nA. Monitor\tB. Keyboard\n\nC. Mouse\tD. Scanner");
                    if (toupper(getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Monitor");
                        getch();
                        goto score;
                        break;
                    }

                case 6:
                    printf("\n\nWhat is the extension for a C programming file?");
                    printf("\n\nA. .txt\t\tB. .c\n\nC. .cpp\t\tD. .java");
                    if (toupper(getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. .c");
                        getch();
                        goto score;
                        break;
                    }

                case 7:
                    printf("\n\nWhich of the following is a permanent storage device?");
                    printf("\n\nA. RAM\t\tB. Hard Disk\n\nC. Cache\t\tD. ROM");
                    if (toupper(getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Hard Disk");
                        getch();
                        goto score;
                        break;
                    }

                case 8:
                    printf("\n\nWhat is the main component of the computer's operating system?");
                    printf("\n\nA. Kernel\tB. Shell\n\nC. Application Software\tD. System Utilities");
                    if (toupper(getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Kernel");
                        getch();
                        goto score;
                        break;
                    }

                case 9:
                    printf("\n\nWhich of the following is used to connect to the internet?");
                    printf("\n\nA. Router\tB. Printer\n\nC. Keyboard\tD. Mouse");
                    if (toupper(getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Router");
                        getch();
                        goto score;
                        break;
                    }

                case 10:
                    printf("\n\nWhich of the following is NOT an operating system?");
                    printf("\n\nA. Windows\tB. Linux\n\nC. MacOS\tD. Oracle");
                    if (toupper(getch()) == 'D') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is D. Oracle");
                        getch();
                        goto score;
                        break;
                    }
            }
        }

score:
        system("cls");
        score = countr * 10;
        if (score >= 0 && score < 20) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 20 && score < 30) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 30 && score < 40) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 40 && score < 50) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 50 && score < 60) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 60 && score < 70) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 70 && score < 80) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 80 && score < 90) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score >= 90 && score < 100) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t You won $%0.2f", score);
            goto go;
        } else if (score == 100) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t\t\t\t YOU ARE A GENIUS !!!\n");
            printf("\n\t\t You won $%0.2f", score);
            printf("\n\t\t\t\t\t Thank You!!");
            goto go;
        } else {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t\t\t\t YOU WON $0.00\n");
            printf("\n\t\t\t\t\t Thank You!!");
            goto go;
        }

go:
        printf("\n\n\n Press Y if you want to play the next game");
        printf("\n Press any key if you want to go to the main menu");
        if (toupper(getch()) == 'Y') {
            goto mainhome;
        } else {
            edit_score(score, playername);
            goto mainhome;
        }
    }
}

void show_record() {
    char name[20];
    float scr;
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", name, &scr);
    printf("\n\n\t\t*");
    printf("\n\n\t\t %s has secured the Highest Score %0.2f", name, scr);
    printf("\n\n\t\t*");
    fclose(f);
    getch();
}

void reset_score() {
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "w");
    sc = 0;
    strcpy(nm, "Nobody");
    fprintf(f, "%s\n%.2f", nm, sc);
    fclose(f);
}

void help() {
    printf("\n\n\n\t This is a simple quiz game created using the C language.");
    printf("\n\n\n\t The game contains two rounds: the Warmup Round and the Challenge Round.");
    printf("\n\n\n\t In the Warmup Round, you need to answer at least 2 out of 3 questions correctly to proceed to the Challenge Round.");
    printf("\n\n\n\t In the Challenge Round, you will be asked 10 questions. Each correct answer is worth 10 points.");
    printf("\n\n\n\t There is no negative marking for wrong answers.");
    printf("\n\n\n\t Your final score will be calculated at the end of the game.");
    printf("\n\n\n\t Good luck!");
}

void edit_score(float score, char plnm[20]) {
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", nm, &sc);
    if (score >= sc) {
        sc = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", plnm, sc);
        fclose(f);
    }
}
