#include "NumberBaseBallGame.h"
#include "MainMenu.h"
#include "EnumClass.h"
#include "ConsoleSetting.h"

int main()
{
	// 게임 타이틀 정하기
	gameSetInit();

	// 게임 시작 화면
	startScene();

	// 커서 움직이기
	int last_y = menuMoveCouser();
	
	// 메뉴 선택하기
	


	// 메뉴 클리어
	clearConsole();

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
}

void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int keyControl() {
	char temp = _getch();

	switch (temp) {
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
		// 키 입력
		int key_tmp = keyControl();
		
		// 키 분류
		switch (key_tmp) {
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

	if()

	return 0;
}