#include<windows.h>
#include"mmsystem.h"
#include <stdio.h>
#include <conio.h>
#include<time.h>
#include<unistd.h>
#include <pthread.h>
void * pthread_func2(void * data_ptr);
void * pthread_func3(void * data_ptr);
void * pthread_func4(void * data_ptr);
void start();
void gotoxy(int xpos, int ypos);
int beenattacked,beensweared,yourlove,givefood,defeat,praise;	
int lose=0;
int isFinish =0;
int punchh=0;
int kisss=0;
int swearr=0;
int greatt=0;
void loading();
void c15();
void delay(unsigned int mseconds) {	//���� 
	clock_t goal = mseconds + clock();
	while (goal > clock());	//false �|���� 
}
void clear(int x,int y) {	//�M���H�����ͪ����⪺���� 
	gotoxy(x,y);
	printf("                                                        \n");
	gotoxy(x,y+1);
	printf("                                                        \n");
	gotoxy(x,y+2);
	printf("                                                        \n");
	gotoxy(x,y+3);
	printf("                                                        \n");
	gotoxy(x,y+4);
	printf("                                                        \n");
	gotoxy(x,y+5);
	printf("                                                        \n");
	gotoxy(x,y+6);
	printf("                                                        \n");
	gotoxy(x,y+7);
	printf("                                                        \n");
	gotoxy(x,y+8);
	printf("                                                        \n");
	gotoxy(x,y+9);
	printf("                                                        \n");
	gotoxy(x,y+10);
	printf("                                                        \n");
	gotoxy(x,y+11);            
	printf("                                                        \n");
	gotoxy(x,y+12); 
	printf("                                                        \n");
	gotoxy(x,y+13);
	printf("                                                        \n");
	gotoxy(x,y+14);
	printf("                                                        \n");
	gotoxy(x,y+15);
	printf("                                                        \n");
	gotoxy(x,y+16);
	printf("                                                        \n");
	gotoxy(x,y+17);
	printf("                                                        \n");
	gotoxy(x,y+18);
           
}
void clear_word(int x,int y){	//�M�����ܦr 
	gotoxy(x,y);
	printf("                                                           \n");
	gotoxy(x,y+1);
	printf("                                                           \n");
}
void gotoxy(int xpos, int ypos) {
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos;
	scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}
void prize(int x,int y){
				gotoxy(x,y);
				printf("      @@              @@ ");gotoxy(x,y+1);
				printf("      @ @            @ @ ");gotoxy(x,y+2);
				printf("      @  @          @  @ ");gotoxy(x,y+3);
				printf("     @   @          @   @ ");gotoxy(x,y+4);
				printf("      @   @        @   @");gotoxy(x,y+5);
				printf("      @   @        @   @");gotoxy(x,y+6);
				printf("      @@  @@@@@@@@@@  @@                     ");gotoxy(x,y+7);
				printf("     @            _____ @                     ");gotoxy(x,y+8);
				printf("    @          __|     | @           ����          ");gotoxy(x,y+9);
				printf("   @          /  |_____|  @         ������                       ");gotoxy(x,y+10);
				printf("    @                    @           ����                 ");gotoxy(x,y+11);
				printf("     @                  @             | |                 ");gotoxy(x,y+12);
				printf("      @                @             _|_|_                     ");gotoxy(x,y+13);
				printf("     @                 @            |     |              ");gotoxy(x,y+14);
				printf("    @                  @            |_____|        ");gotoxy(x,y+15);
				printf("   @                   @                         ");gotoxy(x,y+16);
				printf("  @                    @                          ");gotoxy(x,y+17);
				printf(" @                     @                            ");gotoxy(x,y+18);
} 
void losechance(int x,int y){
	gotoxy(x,y);
				printf("      @@              @@                 ���|�]���F ����");gotoxy(x,y+1);
				printf("      @ @            @ @                                   ");gotoxy(x,y+2);
				printf("      @  @          @  @                   @@        @@   ");gotoxy(x,y+3);
				printf("     @   @          @   @                  @@        @@    ");gotoxy(x,y+4);
				printf("      @   @        @   @                   @@@      @@@     ");gotoxy(x,y+5);
				printf("      @   @        @   @                   @@@ @@@@ @@@       ");gotoxy(x,y+6);
				printf("      @@  @@@@@@@@@@  @@                  @@@@@@@@@@@@@@    ");gotoxy(x,y+7);
				printf("     @ _____      _____ @                @@@@@@@@@@@@@@@@          ");gotoxy(x,y+8);
				printf("    @   | |        | |   @                @@@@@@@@@@@@@@            ");gotoxy(x,y+9);
				printf("   @    | |        | |    @                @@@@@@@@@@@@       ");gotoxy(x,y+10);
				printf("    @   | |        | |   @                @@@@@@@@@@@@@@@    ");gotoxy(x,y+11);
				printf("     @     _________    @                @@  @@@@@@@@@  @@  ");gotoxy(x,y+12);
				printf("      @                @                  @@ @@@@@@@@@   @@@@");gotoxy(x,y+13);
				printf("     @                  @                    @@@@@@@@@      ");gotoxy(x,y+14);
				printf("    @                    @         ------   @@@@@@@@@@@@     ");gotoxy(x,y+15);
				printf("   @                      @     ------     @@          @@     ");gotoxy(x,y+16);
				printf("  @                        @       ------ @@           @@   ");gotoxy(x,y+17);
				printf(" @                          @            @@            @@        ");gotoxy(x,y+18);
}
void evil(int x,int y){
	gotoxy(x,y);
				printf("                            @@              @@ ");gotoxy(x,y+1);
				printf("                            @ @            @ @ ");gotoxy(x,y+2);
				printf("                            @  @          @  @ ");gotoxy(x,y+3);
				printf("                           @   @          @   @ ");gotoxy(x,y+4);
				printf("                            @   @        @   @");gotoxy(x,y+5);
				printf("                            @   @        @   @");gotoxy(x,y+6);
				printf("                            @@  @@@@@@@@@@  @@                     ");gotoxy(x,y+7);
				printf("                           @                  @                     ");gotoxy(x,y+8);
				printf("                          @           @@@@     @                   ");gotoxy(x,y+9);
				printf("                         @              _________                              ");gotoxy(x,y+10);
				printf("                          @              |  |  |                          ");gotoxy(x,y+11);
				printf("                           @             |  |  |                              ");gotoxy(x,y+12);
				printf("       �A�Q�����F:)         @           \\_____/                                  ");gotoxy(x,y+13);
				printf("                           @                 @     _                  ");gotoxy(x,y+14);
				printf("                  ________@      \\_______________| |                      ");gotoxy(x,y+15);
				printf("                 /_______@        /_______________| |---|                            ");gotoxy(x,y+16);
				printf("                 \\_____@        \\_______________| |---|                               ");gotoxy(x,y+17);
				printf("                       @          /          @    |_|                             ");gotoxy(x,y+18);
}
void steal(int x,int y){
	gotoxy(x,y);
				printf("      @@              @@                             ");gotoxy(x,y+1);
				printf("      @ @            @ @              ����~�Q�m���F     ");gotoxy(x,y+2);
				printf("      @  @          @  @                                  ");gotoxy(x,y+3);
				printf("     @   @          @   @          @@       @@ @@        @@   ");gotoxy(x,y+4);
				printf("      @   @        @   @           @ @     @ @ @ @      @ @   ");gotoxy(x,y+5);
				printf("      @   @        @   @           @  @   @  @ @  @    @  @   ");gotoxy(x,y+6);
				printf("      @@  @@@@@@@@@@  @@           @  @   @  @ @  @    @  @ ");gotoxy(x,y+7);
				printf("     @ _____      _____ @          @@ @@@@@ @@ @@ @@@@@@  @       ");gotoxy(x,y+8);
				printf("    @   | |        | |   @        @           @            @   ");gotoxy(x,y+9);
				printf("   @    | |        | |    @      @           @              @  ");gotoxy(x,y+10);
				printf("    @   | |        | |   @        @           @            @    ");gotoxy(x,y+11);
				printf("     @     _________    @                                         ");gotoxy(x,y+12);
				printf("      @                @                    @   @                  ");gotoxy(x,y+13);
				printf("     @                  @                  @@@ @@@           ");gotoxy(x,y+14);
				printf("    @                    @                @@@@@@@@@          ");gotoxy(x,y+15);
				printf("   @                      @                 @@@@@          ");gotoxy(x,y+16);
				printf("  @                        @                 @@@           ");gotoxy(x,y+17);
				printf(" @                          @                 @            ");gotoxy(x,y+18);
}
void bite(int x,int y){
	gotoxy(x,y);
				printf("      @@              @@ ");gotoxy(x,y+1);
				printf("      @ @            @ @ ");gotoxy(x,y+2);
				printf("      @  @  �Q���r  @  @ ");gotoxy(x,y+3);
				printf("     @   @          @   @ ");gotoxy(x,y+4);
				printf("      @   @        @   @");gotoxy(x,y+5);
				printf("      @   @        @   @");gotoxy(x,y+6);
				printf("      @@  @@@@@@@@@@  @@                     ");gotoxy(x,y+7);
				printf("     @                 @                     ");gotoxy(x,y+8);
				printf("    @     X X    X X    @                    ");gotoxy(x,y+9);
				printf("   @       X      X      @                           ");gotoxy(x,y+10);
				printf("    @     X X    X X    @                      ");gotoxy(x,y+11);
				printf("     @                 @   @                      ");gotoxy(x,y+12);
				printf("     @                  @@@@                       ");gotoxy(x,y+13);
				printf("    @                @@@@@@@@   @@@@@@   @           ");gotoxy(x,y+14);
				printf("   @                 VVVVV @@@@@@@@@@@@@@@            ");gotoxy(x,y+15);
				printf("  @                    @@@@@   @@@@@@@@@@@          ");gotoxy(x,y+16);
				printf(" @                             @@      @@            ");gotoxy(x,y+17);
				printf("@                              @@      @@           ");gotoxy(x,y+18);
}  
void bully(int x,int y){
	gotoxy(x,y);
				printf("                                @@              @@                           ");gotoxy(x,y+1);
				printf("                                @ @            @ @                           ");gotoxy(x,y+2);
				printf("                                @  @          @  @                           ");gotoxy(x,y+3);
				printf("                               @   @          @   @                           ");gotoxy(x,y+4);
				printf("                                @   @        @   @                          ");gotoxy(x,y+5);
				printf("       @@          @@           @   @        @   @          @@          @@   ");gotoxy(x,y+6);
				printf("       @ @        @ @           @@  @@@@@@@@@@  @@          @ @        @ @  ");gotoxy(x,y+7);
				printf("       @  @      @  @          @                  @         @  @      @  @   ");gotoxy(x,y+8);
				printf("       @   @    @   @         @                    @        @   @    @   @    ");gotoxy(x,y+9);
				printf("       @   @    @   @        @    @@@@@    @@@@@    @       @   @    @   @     ");gotoxy(x,y+10);
				printf("       @@  @@@@@@  @@         @                    @        @@  @@@@@@  @@    ");gotoxy(x,y+11);
				printf("      @ \\      \\/  @         @      �~���L      @        @  \\      \\/   @  ");gotoxy(x,y+12);
				printf("     @    ________    @         @                @        @   _________    @ ");gotoxy(x,y+13);
				printf("      @   VVVVVVVV   @         @                  @        @  VVVVVVVVV   @  ");gotoxy(x,y+14);
				printf("       @            @         @         ��         @        @            @      ");gotoxy(x,y+15);
				printf("      @@@@@          @       @@@@/      �C     \\@@@@      @@@@@          @    ");gotoxy(x,y+16);
				printf("     @@    @          @     @   /               \\   @    @@    @          @      ");gotoxy(x,y+17);
				printf("    @ @   @            @   @@@@/                 \\@@@@  @ @   @            @       ");gotoxy(x,y+18);
}          
void punch() {
	printf("      @@              @@ \n");
	printf("      @ @            @ @ \n");
	printf("      @  @          @  @ \n");
	printf("     @   @          @   @ \n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@\n");
	printf("     @                 @\n");
	printf("    @                   @\n");
	printf("   @     @@@      @@@    @\n");
	printf("    @    @@@      @@@   @\n");
	printf("     @       @@@@      @     \n");
	printf("      @                \n");
	printf("     @                       @@@@@@ \n");
	printf("    @            @@@@@@@@@@@@      @@ \n");
	printf("   @                                @@ \n");
	printf("  @              @@@@@@@@@@@@      @@  \n");
	printf(" @                           @@@@@@  \n");
}
void kiss() {
	printf("      @@     �˿�     @@ \n");
	printf("      @ @            @ @ \n");
	printf("      @  @          @  @ \n");
	printf("     @   @          @   @ \n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@        LOVE U\n");
	printf("     @                 @          \n");
	printf("    @                   @        @ @ \n");
	printf("   @            @@@    @@@@     @@@@@\n");
	printf("    @                  @@@@      @@@ \n");
	printf("     @                 @          @\n");
	printf("      @               @\n");
	printf("     @                 @\n");
	printf("    @                   @ \n");
	printf("   @                     @\n");
	printf("  @                       @\n");
	printf(" @                         @\n");
}
void great() {
	printf("      @@              @@ \n");
	printf("      @ @    ���g    @ @ \n");
	printf("      @  @          @  @ \n");
	printf("     @    @        @    @\n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@\n");
	printf("     @                 @\n");
	printf("    @                   @\n");
	printf("   @           @@@@      @\n");
	printf("    @                   @    \n");
	printf("     @                 @    Great!\n");
	printf("      @               @     \n");
	printf("     @                @     �g \n");
	printf("    @                 @    �g�g�g \n");
	printf("   @                  @    �g�g�g\n");
	printf("  @                   @  \n");
	printf(" @                    @\n");
}
void swear() {
	printf("      @@              @@ \n");
	printf("      @ @    �|�H    @ @\n");
	printf("      @  @          @  @ \n");
	printf("     @    @        @    @\n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@\n");
	printf("     @                 @\n");
	printf("    @                   @         swear!  \n");
	printf("   @           @@@@      @     ------------- \n");
	printf("    @                   @     |�I���C�H���� | \n");
	printf("     @                 @    �� �����H�C���I | \n");
	printf("      @               @        ------------- \n");
	printf("     @                @   \n");
	printf("    @                 @\n");
	printf("   @                  @\n");
	printf("  @                   @ \n");
	printf(" @                    @\n");
}

void rabbit() {
	printf("      @@              @@ \n");
	printf("      @ @            @ @ \n");
	printf("      @  @          @  @ \n");
	printf("     @   @          @   @ \n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@\n");
	printf("     @                 @\n");
	printf("    @                   @ \n");
	printf("   @     @@@      @@@    @\n");
	printf("    @    @@@      @@@   @\n");
	printf("     @       @@@@      @\n");
	printf("      @               @\n");
	printf("     @                 @\n");
	printf("    @                   @\n");
	printf("   @                     @\n");
	printf("  @                       @\n");
	printf(" @                         @\n");
}
void food() {

	printf("                  �������� \n");
	printf("                   \n");
	printf("              @@@@@@@@@@@@@\n");
	printf("           @@@@@@@@@@@@@@@@@@@@@\n");
	printf("         @@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	printf("       @@@@@@@@@                @@@@@@@ \n");
	printf("@@@@@@@@@@@@@@@                     @@@@@ \n");
	printf("@@@@@@@@@@@@@               ³��   \n");
	printf("@@@@@@@@@@@@              ³��³��     \n");
	printf("       @@@@@            ³��³��³�� \n");
	printf("       @@@@@      @@@     ³��³�� \n");
	printf("        @@@@@@@@@@@         ³��         \n");
	printf("         @@@@@@@@                    \n");
	printf("                                     \n");
	printf("                                  \n");
	printf("                             \n");
	printf("                              \n");
	printf("                                \n");
}
void killer() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   ���G��ܡG   \n");
	puts(" ");
	printf("                                                         �ѩ�A�~�H���Ƴ̦h�A�A�����õۤ@�ӱ��H�]�I�I\n");
	puts(" ");
	printf("                                                                    @@              @@ \n");
	printf("                                                                    @ @            @ @\n");
	printf("                                                                    @  @          @  @ \n");
	printf("                                                                   @    @        @    @\n");
	printf("                                                                    @   @        @   @\n");
	printf("                                                                    @   @        @   @\n");
	printf("                                                                    @@  @@@@@@@@@@  @@\n");
	printf("                                                                   @                 @\n");
	printf("                                                                  @                   @ \n");
	printf("                                                                 @           @@@@      @ \n");
	printf("                                                                  @                @@@@@\n");
	printf("                                                                   @                 @            \n");
	printf("                                                                    @               @        _    \n");
	printf("                                                                   @                @    ___| |--------------\\      \n");
	printf("                                                                  @                 @   |_|_| |------------   |     \n");
	printf("                                                                 @                  @       |_|--------------/       \n");
	printf("                                                                @                   @             \n");
	printf("                                                               @                    @               \n");
	puts(" ");
	printf("                                                                   ���ߧA�I ����F ���H�]\n");
	system("pause");
}
void gd_student() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   ���G��ܡG   \n");
	puts(" ");
	printf("                                                         �A�j�h�O�j�y�O�H�n���V�W�A�A�O�ӫܼ��[�}�Ԫ��H�I�I\n");
	puts(" ");
	printf("                                                                     @@              @@                    \n");
	printf("                                                                     @ @            @ @                    \n");
	printf("                                                                     @  @          @  @                    \n");
	printf("                                                                    @   @          @   @                  \n");
	printf("                                                                     @   @        @   @                   \n");
	printf("                                                                     @   @        @   @                   \n");
	printf("                                                                     @@  @@@@@@@@@@  @@                   \n");
	printf("                                                                    @                  @                  \n");
	printf("                                                                   @    /\\       /\\     @                 \n");
	printf("                                                                  @                     @               \n");
	printf("                                                                   @      |     |      @                \n");
	printf("                                                                    @     |_____|     @                   \n");
	printf("                                                                     @               @                    \n");
	printf("                                                                    @                 @                  \n");
	printf("                                                                   @                   @          \n");
	printf("                                                                  @                     @          \n");
	printf("                                                                 @                       @          \n");
	printf("                                                                @                         @          \n");
	puts(" ");
	printf("                                                                   ���ߧA�I ����F �n�ǥ� \n");
	system("pause");
}
void eight_nine() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   ���G��ܡG   \n");
	puts(" ");
	printf("                                                         �ѩ�A�|�H���Ƴ̦h�A�A�����õۤ@��8+9�I�I\n");
	puts(" ");
	printf("                                                                     @@              @@                    \n");
	printf("                                                                     @ @            @ @                    \n");
	printf("                                                                     @  @          @  @                    \n");
	printf("                                                                    @   @          @   @                  \n");
	printf("                                                          @  @       @   @        @   @                   \n");
	printf("                                                          @  @       @   @        @   @                   \n");
	printf("                                                        @@@  @@@     @@  @@@@@@@@@@  @@                   \n");
	printf("                                                                    @                 @                  \n");
	printf("                                                        @@@  @@@   @                   @                 \n");
	printf("                                                          @  @    @     @@@      @@@    @               \n");
	printf("                                                          @  @     @                   @                \n");
	printf("                                                                    @       @@@@      @                   \n");
	printf("                                                                     @               @                    \n");
	printf("                                                                    @                 @                  \n");
	printf("                                                                   @                   @          \n");
	printf("                                                                  @                     @          \n");
	printf("                                                                 @                       @          \n");
	printf("                                                                @                         @          \n");
	puts(" ");
	printf("                                                                   ���ߧA�I ����F 8+9 \n");
	system("pause");
}
void yuck() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   ���G��ܡG   \n");
	puts(" ");
	printf("                                                         �ѩ�A�˿˦��Ƴ̦h�A�A�����õۤ@�ӦⰭ�I�I\n");
	puts(" ");
	printf("                                                 @@              @@                    @@              @@\n");
	printf("                                                 @ @            @ @                    @ @            @ @\n");
	printf("                                                 @  @          @  @                    @  @          @  @\n");
	printf("                                                @   @          @   @                  @   @          @   @\n");
	printf("                                                 @   @        @   @                    @   @        @   @\n");
	printf("                                                 @   @        @   @                    @   @        @   @\n");
	printf("                                                 @@  @@@@@@@@@@  @@                    @@  @@@@@@@@@@  @@\n");
	printf("                                                 @                 @       kiss!       @                 @\n");
	printf("                                                @                   @                 @                   @\n");
	printf("                                               @            @@@    @@@@              @    @@@       @@@    @\n");
	printf("                                                @                  @@@@               @   @@@       @@@   @\n");
	printf("                                                 @                 @                   @                 @\n");
	printf("                                                  @               @                     @      @@@@     @\n");
	printf("                                                 @                 @                   @                 @\n");
	printf("                                                @                   @                 @                   @\n");
	printf("                                               @                     @               @                     @\n");
	printf("                                              @                       @             @                       @\n");
	printf("                                             @                         @           @                         @\n");
	puts(" ");
	printf("                                                                   ���ߧA�I ����F �Ⱝ\n");
	system("pause");
}
void loser() {
	if(lose) {
		HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hOuput,0317);
		switch(lose) {
			case 1:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				printf("                                                       �A�Q���c�ժ������F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				evil(50,30);
				exit(0);
				break;

			case 2:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				//puts(" ");
				printf("                                                       �A�Q�Q��F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				bully(50,30);
				exit(0);
				break;

			case 3:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				//puts(" ");
				printf("                                                       �A�������|�F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				losechance(50,30);
				exit(0);
				break;

			case 4:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				//puts(" ");
				printf("                                                       �A�Q�r�F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				bite(50,30);
				exit(0);
				break;
				
			case 5:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				//puts(" ");
				printf("                                                       �A���w���H�Q�m�F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				steal(50,30);
				exit(0);
				break;
				
			case 6:
				system("CLS");
				start();
				//puts(" ");
				//puts(" ");
				//puts(" ");
				printf("                                                       �A�Q����K.O�F...\n");
				printf("                                                       game over...");
				puts(" ");
				puts(" ");
				puts(" ");
				prize(50,30);
				exit(0);
				break;



		}
	}
}
void load(int x,int y) {
	gotoxy(x,y);
	printf("�p�p�p�p�p");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
}
void loading() {
	int x=5;
	int y=120;
	while(x<120) {
		load(x,y);
		Sleep(100);
		x=x+6;
	}

}
void input() {
	if(GetAsyncKeyState('F')) {
		beenattacked++;
		punchh++;
		clear(0,120);
		gotoxy(0,120);
		punch();
		Sleep(300);
		clear(0,120);
		gotoxy(0,120);
		rabbit();
	}


	if(GetAsyncKeyState('D')) {
		yourlove++;
		kisss++;
		clear(0,120);
		gotoxy(0,120);
		kiss();
		Sleep(300);
		clear(0,120);
		gotoxy(0,120);
		rabbit();
	}


	if(GetAsyncKeyState('S')) {
		beensweared++;
		swearr++;
		defeat++;
		clear(0,120);
		gotoxy(0,120);
		swear();
		Sleep(300);
		clear(0,120);
		gotoxy(0,120);
		rabbit();
	}

	if(GetAsyncKeyState('A')) {
		givefood++;
		clear(0,120);
		gotoxy(0,120);
		food();
		Sleep(300);
		clear(0,120);
		gotoxy(0,120);
		rabbit();
	}

	if(GetAsyncKeyState('J')) {
		greatt++;
		praise++;
		clear(0,120);
		gotoxy(0,120);
		great();
		Sleep(300);
		clear(0,120);
		gotoxy(0,120);
		rabbit();

	}

}
void c1(int x,int y) {
	gotoxy(x,y);
	printf("      @@      �s��    @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @          @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @                 @\n");
	gotoxy(x,y+8);
	printf("    @                   @\n");
	gotoxy(x,y+9);
	printf("   @     @@@      @@@    @\n");
	gotoxy(x,y+10);
	printf("    @    @@@      @@@   @\n");
	gotoxy(x,y+11);
	printf("     @       @@@@      @\n");
	gotoxy(x,y+12);
	printf("      @               @\n");
	gotoxy(x,y+13);
	printf("     @                 @\n");
	gotoxy(x,y+14);
	printf("    @                   @ \n");
	gotoxy(x,y+15);
	printf("   @                     @ \n");
	gotoxy(x,y+16);
	printf("  @                       @  \n");
	gotoxy(x,y+17);
	printf(" @                         @  \n");
	gotoxy(x,y+18);

}
void c2(int x,int y) {
	gotoxy(x,y);
	printf("         �d����          \n");
	gotoxy(x,y+1);
	printf("       @@       @@\n");
	gotoxy(x,y+2);
	printf("   @@@@@@@@@@@@@@@@@@	\n");
	gotoxy(x,y+3);
	printf("  @@@@   @@  @@    @@@@	\n");
	gotoxy(x,y+4);
	printf("   @@   @      @    @@ \n");
	gotoxy(x,y+5);
	printf("   @  @@@@    @@@@    @\n");
	gotoxy(x,y+6);
	printf(" @    @  @    @  @      @\n");
	gotoxy(x,y+7);
	printf("  @   @@@@    @@@@     @\n");
	gotoxy(x,y+8);
	printf("   @                  @\n");
	gotoxy(x,y+9);
	printf("    @      @@        @\n");
	gotoxy(x,y+10);
	printf("       @ @       @ @\n");
	gotoxy(x,y+11);
	printf("    @      @       @\n");
	gotoxy(x,y+12);
	printf("   @       @        @  \n");
	gotoxy(x,y+13);
	printf("  @       @@@        @\n");
	gotoxy(x,y+14);
	printf(" @         @          @\n");
	gotoxy(x,y+15);
	printf("@                      @\n");
	gotoxy(x,y+16);
	printf("   \n");
	gotoxy(x,y+17);
	printf(" \n");
	gotoxy(x,y+18);
	printf(" \n");
	gotoxy(x,y+19);


}
void  c3(int x,int y) {
	gotoxy(x,y);
	printf("         ���R�{          \n");
	gotoxy(x,y+1);
	printf("       @@ @@ @@  @@\n");
	gotoxy(x,y+2);
	printf("   @@@@@@@@@@@@@@@@@@	\n");
	gotoxy(x,y+3);
	printf("  @@                @@	\n");
	gotoxy(x,y+4);
	printf("   @                  @@ \n");
	gotoxy(x,y+5);
	printf("  @   @@@@    @@@@      @\n");
	gotoxy(x,y+6);
	printf(" @    @  @    @  @      @\n");
	gotoxy(x,y+7);
	printf("  @   @@@@    @@@@     @\n");
	gotoxy(x,y+8);
	printf("   @      @  @         @\n");
	gotoxy(x,y+9);
	printf("    @      @@        @\n");
	gotoxy(x,y+10);
	printf("       @ @       @ @\n");
	gotoxy(x,y+11);
	printf("    @      @       @\n");
	gotoxy(x,y+12);
	printf("   @       @        @  \n");
	gotoxy(x,y+13);
	printf("  @       @@@        @\n");
	gotoxy(x,y+14);
	printf(" @         @          @\n");
	gotoxy(x,y+15);
	printf("@                      @\n");
	gotoxy(x,y+16);
	printf("   \n");
	gotoxy(x,y+17);
	printf(" \n");
	gotoxy(x,y+18);
	printf(" \n");
	gotoxy(x,y+19);


}
void c5(int x,int y) {
	gotoxy(x,y);
	printf("                     �ժ�               \n");
	gotoxy(x,y+1);
	printf("                            \n");
	gotoxy(x,y+2);
	printf("                  @ @  @                \n");
	gotoxy(x,y+3);
	printf("                 @  @  @            \n");
	gotoxy(x,y+4);
	printf("                 @ @ @       \n");
	gotoxy(x,y+5);
	printf("               @                 \n");
	gotoxy(x,y+6);
	printf("                                     \n");
	gotoxy(x,y+7);
	printf("       @@@@@@@@@        @@@@@@@@@     \n");
	gotoxy(x,y+8);
	printf("       @  @@   @        @  @@   @    \n");
	gotoxy(x,y+9);
	printf("  @    @ @  @  @        @ @  @  @     @  \n");
	gotoxy(x,y+10);
	printf("  @    @       @        @       @     @  \n");
	gotoxy(x,y+11);
	printf("   @   @@@@@@@@@        @@@@@@@@@     @  \n");
	gotoxy(x,y+12);
	printf("   @                                 @    \n");
	gotoxy(x,y+13);
	printf("    @            @@ @ @@            @    \n");
	gotoxy(x,y+14);
	printf("     @         @       @           @    \n");
	gotoxy(x,y+15);
	printf("       @         @@ @@          @       \n");
	gotoxy(x,y+16);
	printf("          @                   @       \n");
	gotoxy(x,y+17);
	printf("             @@    @     @@                 \n");
	gotoxy(x,y+18);
}
void c4(int x,int y) {
	gotoxy(x,y);
	printf("         �����         \n");
	gotoxy(x,y+1);
	printf("             \n");
	gotoxy(x,y+2);
	printf("     @                  @\n");
	gotoxy(x,y+3);
	printf("    @                    @\n");
	gotoxy(x,y+4);
	printf("   @    @        @        @\n");
	gotoxy(x,y+5);
	printf("   @                      @\n");
	gotoxy(x,y+6);
	printf("  @       @@@@@@          @\n");
	gotoxy(x,y+7);
	printf("  @       @ �o @         @\n");
	gotoxy(x,y+8);
	printf("   @      @ �] @         @\n");
	gotoxy(x,y+9);
	printf("    @     @@@@@@        @\n");
	gotoxy(x,y+10);
	printf("       @ @       @ @\n");
	gotoxy(x,y+11);
	printf("    @      @       @\n");
	gotoxy(x,y+12);
	printf("   @       @        @  \n");
	gotoxy(x,y+13);
	printf("  @       @@@        @\n");
	gotoxy(x,y+14);
	printf(" @         @          @\n");
	gotoxy(x,y+15);
	printf("@                      @\n");
	gotoxy(x,y+16);
	printf("   \n");
	gotoxy(x,y+17);
	printf(" \n");
	gotoxy(x,y+18);
	printf(" \n");
	gotoxy(x,y+19);


}
void c6(int x,int y) {
	gotoxy(x,y);
	printf("      @@  �ަw(�ɦw)  @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @          @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @                 @\n");
	gotoxy(x,y+8);
	printf("    @    @           @  @\n");
	gotoxy(x,y+9);
	printf("   @     @@         @@   @\n");
	gotoxy(x,y+10);
	printf("    @       @@@@@@@     @\n");
	gotoxy(x,y+11);
	printf("     @      @ @ @ @    @\n");
	gotoxy(x,y+12);
	printf("      @     @@@@@@@   @\n");
	gotoxy(x,y+13);
	printf("     @@ @ @            @\n");
	gotoxy(x,y+14);
	printf("    @@     @            @ \n");
	gotoxy(x,y+15);
	printf("   @ @      @            @ \n");
	gotoxy(x,y+16);
	printf("  @   @    @              @  \n");
	gotoxy(x,y+17);
	printf(" @                         @  \n");
	gotoxy(x,y+18);
}
void c7(int x,int y) {
	gotoxy(x,y);
	printf("      @@              @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @   �կ�   @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @ @@@@   @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @       @@@@@@@   @\n");
	gotoxy(x,y+8);
	printf("    @     /\\    @@@@@@  @\n");
	gotoxy(x,y+9);
	printf("   @      ___     @@@@@@  @\n");
	gotoxy(x,y+10);
	printf("    @    |_0_|      @@@@@@\n");
	gotoxy(x,y+11);
	printf("     @       _____    @@@\n");
	gotoxy(x,y+12);
	printf("      @      _   _     @\n");
	gotoxy(x,y+13);
	printf("     @      | \\/ |     @\n");
	gotoxy(x,y+14);
	printf("    @       |--O--|      @ \n");
	gotoxy(x,y+15);
	printf("   @        |_/\\_|       @ \n");
	gotoxy(x,y+16);
	printf("  @                        @  \n");
	gotoxy(x,y+17);
	printf(" @                          @  \n");
	gotoxy(x,y+18);

}
c8(int x,int y) {
	gotoxy(x,y);
	printf("              @  @ \n");
	gotoxy(x,y+1);
	printf("             @@ @@ \n");
	gotoxy(x,y+2);
	printf("              @@@@  \n");
	gotoxy(x,y+3);
	printf("            @@@@@@@  \n");
	gotoxy(x,y+4);
	printf("         @@@@@@@@@@@                            @\n");
	gotoxy(x,y+5);
	printf("       @@@@   @@@@@@@@                          @@\n");
	gotoxy(x,y+6);
	printf("    @@@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+7);
	printf("     @@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	gotoxy(x,y+8);
	printf("\\    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	gotoxy(x,y+9);
	printf("�L         @@@@@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+10);
	printf("/       @@@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+11);
	printf("                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+12);
	printf("                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+13);
	printf("                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(x,y+14);
	printf("                    @@@@@@@@@            @@@@@@@@@\n");
	gotoxy(x,y+15);
	printf("                   @@@@@@@@@@@@         @@@@@@@@@@@ \n");
	gotoxy(x,y+16);
	printf("                  @@@@@@@  @@@@@       @@@@@@  @@@@@\n");
	gotoxy(x,y+17);
	printf("                  @@@@@@@    @@@@@     @@@@@@    @@@@@\n");
	gotoxy(x,y+18);
}
c9(int x,int y) {
	gotoxy(x,y);
	printf("      @@              @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @   ����   @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @                  @\n");
	gotoxy(x,y+8);
	printf("    @     ___      ___   @\n");
	gotoxy(x,y+9);
	printf("   @     |_0_|    |_0_|   @\n");
	gotoxy(x,y+10);
	printf("    @                    @\n");
	gotoxy(x,y+11);
	printf("     @    \\________/   @\n");
	gotoxy(x,y+12);
	printf("      @                @\n");
	gotoxy(x,y+13);
	printf("     @       @   @     @\n");
	gotoxy(x,y+14);
	printf("    @       @@@ @@@     @ \n");
	gotoxy(x,y+15);
	printf("   @       @@@@@@@@@     @ \n");
	gotoxy(x,y+16);
	printf("  @          @@@@@        @  \n");
	gotoxy(x,y+17);
	printf(" @             @           @  \n");
	gotoxy(x,y+18);
}
c10(int x,int y) {
	gotoxy(x,y);
	printf("      @@              @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @  �ҽd��  @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @ _____      _____ @\n");
	gotoxy(x,y+8);
	printf("    @ |     |____|     | @\n");
	gotoxy(x,y+9);
	printf("   @  |_____|    |_____|  @\n");
	gotoxy(x,y+10);
	printf("    @                    @\n");
	gotoxy(x,y+11);
	printf("     @     _________    @\n");
	gotoxy(x,y+12);
	printf("      @                @\n");
	gotoxy(x,y+13);
	printf("     @    _____ _____   @\n");
	gotoxy(x,y+14);
	printf("    @    |     |     |   @ \n");
	gotoxy(x,y+15);
	printf("   @@@@@ |     |     | @@@@ \n");
	gotoxy(x,y+16);
	printf("  @@@@@@@|_____|_____|@@@@@@  \n");
	gotoxy(x,y+17);
	printf(" @                          @  \n");
	gotoxy(x,y+18);
}
void c11(int x,int y) {
	gotoxy(x,y);
	printf("                \n");
	gotoxy(x,y+1);
	printf("                 \n");
	gotoxy(x,y+2);
	printf("            Vicky      \n");
	gotoxy(x,y+3);
	printf("       @ @           @ @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @                 @\n");
	gotoxy(x,y+8);
	printf("    @                   @\n");
	gotoxy(x,y+9);
	printf("   @     @@@      @@@    @\n");
	gotoxy(x,y+10);
	printf("    @    @@@      @@@   @\n");
	gotoxy(x,y+11);
	printf("     @       @@@@      @\n");
	gotoxy(x,y+12);
	printf("      @               @\n");
	gotoxy(x,y+13);
	printf("     @                 @\n");
	gotoxy(x,y+14);
	printf("    @                   @ \n");
	gotoxy(x,y+15);
	printf("   @                     @ \n");
	gotoxy(x,y+16);
	printf("  @                       @  \n");
	gotoxy(x,y+17);
	printf(" @                         @  \n");
	gotoxy(x,y+18);

}
//�@��ߨ�
void c15(){
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   ���G��ܡG   \n");
	puts(" ");
	printf("                                                         �ѩ�A�����ʧ@�ӹL�����A�ѪG��ܧA�O�@�Ӵ��q�H�I�I\n");
	puts(" ");
	printf("                                                                     @@              @@                    \n");
	printf("                                                                     @ @            @ @                    \n");
	printf("                                                                     @  @          @  @                    \n");
	printf("                                                                    @   @          @   @                  \n");
	printf("                                                                     @   @        @   @                   \n");
	printf("                                                                     @   @        @   @                   \n");
	printf("                                                                     @@  @@@@@@@@@@  @@                   \n");
	printf("                                                                    @                 @                  \n");
	printf("                                                                   @    @@@      @@@   @                 \n");
	printf("                                                                  @     @@@      @@@    @               \n");
	printf("                                                                   @                   @                \n");
	printf("                                                                    @    \\_______/   @                   \n");
	printf("                                                                     @               @                    \n");
	printf("                                                                    @                 @                  \n");
	printf("                                                                   @                   @          \n");
	printf("                                                                  @                     @          \n");
	printf("                                                                 @                       @          \n");
	printf("                                                                @                         @          \n");
	puts(" ");
	printf("                                                                   ���ߧA�I ����F ���q�H \n");
	system("pause");
} 
void moving() {	//�����H������ 
 
	int x=100;
	int y=120;
	int i;
	srand(time(NULL));
	i=rand()%11+1;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	switch(i) {
		case 1:
			while(x>42) {
				c1(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			break;

		case 2:
			while(x>42) {
				c2(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			break;

		case 3:
			while(x>42) {
				c3(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			break;

		case 4:
			while(x>42) {
				c4(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			break;

		case 5:	//�]�� 
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("�ժ��X�{�F!!!�ݧ���3�U(F��)�H�W�Ӯ���!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�|�Q�Y��!!!");
			beenattacked=0;
			while(x>42) {
				c5(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
				punchh=punchh-3;
			}
			if(beenattacked<3) {
				c5(0,120);
				Sleep(300);
				lose=1;
			}
			clear_word(50,110);
			break;

		case 6:	//�]��
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("�a�J�X�{�F!!!�ݩG�|3�U(S��)�H�W�Ӯ���!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�|�Q�Q��!!!");
			beensweared=0;
			while(x>42) {
				c6(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
				swearr=swearr-3;
			}
			if(beensweared<3) {
				c6(0,120);
				Sleep(300);
				lose=2;
			}
			clear_word(50,110);
			break;


		case 7:	//�]��
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("���w���H�կ�X�{�F!!!�ݧi��3��(D��)�H�W����o���`!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�|�����}��!!!");
			yourlove=0;
			while(x>42) {
				c7(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
				kisss=kisss-3;
			}
			if(yourlove<3) {
				c7(0,120);
				Sleep(300);
				lose=3;
			}
			clear_word(50,110);
			break;


		case 8:	//�]��
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("�ժ��X�{�F!!!������3���H�W(A��)�ӰQ�e���w��!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�|�Q�r!!!");
			givefood=0;
			while(x>42) {
				c8(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			if(givefood<3) {
				c8(0,120);
				Sleep(300);
				lose=4;
			}
			clear_word(50,110);
			break;
			
		case 9:	//�]��
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("���ĥX�{�F!!!�ݶ��n3���H�W(S��)�����h�L���h��!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�կ�|�Q�m!!!");
			defeat=0;
			while(x>42) {
				c9(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
				swearr=swearr-3;
			}
			if(defeat<3) {
				c9(0,120);
				Sleep(300);
				lose=5;
			}
			clear_word(50,110);
			break;
			
		case 10:	//�]��
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("�ҽd�ͥX�{�F!!!���g3���H�W(J��)���L�߱��n!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("�_�h�|�Q�ҽd�ͥμ��ץ�!!!");
			praise=0;
			while(x>42) {
				c10(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
				greatt=greatt-3;
			}
			if(praise<3) {
				c10(0,120);
				Sleep(300);
				lose=6;
			}
			clear_word(50,110);
			break;
		case 11:
			while(x>42) {
				c11(x,y);
				Sleep(300);
				clear(x,y);
				x=x-7;
				input();
			}
			break;
	}
}


void start() {
	printf("====================================================================================================================================\n");
	printf("    @@@@@@@@@@@@@          @    @  @    @           @           @                                               \n");
	printf("    @     @     @       @@@@@@@@@@@@@@@@@@@          @         @                                               �@�@�@�@�@ @ \n");
	printf("    @@@@@@@@@@@@@           @          @        @@@@@@@@@@@@@@@@@@@@@@      @@@@@@@@@@@@   @@@@@@@@@@@           @        @ \n");
	printf("    @     @     @    	     @        @                                     @@             @@       @@         @       @  @   @ \n");
	printf("    @@@@@@@@@@@@@         @@@@@@@@@@@@@@@@        @@@@@@@@          @       @@             @@       @@      @  @       @  @     @ \n");
	printf("      @   @   @                  @                @      @          @       @@             @@       @@         @      @   @      @ \n");
	printf("  @@@@@@@@@@@@@@@@@         @@@@@@@@@@@@          @@@@@@@@     @    @       @@@@@@@@@@@@   @@       @@    @@@@@@@@@@@          @  @ \n");
	printf("      @   @   @                  @                @      @     @    @       @@        @@   @@       @@       @ @ @            @ \n");
	printf("    @@@@@@@@@@@@@         @@@@@@@@@@@@@@@         @@@@@@@@     @    @       @@        @@   @@       @@      @  @  @          @ \n");
	printf("          @                  @   @   @            @      @          @       @@        @@   @@       @@     @   @   @        @ \n");
	printf("       @@@@@@@              @    @    @           @    @ @        @ @       @@@@@@@@@@@@   @@@@@@@@@@@         @           @ \n");
	printf("          @                @     @     @         @      @@         @@                                                    @ \n");
	printf("====================================================================================================================================\n");
	puts(" ");
	puts(" ");
	printf("                                                      ���~�e�˼�60��A�A�Q������Ʊ�?\n");
	puts(" ");
	puts(" ");
	printf("====================================================================================================================================\n");
}


void choice() {
	puts(" ");
	puts(" ");
	printf("                                                       ��ĳ�ϥΥ��ù��H��o��Ϊ��C������\n");
	puts(" ");
	printf("                                                       1.   START   GAME\n");
	puts(" ");
	printf("                                                       2.   HOW  TO PLAY\n");
	puts(" ");
	printf("                                                       3.    END    GAME\n");
	puts(" ");
	printf("                                                       choose :");
}

int end_game(char namee[],int punchh,int kissss,int wearr,int greatt) {
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOuput,0x30);
	system("CLS");
	gotoxy(20,120);
	printf("                           \n");
	printf("                           \n");
	printf("                           \n");
	printf("                                                      @@          \n");
	printf("       @@@@@@@@@@   @@@@@@   @        @   @@@@@@@    @ @    @ @    \n");
	printf("            @          @     @ @    @ @   @           @    @   @  \n");
	printf("            @          @     @  @  @  @   @          @      @       \n");
	printf("            @          @     @   @    @   @@@@@@@            @  \n");
	printf("            @          @     @        @   @               @   @    \n");
	printf("            @        @@@@@   @        @   @@@@@@@          @ @    \n");
	printf("                                                \n");
	printf("                                               \n");
	printf("                                                \n");
	printf("                              @      @     @ @ @         \n");
	printf("                              @      @     @    @   \n");
	printf("                              @      @     @ @ @    \n");
	printf("                              @      @     @    \n");
	printf("                                @ @ @      @       \n");
	delay(3000);
	system("CLS");
	int x=60;
	int y=100;
	gotoxy(60,100);
	printf("      @@           @@ \n");
	gotoxy(x,y+1);
	printf("      @ @         @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @       @  @ \n");
	gotoxy(x,y+3);
	printf("      @  @       @  @ \n");
	gotoxy(x,y+4);
	printf("      @   @     @   @\n");
	gotoxy(x,y+5);
	printf("      @   @     @   @\n");
	gotoxy(x,y+6);
	printf("       @@  @   @  @@\n");
	gotoxy(x,y+7);
	printf("      @             @\n");
	gotoxy(x,y+8);
	printf("      @   @     @   @\n");
	gotoxy(x,y+9);
	printf("      @             @\n");
	gotoxy(x,y+10);
	printf("      @             @\n");
	gotoxy(x,y+11);
	printf("       @           @\n");
	gotoxy(x,y+12);
	printf("         @  @ @  @\n");
	gotoxy(x,y+13);
	printf("                       \n");
	gotoxy(x,y+14);
	printf("                      \n");
	gotoxy(x,y+15);
	printf("         Loading...    \n");
	gotoxy(x,y+16);
	loading();
	SetConsoleTextAttribute(hOuput,0017);
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                             !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	puts(" ");
	printf("                                                         ���e�@�D��..... %s���ӤF\n",namee);
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                         �L�ݨ쨭�䯸�۲��h����s�б�\n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                      �@ ��Ӯڥ��٨S�����~�I�I�I�I�I�I\n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    �@   �o�ӥu�O�ӹ���Ӥw   \n");
	puts(" ");
	printf("                                                         ���i�H�ھڭ��A���@���ӱ����A�O���@�ؤH    \n");
	system("pause");



	if(punchh>kisss&&punchh>swearr&&punchh>greatt) {
		killer();
	} else if(kisss>punchh&&kisss>swearr&&kisss>greatt) {
		yuck();
	} else if(swearr>punchh&&swearr>kisss&&swearr>greatt) {
		eight_nine();
	}else if(greatt>punchh&&greatt>kisss&&greatt>swearr){
		gd_student();
	}else{
		c15();
	}

	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                      SEE  YOU  NEXT  TIME !!\n");
	puts(" ");
	printf("                                                         BYE  ~  BYE  ~  \n");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");
	puts(" ");

	if(punchh>kisss&&punchh>swearr&&punchh>greatt) {
		return 1;
	} else if(kisss>punchh&&kisss>swearr&&kisss>greatt) {
		return 2;
	} else if(swearr>punchh&&swearr>kisss&&swearr>greatt) {
		return 3;
	} else  if(greatt>punchh&&greatt>kisss&&greatt>swearr){
		return 4;
	} else{
		return 5;
	}
}

void * pthread_func2(void * data_ptr) {	//������禡--�˼ƭp�� 
	int counter=60;

	while(counter > 0 && isFinish == 0) {
		gotoxy(110,108);
		printf("�Ѿl�ɶ�: %d ",counter);
		counter--;
		sleep(1);
	}
	isFinish = 1;
}
void * pthread_func3(void * data_ptr) {	//������禡--�ˬd�O�_��F 
	while(1) {
		if (isFinish) {
			return 0;
		}
		loser();	//lose==1��,�N����loser
	}
}
void * pthread_func4(void * data_ptr) {	//������禡--�����H�����ͨ��� 
	while(1) {
		if (isFinish) {
			return 0;
		}
		moving();
	}
}
void gamerange() { //�C�����d��

	gotoxy(0,110);

	printf("  ��F�i�H�~�H�B��D�i�H����⪺�Ʊ�\n");
	printf("  ��S�i�H�|�H�B��J�i�H���g\n");
	printf("  ��A�i�H����\n");

	int i=0;
	for(; i<=140; i++) {
		gotoxy(i,116);
		printf("#");
	}
	int j=0;
	for(; j<=140; j++) {
		gotoxy(j,141);
		printf("#");
	}
	int x=0;
	int y=120;
	gotoxy(x,y);
	printf("      @@              @@ \n");
	gotoxy(x,y+1);
	printf("      @ @            @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @          @  @ \n");
	gotoxy(x,y+3);
	printf("     @   @          @   @ \n");
	gotoxy(x,y+4);
	printf("      @   @        @   @\n");
	gotoxy(x,y+5);
	printf("      @   @        @   @\n");
	gotoxy(x,y+6);
	printf("      @@  @@@@@@@@@@  @@\n");
	gotoxy(x,y+7);
	printf("     @                 @\n");
	gotoxy(x,y+8);
	printf("    @                   @\n");
	gotoxy(x,y+9);
	printf("   @     @@@      @@@    @\n");
	gotoxy(x,y+10);
	printf("    @    @@@      @@@   @\n");
	gotoxy(x,y+11);
	printf("     @       @@@@      @\n");
	gotoxy(x,y+12);
	printf("      @               @\n");
	gotoxy(x,y+13);
	printf("     @                 @\n");
	gotoxy(x,y+14);
	printf("    @                   @ \n");
	gotoxy(x,y+15);
	printf("   @                     @ \n");
	gotoxy(x,y+16);
	printf("  @                       @  \n");
	gotoxy(x,y+17);
	printf(" @                         @  \n");
	gotoxy(x,y+18);
}

void game() {
	system("CLS");
	PlaySound(NULL,NULL,SND_PURGE);

	int x=60;
	int y=100;
	gotoxy(60,100);
	printf("      @@           @@ \n");
	gotoxy(x,y+1);
	printf("      @ @         @ @ \n");
	gotoxy(x,y+2);
	printf("      @  @       @  @ \n");
	gotoxy(x,y+3);
	printf("      @  @       @  @ \n");
	gotoxy(x,y+4);
	printf("      @   @     @   @\n");
	gotoxy(x,y+5);
	printf("      @   @     @   @\n");
	gotoxy(x,y+6);
	printf("       @@  @   @  @@\n");
	gotoxy(x,y+7);
	printf("      @             @\n");
	gotoxy(x,y+8);
	printf("      @   @     @   @\n");
	gotoxy(x,y+9);
	printf("      @             @\n");
	gotoxy(x,y+10);
	printf("      @             @\n");
	gotoxy(x,y+11);
	printf("       @           @\n");
	gotoxy(x,y+12);
	printf("         @  @ @  @\n");
	gotoxy(x,y+13);
	printf("                       \n");
	gotoxy(x,y+14);
	printf("                      \n");
	gotoxy(x,y+15);
	printf("         Loading...    \n");
	gotoxy(x,y+16);
	loading();
	system("CLS");


	PlaySound(TEXT("bensound-buddy .wav"),NULL,SND_ASYNC|SND_LOOP);
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOuput,0016);

	gamerange();

	pthread_t pthh;
	pthread_create(&pthh, NULL, pthread_func2, NULL);

	pthread_t pthhh;
	pthread_create(&pthhh, NULL, pthread_func3, NULL);

	pthread_t pthhhh;
	pthread_create(&pthhhh, NULL, pthread_func4, NULL);

	pthread_join(pthh,NULL);
	pthread_join(pthhh,NULL);
	pthread_join(pthhhh,NULL);

}
void instruction() {
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                             �C�����СG\n");
	puts(" ");
	printf("                                                       �ߨߤj�Ǧb6/10�N�����|�沦�~��§�I    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       ���~��N�S��k�A�ݨ�Ѯv�P�ǣ{    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                        �̾ڨߨߤj�Ǫ��ǲΡI    \n");
	puts(" ");
	printf("                                                       �u���~�e60��v�O�ߨߪ��̫�@�Ӭ���    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       �b�o60��̭�   \n");
	puts(" ");
	printf("                                                       �ߨߥi�H����w���B�Q�����H�̬��ұ����I    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       ����w���H��� ( kiss kiss�I)   \n");
	puts(" ");
	printf("                                                       �άO��Q�����H�~�� ( KO ~~ )    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       ���I���ߨ߶}�ҳo��ȵ{�t�I    \n");
	puts(" ");
	printf("                                                       �����ΫݤF�ڰڰڰڰڰڡI�I�I    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                             �C���覡�G\n");
	puts(" ");
	printf("                                                                 ��F�i�H�~�H�B��D�i�H����⪺�Ʊ�\n");
	printf("                                                                 ��S�i�H�|�H�B��J�i�H���g\n");
	printf("                                                                 ��A�i�H����\n");
	printf("                                                                 \n");
	printf("                                                                 �Y�J��S��H��\n");
	printf("                                                                 �Ы��Ӵ��ܦr����!!!�H�K game over!!!\n");
	printf("\n                                                                 ���U���N���C���Y�߰��}�l\n");
	puts(" ");
	puts(" ");
	system("pause");
	game();

}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void playmusic() {	//���񭵼� 
	PlaySound(TEXT("bensound-jazzcomedy .wav"),NULL,SND_ASYNC|SND_LOOP);	//���B+�j�� 
}

int main(void) {

	playmusic();
	start();
	char name[30];
	char characteristic[10];
	int character_num;
	int num;
	FILE *cfPtr;
	if ((cfPtr = fopen("player.txt", "a")) == NULL) {	//���}�ɮ� 
		puts("File could not be opened");
	} else {
		puts(" ");
		puts(" ");
		puts(" ");
		unsigned int account;

		puts(" ");
		printf("                                                    Your name is�G");
		scanf(" %s", name);
		fprintf(cfPtr, "%s \n", name);
		printf("                                                    Please enter num 1 to end input. ");
		scanf(" %d",&num);
		fflush(stdin);
	}
	if(num==1) {
		choice();
		int choose;
		scanf(" %d",&choose);
		hidecursor();

		if(choose==1) {
			game();
			character_num=end_game(name,punchh,kisss,swearr,greatt);
		} else if(choose==2) {
			system("CLS");
			instruction();
			character_num=end_game(name,punchh,kisss,swearr,greatt);
		}
	}

	switch(character_num) {
		case 1:
			fprintf(cfPtr, "%s ", "�A�O�ӱ���\n");
			break;
		case 2:
			fprintf(cfPtr, "%s ", "�A�O�ӦⰭ\n");
			break;
		case 3:
			fprintf(cfPtr, "%s ", "�A�O��8+9\n");
			break;
		case 4:
			fprintf(cfPtr, "%s ", "�A�O�Ӧn�ǥ�\n");
			break;
		case 5:
			fprintf(cfPtr,"%s","�A�O�Ӥ@��H\n");
			break;
		
	}

	fclose(cfPtr); // fclose closes file
}
