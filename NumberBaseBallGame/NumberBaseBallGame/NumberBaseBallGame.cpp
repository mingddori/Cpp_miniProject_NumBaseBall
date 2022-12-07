#include "NumberBaseBallGame.h"
#include "MainMenu.h"
#include "EnumClass.h"
#include "ConsoleSetting.h"

int main()
{
	/*
	// 게임 타이틀 정하기
	gameSetInit();

	// 게임 시작 화면
	startScene();

	// 커서 움직이기
	int last_y = menuMoveCouser();
	
	// 메뉴 선택하기
	clearConsole();


	// 메뉴 클리어
	std::cout << selectMenu(last_y);
	*/
	//startSceneRoutine();

	getchar();
	
}



void startScene() {
	std::cout << std::endl;
	std::cout << "  ____________________________________________________________________________________________________ " << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |             ####                          ##                         ##                           |" << std::endl;
	std::cout << "  |           ##    ##         ############   ##            ######       ##        ############       |" << std::endl;
	std::cout << "  |         ##        ##            ##        ##          ##      ##     ##                  ##       |" << std::endl;
	std::cout << "  |                                ####       ##        ##          ##   ####                ##       |" << std::endl;
	std::cout << "  |        ##############         ##  ##      ####      ##          ##   ##                  ##       |" << std::endl;
	std::cout << "  |              ##              ##    ##     ##        ##          ##   ####                         |" << std::endl;
	std::cout << "  |                             ##      ##    ##          ##      ##     ##        #############      |" << std::endl;
	std::cout << "  |             ####           ##        ##   ##            ######       ##             ##            |" << std::endl;
	std::cout << "  |           ##    ##                        ##                         ##             ##            |" << std::endl;
	std::cout << "  |         ##        ##                                                                              |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |===================================================================================================|" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                       1. 혼자 게임하기                                            |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                       2. 둘이 게임하기                                            |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                       3. 제작자                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                       4. 종료하기                                                 |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                                                   |" << std::endl;
	std::cout << "  |                                                                          made by. Lee MinSeop     |" << std::endl;
	std::cout << "  |___________________________________________________________________________________________________|" << std::endl;
	std::cout << std::endl;
	std::cout << "     UP KEY    : UP       ||   Down_key : Down" << std::endl;
	std::cout << "     SPACE BAR : Select   ||   " << std::endl;

}

void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int keyControl() {
	
	switch (_getch()) {
	case LEFT:
		return LEFT;
		break;
	case RIGHT:
		return RIGHT;
		break;
	case UP:
		return UP;
		break;
	case DOWN:
		return DOWN;
		break;
	case ' ':
		return SUBMIT;
	}

}

int menuMoveCouser() {
	// 커서 초기값 세팅
	int x = 37;
	int y = 23;
	gotoxy(x, y);

	// 메뉴 선택바 입력
	printf("=>");

	// 메뉴 선택 로직
	while (1) {
		// 키 분류
		switch (keyControl()) {
		case UP: {
			if (y > 23) {
				gotoxy(x, y);
				printf("  ");
				y -= 2;
				gotoxy(x, y);
				printf("=>");
				break;
			}
			else {
				gotoxy(x, y);
				printf("  ");
				y += 6;
				gotoxy(x, y);
				printf("=>");
				break;
			}

		} // case UP
		case DOWN: {
			if (y < 29) {
				gotoxy(x, y);
				printf("  ");
				y += 2;
				gotoxy(x, y);
				printf("=>");
				break;
			}
			else {
				gotoxy(x, y);
				printf("  ");
				y -= 6;
				gotoxy(x, y);
				printf("=>");
				break;
			}
		} // case DOWN
		case SUBMIT: {
			return y;
		}
		} // switch
	}
}

void clearConsole() {
	system("cls");
}

int selectMenu(int last_y) {

	switch (last_y) {
	case (int)Menu_Number::NO_1: { return 1; }
	case (int)Menu_Number::NO_2: {	return 2; }
	case (int)Menu_Number::NO_3: { return 3; }
	case (int)Menu_Number::NO_4: { exitGame();  return 4; }
	}
}

void startSceneRoutine() {
	while (1) {
		startScene();
		int last_y = menuMoveCouser();
		clearConsole();
		int _selected_menu = selectMenu(last_y);
		switch (_selected_menu) {
		case 1 :
			break;
		case 2 :
			break;
		case 3 :
			break;
		case 4 :
			exitGame();
			break;
		}
	}
	getchar();

}

void exitGame() {
	clearConsole();
	std::cout << ">> 게임을 종료하겠습니까? ( Y / N )  :  ";
	std::string answer_quit;
	std::cin >> answer_quit;
	std::cout << std::endl;
	
	if (answer_quit == "Y" || answer_quit == "y") {
		exit(0);
	}
	else if (answer_quit == "N" || answer_quit == "n") {
		exit(0);
	}
	else {
		//continue;
	}

}