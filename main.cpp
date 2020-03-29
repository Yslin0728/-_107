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
void delay(unsigned int mseconds) {	//延遲 
	clock_t goal = mseconds + clock();
	while (goal > clock());	//false 會結束 
}
void clear(int x,int y) {	//清除隨機產生的角色的移動 
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
void clear_word(int x,int y){	//清除提示字 
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
				printf("    @          __|     | @           獎獎          ");gotoxy(x,y+9);
				printf("   @          /  |_____|  @         獎獎獎                       ");gotoxy(x,y+10);
				printf("    @                    @           獎獎                 ");gotoxy(x,y+11);
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
				printf("      @@              @@                 機會跑走了 嗚嗚嗚");gotoxy(x,y+1);
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
				printf("       你被殺死了:)         @           \\_____/                                  ");gotoxy(x,y+13);
				printf("                           @                 @     _                  ");gotoxy(x,y+14);
				printf("                  ________@      \\_______________| |                      ");gotoxy(x,y+15);
				printf("                 /_______@        /_______________| |---|                            ");gotoxy(x,y+16);
				printf("                 \\_____@        \\_______________| |---|                               ");gotoxy(x,y+17);
				printf("                       @          /          @    |_|                             ");gotoxy(x,y+18);
}
void steal(int x,int y){
	gotoxy(x,y);
				printf("      @@              @@                             ");gotoxy(x,y+1);
				printf("      @ @            @ @              嗚嗚嗚~被搶走了     ");gotoxy(x,y+2);
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
				printf("      @  @  被狗咬  @  @ ");gotoxy(x,y+3);
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
				printf("      @ \\      \\/  @         @      揍死他      @        @  \\      \\/   @  ");gotoxy(x,y+12);
				printf("     @    ________    @         @                @        @   _________    @ ");gotoxy(x,y+13);
				printf("      @   VVVVVVVV   @         @                  @        @  VVVVVVVVV   @  ");gotoxy(x,y+14);
				printf("       @            @         @         刺         @        @            @      ");gotoxy(x,y+15);
				printf("      @@@@@          @       @@@@/      青     \\@@@@      @@@@@          @    ");gotoxy(x,y+16);
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
	printf("      @@     親親     @@ \n");
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
	printf("      @ @    比讚    @ @ \n");
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
	printf("     @                @     讚 \n");
	printf("    @                 @    讚讚讚 \n");
	printf("   @                  @    讚讚讚\n");
	printf("  @                   @  \n");
	printf(" @                    @\n");
}
void swear() {
	printf("      @@              @@ \n");
	printf("      @ @    罵人    @ @\n");
	printf("      @  @          @  @ \n");
	printf("     @    @        @    @\n");
	printf("      @   @        @   @\n");
	printf("      @   @        @   @\n");
	printf("      @@  @@@@@@@@@@  @@\n");
	printf("     @                 @\n");
	printf("    @                   @         swear!  \n");
	printf("   @           @@@@      @     ------------- \n");
	printf("    @                   @     |＠＃＄％＆＊ | \n");
	printf("     @                 @    ＜ ＊＆％＄＃＠ | \n");
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

	printf("                  餵食狗狗 \n");
	printf("                   \n");
	printf("              @@@@@@@@@@@@@\n");
	printf("           @@@@@@@@@@@@@@@@@@@@@\n");
	printf("         @@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	printf("       @@@@@@@@@                @@@@@@@ \n");
	printf("@@@@@@@@@@@@@@@                     @@@@@ \n");
	printf("@@@@@@@@@@@@@               糧食   \n");
	printf("@@@@@@@@@@@@              糧食糧食     \n");
	printf("       @@@@@            糧食糧食糧食 \n");
	printf("       @@@@@      @@@     糧食糧食 \n");
	printf("        @@@@@@@@@@@         糧食         \n");
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
	printf("                                                    　   結果顯示：   \n");
	puts(" ");
	printf("                                                         由於你揍人次數最多，你內心藏著一個殺人魔！！\n");
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
	printf("                                                                   恭喜你！ 解鎖了 殺人魔\n");
	system("pause");
}
void gd_student() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    　   結果顯示：   \n");
	puts(" ");
	printf("                                                         你大多是勉勵別人積極向上，你是個很樂觀開朗的人！！\n");
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
	printf("                                                                   恭喜你！ 解鎖了 好學生 \n");
	system("pause");
}
void eight_nine() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    　   結果顯示：   \n");
	puts(" ");
	printf("                                                         由於你罵人次數最多，你內心藏著一個8+9！！\n");
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
	printf("                                                                   恭喜你！ 解鎖了 8+9 \n");
	system("pause");
}
void yuck() {
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    　   結果顯示：   \n");
	puts(" ");
	printf("                                                         由於你親親次數最多，你內心藏著一個色鬼！！\n");
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
	printf("                                                                   恭喜你！ 解鎖了 色鬼\n");
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
				printf("                                                       你被邪惡校長殺死了...\n");
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
				printf("                                                       你被霸凌了...\n");
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
				printf("                                                       你錯失機會了...\n");
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
				printf("                                                       你被咬了...\n");
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
				printf("                                                       你喜歡的人被搶了...\n");
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
				printf("                                                       你被獎盃K.O了...\n");
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
	printf("▉▉▉▉▉");
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
	printf("      @@      孟儒    @@ \n");
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
	printf("         康藝晃          \n");
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
	printf("         楊淯程          \n");
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
	printf("                     校長               \n");
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
	printf("         韓國瑜         \n");
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
	printf("  @       @ 發 @         @\n");
	gotoxy(x,y+8);
	printf("   @      @ 財 @         @\n");
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
	printf("      @@  技安(怡安)  @@ \n");
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
	printf("     @   @   校草   @   @ \n");
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
	printf("汪         @@@@@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
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
	printf("     @   @   情敵   @   @ \n");
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
	printf("     @   @  模範生  @   @ \n");
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
//一般兔兔
void c15(){
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    　   結果顯示：   \n");
	puts(" ");
	printf("                                                         由於你做的動作太過平均，解果顯示你是一個普通人！！\n");
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
	printf("                                                                   恭喜你！ 解鎖了 普通人 \n");
	system("pause");
} 
void moving() {	//移動隨機角色 
 
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

		case 5:	//魔王 
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("校長出現了!!!需攻擊3下(F鍵)以上來消滅!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則會被吃掉!!!");
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

		case 6:	//魔王
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("壞蛋出現了!!!需咒罵3下(S鍵)以上來消滅!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則會被霸凌!!!");
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


		case 7:	//魔王
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("喜歡的人校草出現了!!!需告白3次(D鍵)以上來獲得關注!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則會錯失良機!!!");
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


		case 8:	//魔王
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("校狗出現了!!!需餵食3次以上(A鍵)來討牠的歡心!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則會被咬!!!");
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
			
		case 9:	//魔王
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("情敵出現了!!!需嗆聲3次以上(S鍵)來擊退他的士氣!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則校草會被搶!!!");
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
			
		case 10:	//魔王
			gotoxy(50,110);
			printf("                                 ");
			gotoxy(50,110);
			printf("模範生出現了!!!需讚3次以上(J鍵)讓他心情好!");
			gotoxy(50,111);
			printf("                                 ");
			gotoxy(50,111);
			printf("否則會被模範生用獎盃打!!!");
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
	printf("    @     @     @       @@@@@@@@@@@@@@@@@@@          @         @                                               　　　　　 @ \n");
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
	printf("                                                      畢業前倒數60秒，你想做什麼事情?\n");
	puts(" ");
	puts(" ");
	printf("====================================================================================================================================\n");
}


void choice() {
	puts(" ");
	puts(" ");
	printf("                                                       建議使用全螢幕以獲得更佳的遊戲體驗\n");
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
	printf("                                                         眼前一道光..... %s醒來了\n",namee);
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                         他看到身邊站著眾多的研究教授\n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                      　 原來根本還沒有畢業！！！！！！\n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                    　   這個只是個實驗而已   \n");
	puts(" ");
	printf("                                                         它可以根據剛剛你的作為來推測你是哪一種人    \n");
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

void * pthread_func2(void * data_ptr) {	//執行緒函式--倒數計時 
	int counter=60;

	while(counter > 0 && isFinish == 0) {
		gotoxy(110,108);
		printf("剩餘時間: %d ",counter);
		counter--;
		sleep(1);
	}
	isFinish = 1;
}
void * pthread_func3(void * data_ptr) {	//執行緒函式--檢查是否輸了 
	while(1) {
		if (isFinish) {
			return 0;
		}
		loser();	//lose==1時,將執行loser
	}
}
void * pthread_func4(void * data_ptr) {	//執行緒函式--移動隨機產生角色 
	while(1) {
		if (isFinish) {
			return 0;
		}
		moving();
	}
}
void gamerange() { //遊戲的範圍

	gotoxy(0,110);

	printf("  按F可以揍人、按D可以做色色的事情\n");
	printf("  按S可以罵人、按J可以比讚\n");
	printf("  按A可以餵食\n");

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
	printf("                                             遊戲介紹：\n");
	puts(" ");
	printf("                                                       兔兔大學在6/10將隆重舉行畢業典禮！    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       畢業後就沒辦法再看到老師同學ㄌ    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                        依據兔兔大學的傳統！    \n");
	puts(" ");
	printf("                                                       「畢業前60秒」是兔兔的最後一個活動    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       在這60秒裡面   \n");
	puts(" ");
	printf("                                                       兔兔可以對喜歡的、討厭的人們為所欲為！    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       對喜歡的人表白 ( kiss kiss！)   \n");
	puts(" ");
	printf("                                                       或是把討厭的人揍扁 ( KO ~~ )    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                                       快點讓兔兔開啟這趟旅程ㄅ！    \n");
	puts(" ");
	printf("                                                       迫不及待了啊啊啊啊啊啊！！！    \n");
	system("pause");
	system("CLS");
	start();
	puts(" ");
	puts(" ");
	puts(" ");
	printf("                                             遊戲方式：\n");
	puts(" ");
	printf("                                                                 按F可以揍人、按D可以做色色的事情\n");
	printf("                                                                 按S可以罵人、按J可以比讚\n");
	printf("                                                                 按A可以餵食\n");
	printf("                                                                 \n");
	printf("                                                                 若遇到特殊人物\n");
	printf("                                                                 請按照提示字指示!!!以免 game over!!!\n");
	printf("\n                                                                 按下任意鍵後遊戲即立馬開始\n");
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

void playmusic() {	//撥放音樂 
	PlaySound(TEXT("bensound-jazzcomedy .wav"),NULL,SND_ASYNC|SND_LOOP);	//異步+迴圈 
}

int main(void) {

	playmusic();
	start();
	char name[30];
	char characteristic[10];
	int character_num;
	int num;
	FILE *cfPtr;
	if ((cfPtr = fopen("player.txt", "a")) == NULL) {	//打開檔案 
		puts("File could not be opened");
	} else {
		puts(" ");
		puts(" ");
		puts(" ");
		unsigned int account;

		puts(" ");
		printf("                                                    Your name is：");
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
			fprintf(cfPtr, "%s ", "你是個殺手\n");
			break;
		case 2:
			fprintf(cfPtr, "%s ", "你是個色鬼\n");
			break;
		case 3:
			fprintf(cfPtr, "%s ", "你是個8+9\n");
			break;
		case 4:
			fprintf(cfPtr, "%s ", "你是個好學生\n");
			break;
		case 5:
			fprintf(cfPtr,"%s","你是個一般人\n");
			break;
		
	}

	fclose(cfPtr); // fclose closes file
}
