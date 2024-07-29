#include <stdio.h>

void MainMenu();
int ReadInput();
void Steak();
void Pasta();
void Cpasta();
void Tpasta();
void Opasta();
void Pizza();
void SU();
void Pack();
int sur;
int price;

int main()
{
	int choice, choice2;
	do {
		start:
		MainMenu();
		choice = ReadInput();
		switch (choice)
		{
		case 1:
			Steak();
			Pack();
			break;
		case 2:
			Pasta();
			choice2 = ReadInput();
			switch (choice2)
			{
			case 1:
				Cpasta();
				Pack();
				break;
			case 2:
				Tpasta();
				Pack();
				break;
			case 3:
				Opasta();
				Pack();
				break;
			default:
				printf("다시 입력해주세요.\n");
				continue;
			}
			break;
		case 3:
			Pizza();
			Pack();
			break;
		case 4:
			printf("프로그램을 종료합니다.");
			return 0;
		default:
			printf("다시 입력해주세요.\n");
			continue;
		}
	} while (1);
}

void MainMenu() {
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요.\n");
	printf("1. 스테이크\n");
	printf("2. 파스타\n");
	printf("3. 피자\n");
	printf("4. 닫기\n");
	printf("-------------------------------\n");
}

int ReadInput() {
	int num;
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &num);
	return num;
}

void SU() {
	printf("> 수량을 입력하세요. ");
	scanf_s("%d", &sur);
}

void Steak() {
	char* stk1, * stk2, * stk3, * stk4;
	static int stknum = 0;

	stk1 = "더블 갈비 스테이크\0";
	stk2 = "수제 함박 스테이크\0";
	stk3 = "삼겹살 스테이크\0";
	stk4 = "수제 포크 커틀렛\0";

	printf("-------------------------------\n");
	printf("1. %s 18,900원 \n", stk1);
	printf("2. %s 13,500원 \n", stk2);
	printf("3. %s 13,500원 \n", stk3);
	printf("4. %s 9,900원 \n", stk4);
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &stknum);
	SU();

	if (stknum == 1) {
		price = 18900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", stk1, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (stknum == 2) {
		price = 13500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", stk2, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (stknum == 3) {
		price = 13500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", stk3, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (stknum == 4) {
		price = 9900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", stk4, sur, price * sur);
		printf("-------------------------------\n");
	}
	else {
		printf("입력 오류로 프로그램이 종료됩니다.");
		return 0;
	}
}

void Pasta() {
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요.\n");
	printf("1. 크림파스타\n");
	printf("2. 토마토 파스타\n");
	printf("3. 봉골레&오일 파스타\n");
	printf("-------------------------------\n");
}

void Cpasta() {
	char* cpat1, * cpat2, * cpat3, * cpat4, * cpat5;
	static int cpatnum = 0;

	cpat1 = "빠네 크림 파스타\0";
	cpat2 = "빠네 로제 파스타\0";
	cpat3 = "베이컨 새우 로제 파스타\0";
	cpat4 = "까르보나라\0";
	cpat5 = "감바스 크림 파스타\0";


	printf("-------------------------------\n");
	printf("1. %s 14,900원 \n", cpat1);
	printf("2. %s 14,900원 \n", cpat2);
	printf("3. %s 10,500원 \n", cpat3);
	printf("4. %s  9,500원 \n", cpat4);
	printf("5. %s 10,500원 \n", cpat5);
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &cpatnum);
	SU();

	if (cpatnum == 1) {
		price = 14900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", cpat1, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (cpatnum == 2) {
		price = 14900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", cpat2, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (cpatnum == 3) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", cpat3, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (cpatnum == 4) {
		price = 9500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", cpat4, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (cpatnum == 5) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", cpat5, sur, price * sur);
		printf("-------------------------------\n");
	}
	else {
		printf("입력 오류로 프로그램이 종료됩니다.");
		return 0;
	}
}

void Tpasta() {
	char* tpat1, * tpat2, * tpat3, * tpat4, * tpat5;
	static int tpatnum = 0;

	tpat1 = "아라비아따 파스타\0";
	tpat2 = "해물 토마토 파스타\0";
	tpat3 = "베이컨 토마토 파스타\0";
	tpat4 = "체다 치즈 칠리 파스타\0";
	tpat5 = "치킨 토마토 파스타\0";


	printf("-------------------------------\n");
	printf("1. %s 10,500원 \n", tpat1);
	printf("2. %s 10,500원 \n", tpat2);
	printf("3. %s 9,500원 \n", tpat3);
	printf("4. %s 10,500원 \n", tpat4);
	printf("5. %s  9,500원 \n", tpat5);
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &tpatnum);
	SU();

	if (tpatnum == 1) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", tpat1, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (tpatnum == 2) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", tpat2, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (tpatnum == 3) {
		price = 9500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", tpat3, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (tpatnum == 4) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", tpat4, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (tpatnum == 5) {
		price = 9500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", tpat5, sur, price * sur);
		printf("-------------------------------\n");
	}
	else {
		printf("입력 오류로 프로그램이 종료됩니다.");
		return 0;
	}
}

void Opasta() {
	char* opat1, * opat2, * opat3, * opat4, * opat5;
	static int opatnum = 0;

	opat1 = "감바스 오일 파스타\0";
	opat2 = "봉골레 파스타\0";
	opat3 = "레드 봉골레 파스타\0";
	opat4 = "봉골레 크림 파스타\0";
	opat5 = "알리오 올리오 파스타\0";


	printf("-------------------------------\n");
	printf("1. %s 10,500원 \n", opat1);
	printf("2. %s 8,900원 \n", opat2);
	printf("3. %s 8,900원 \n", opat3);
	printf("4. %s 9,900원 \n", opat4);
	printf("5. %s 8,900원 \n", opat5);
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &opatnum);
	SU();

	if (opatnum == 1) {
		price = 10500;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", opat1, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (opatnum == 2) {
		price = 8900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", opat2, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (opatnum == 3) {
		price = 8900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", opat3, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (opatnum == 4) {
		price = 9900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", opat4, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (opatnum == 5) {
		price = 8900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", opat5, sur, price * sur);
		printf("-------------------------------\n");
	}
	else {
		printf("입력 오류로 프로그램이 종료됩니다.");
		return 0;
	}
}

void Pizza() {
	char* piz1, * piz2, * piz3, * piz4, * piz5;
	static int piznum = 0;

	piz1 = "1988 피자\0";
	piz2 = "스위트 피자\0";
	piz3 = "고르곤졸라 피자\0";
	piz4 = "마르게리따 피자\0";
	piz5 = "더블 포테이토 피자\0";


	printf("-------------------------------\n");
	printf("1. %s 13,900원 \n", piz1);
	printf("2. %s 14,900원 \n", piz2);
	printf("3. %s 12,900원 \n", piz3);
	printf("4. %s 12,900원 \n", piz4);
	printf("5. %s 13,900원 \n", piz5);
	printf("-------------------------------\n");
	printf("> 번호를 입력하세요. ");
	scanf_s("%d", &piznum);
	SU();

	if (piznum == 1) {
		price = 13900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", piz1, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (piznum == 2) {
		price = 14900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", piz2, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (piznum == 3) {
		price = 12900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", piz3, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (piznum == 4) {
		price = 12900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", piz4, sur, price * sur);
		printf("-------------------------------\n");
	}
	else if (piznum == 5) {
		price = 13900;
		printf("------------주문내역-----------\n");
		printf(" %s %d개 %d원\n", piz5, sur, price * sur);
		printf("-------------------------------\n");
	}
	else {
		printf("입력 오류로 프로그램이 종료됩니다.");
		return 0;
	}
}

void Pack() {
	printf("> 포장하시겠습니까?\n");
	printf("1. 포장 (1,000원이 추가됩니다.)\n");
	printf("2. 매장에서 식사\n");
	printf("-------------------------------\n");

		int choice3;
		choice3 = ReadInput();
		switch (choice3)
		{
		case 1:
			printf("총 금액은 %d원입니다.\n", (price * sur) + 1000);
			break;
		case 2:
			printf("총 금액은 %d원입니다.\n", price * sur);
			break;
		default:
			printf("입력 오류로 프로그램이 종료됩니다.");
			break;
		}
	static int cnt = 0;
	cnt++;
	printf("주문번호 > %3d\n", cnt);
}
