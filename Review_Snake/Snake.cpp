#include "Turboc.h"

#define QS 1600
#define putchxy(x,y,ch) { gotoxy(x,y);_putch(ch); }
using namespace std;

void InitStage(int stage);// �������� �ʱ�ȭ
BOOL MoveSnake();// ���� �̵�
void ProcessKey();
int getchcon(int x, int y);
void waitanykey();

struct tag_Point {
    int x, y;
};
tag_Point snake[QS]; // tag_Point���� ����ü �迭 ������ũ[1600]
tag_Point now; // x,y���� ������ tag_Point���� ����ü now����
int head, tail;
int inctail;
enum tag_Dir { LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };
tag_Dir dir; // ������ ����Ű�� �������� tag_dir ����;
int life;
int maxnumber;
int speed;
int multi;
int stage;

void main()
{
    int number;
    int ch;
    int x, y;

    life = 5;
    randomize(); // ==  srand((unsigned)time(NULL));
    setcursortype(NOCURSOR); // Ŀ�� �����
    for (;;) { // ���ѹݺ� 
        InitStage(stage); //  maxnumber; speed; multi; �������� ���� ���⼭ ��������/.
        gotoxy(0, 23); printf("�������� : %d", stage + 1);
        gotoxy(20, 23); printf("���� �� : %d", life);
        for (number = 0; number < maxnumber; number++)
        {
            gotoxy(40, 23); printf("���� ���� : %d ", maxnumber - number);
            gotoxy(60, 23); printf("���� ���� : 2 ");
            // ������ �ڸ��� ���ο� ���ڸ� �����Ѵ�.
            do {
                x = random(80); // == rand % 80 == 0~79
                y = random(22); // == rand & 22 == 0~21
            } while (getchcon(x, y) != ' '); // getchcon�� �Ű������� �ѱ� x,y��ġ�� ����� ���ڸ� return�ϴ� �Լ�, �ش� ��ġ�� ���ڰ� ' '(����)�� �ƴϸ�
            gotoxy(x, y); // x,y��ġ�� ����
            printf("%d", random(9) + 1);  // rand % 9(0~8) + 1 == 1 ~ 9;


            if (number == 0) { //���ӽ��� �����̸�
                ch = _getch(); // Ű�Է��� 1�� �޴´�
                if (ch == 0xE0) { // Ű�Է��� �����̽����̸�
                    _getch(); // Ű �Է��� 1�� �޴´�
                }
                else {
                    if (ch == 27) { // ch�� �ƽ�Ű�ڵ� �� 27(ESC)�̸� 
                        setcursortype(NORMALCURSOR); // Ŀ���� �븻 Ŀ���� �ٲٰ�
                        exit(0); // ������ �����Ѵ�/.
                    }
                    if (tolower(ch) == 'n') { // (ch�� �빮���̸� �ҹ��ڷ� �ٲٰ�), ch�� 'n'�̸� 
                        stage = (stage == 4 ? 0 : stage + 1); // stage�� stage�� 4�̸� 0���� �ٲٰ�, �ƴϸ� ���������� 1�ܰ� �ø���. 
                        break; // �� ���� ���������� �Ѿ�� Ű == n�̴�.
                    }
                    if (tolower(ch) == 'p') { // (ch�� �빮���̸� �ҹ��ڷ� �ٲٰ�), ch�� 'p'�̸� 
                        stage = (stage == 0 ? 4 : stage - 1); // stage�� stage�� 0�̸� 4�� �ٲٰ�, �ƴϸ� ���������� 1�ܰ� ������. 
                        break; // �� ���� ���������� �Ѿ�� Ű == p�̴�.
                    }
                }
            }

            // �� �̵� ����
            if (MoveSnake() == TRUE) // MoveSnake���� ���� ���� ���� // ���� �� or ������ �ε����� �ƴϸ�, ����(����)�� �ε��� ����̴�. �׷��� for(;;)���ѹݺ��Լ��� MoveSnake�� Ż���ϰ�, for (number = 0; number < maxnumber; number++)�� �۵�, ���� ���� ������ 1�� �����Ѵ�.
            { // ���� ���̳� �ڱ� ������ �ε�����, BOOL�Լ��� MoveSnake�Լ��� TRUE���� ��ȯ�Ѵ�.
               /* �ּ� ó���� �κ��� �ش� �κ��̴�.
                    if (headch == 'M' || headch == '#') {
                    return TRUE;
                }*/
                if (--life == 0) {
                    gotoxy(12, 20);
                    puts("������ �������ϴ�. �׸� ��� ������ �����ϼ���.");
                    return; // �ݺ��� ���� Ż�� // ������� for���� 2���̴�.
                }
                delay(1500); // life ������ 0�� �ƴϸ� 1.5�� ������ ��, �ݺ��� 1�� Ż��
                break; // �ݺ��� 1�� Ż�� == ���� �����
            }
        }
        if (number == maxnumber) { // ������ number�� stage���� �Ҵ�� maxnumber�� ������ ��������
            gotoxy(12, 20);
            puts("�����մϴ�. �ƹ� Ű�� �����ø� ���� ���������� ���ϴ�.");
            waitanykey(); // Ű�Է� ���
            stage++; // ���������� 2�ܰ� �����Ѵ�.
        }
    }
}

// �������� �ʱ�ȭ
void InitStage(int stage)
{
    int i;

    clrscr();
    snake[0].x = 5; snake[0].y = 5; // �첿��
    snake[1].x = 6; snake[1].y = 5; // �첿��
    snake[2].x = 7; snake[2].y = 5; // ��Ӹ�
    gotoxy(5, 5); puts("##S"); // ���� �� ���

    // �������
    head = 2; // �Ӹ��� 2
    tail = 0; // ������ 0
    inctail = 0;
    now.x = 7; // ���� �Ӹ� ��ġ 
    now.y = 5; // ���� �Ӹ� ��ġ 
    dir = RIGHT; //����
    // ��������� ó�� ���� �������� ��, ���� ũ��� ��ġ �׸��� ���� �����̴�.

    // �ٱ��� ���� �׸���.
    for (i = 0; i < 80; i++) {
        putchxy(i, 0, 'M');
        putchxy(i, 22, 'M');
    }

    for (i = 0; i < 23; i++) {
        putchxy(0, i, 'M');
        putchxy(79, i, 'M');
    }

    // ������������ ��ֹ��� ������ �׸��� ���̵��� �����Ѵ�.
    switch (stage) {
    case 0: // ���������� 0�̸�
        maxnumber = 5; speed = 150; multi = 3;  // �������� // �ӵ� // ���̸� ������ ���̼��� * multi(3)
        for (i = 30; i <= 50; i++) { putchxy(i, 11, 'M'); } //  �߰� ���� �����
        break;
    case 1:
        maxnumber = 10; speed = 100; multi = 5;
        for (i = 20; i <= 60; i++) { putchxy(i, 7, 'M'); putchxy(i, 14, 'M'); }
        break;
    case 2:
        maxnumber = 15; speed = 80; multi = 6;
        for (i = 20; i < 60; i++) { putchxy(i, 11, 'M'); }
        for (i = 6; i <= 16; i++) { putchxy(40, i, 'M'); }
        break;
    case 3:
        maxnumber = 20; speed = 60; multi = 7;
        for (i = 20; i < 60; i++) {
            if (i < 30 || i > 50) {
                putchxy(i, 7, 'M');
                putchxy(i, 14, 'M');
            }
        }
        for (i = 7; i < 15; i++) { putchxy(20, i, 'M'); putchxy(60, i, 'M'); }
        break;
    case 4:
        maxnumber = 1970; speed = 50; multi = 9;
        break;
    }
}

// ���� �̵���Ų��. �׾����� TRUE�� �����Ѵ�.
BOOL MoveSnake() // �ٽ� // ����� �ڡڡڡ١�
{
    int headch;
    int len;
    int prev;

    for (;;) { // ���ѹݺ�
        gotoxy(60, 23); // Ŀ�� �̵�
        len = head - tail; // �Ӹ� - ���� // ó�� �Ӹ� 2, ���� 0 // �� ó�� ���̴� 2
        if (len < 0) len += QS;  //
        printf("���� ���� : %d ", len);
        ProcessKey(); // Ű�Է� �޴� �Լ�
        gotoxy(60, 25); // Ŀ�� �̵�
        printf("tail : %d ", tail);
        gotoxy(60, 27); // Ŀ�� �̵�
        printf("head : %d ", head);
        gotoxy(60, 29); // Ŀ�� �̵�
        printf("inctail : %d ", inctail);

        switch (dir) {
        case LEFT:
            now.x--;// tag_Point���� now����ü, x���� -1�Ѵ�. ������ x-1
            break;
        case RIGHT:
            now.x++;
            break;
        case UP:
            now.y--; // y-1�� ����
            break;
        case DOWN:
            now.y++;
            break;
        }

        // �Ӹ� ��ĭ ����
        head = (head == QS - 1 ? 0 : head + 1); // �Ӹ��� QS-1�� ������, �Ӹ��� 0, �ƴϸ� �Ӹ� +1
        // head�� 1599�̸�, head�� 0���� ���� ������ �������� ���ش�. snake[1600]�̹Ƿ� 1599. 

        snake[head] = now; // �Ӹ��� ��ǥ��, snake[head]�迭�� �ִ´�. 

        if (inctail == 0) { //inctail�� 0�̸� �۵��Ѵ�.

            // tail�� 1599�̸�, tail�� 0���� ���� ������ �������� ���ش�. snake[1600]�̹Ƿ� 1599. 
            tail = (tail == QS - 1 ? 0 : tail + 1); // tail���� +1

            // �� ���ڸ� �Ծ�  inctail�� �����ϸ�, tail������ ������ ���߰�, head������ ��� +1 ����. 
            // head-tail == �����̴�.

        }
        else {
            inctail--; //inctali�� 1 ���ҽ�Ų��.
        }

        // �Ӹ��� �׸��� ���� �Ӹ� ��ġ�� ���ڸ� �̸� �о� ���ƾ� �Ѵ�.
        headch = getchcon(now.x, now.y); // headch�� �Ӹ��� �׸��� ��, �ش� ��ġ�� ����� ���ڸ� �о�� ������ �����̴�.
        putchxy(snake[head].x, snake[head].y, 'S'); // �Ӹ��� �׸���. 

        //head�� 0�̸�, ���� ��ġ�� 1599�̹Ƿ�. head�� 0�̸� ���� ��ġ�� 1599�� #�� �׷��ش�.
        prev = (head == 0 ? QS - 1 : head - 1); // �׸���, �Ӹ����� 1�� �� ���� prev�� ���� /
        putchxy(snake[prev].x, snake[prev].y, '#'); // �Ӹ� -1 �迭��  x.y���� #(����)�� �׸�

        //tail�� 0�̸�, ���� ��ġ�� 1599�̹Ƿ�. tail�� 0�̸� ���� ��ġ�� 1599�� ' '���� �����ش�.
        prev = (tail == 0 ? QS - 1 : tail - 1); // tail���� 1�� �� ���� prev�� �ִ´�.
        putchxy(snake[prev].x, snake[prev].y, ' '); //  snake[prev]�迭��  x.y���� ' '�� �׸� (�ʱ�ȭ)

        // inctail = ����*x. ictail�� 0�� �ɶ����� tail�� ���߰� ���� �������.
        // ���� tail���� -1�� �� ���� ���� �� ���κ�(���̸� ���� �κ�)�� ����� ���̴�.
        // inctail = 5*3 == head+15 && tail+0�� �����̰� 10�� �þ ��.
        // ó���� �����Ÿ� ���� �����̴� head - tail == 18 - 1 == ���� �� ���̴� 17 
        // ���� ���� �Ӹ��� 18��°�� �ִ� �ڸ��� �������� ���� ���̰� 17�� �ǹǷ�, snake(tail-1)�� �����.


        // ���� ��ġ�� ������ �ƴϸ� ��򰡿� �ε��� ����
        if (headch != ' ') { // ���� �Ӹ��� �׸����� x.y���� ����� ���ڸ� headch�� ����. headch�� ' '�� �ƴϸ� break�� for�� Ż��.
            break;
        }
        delay(speed); // speed������ŭ �����̸� �ֱ�
    }

    // ���̳� �ڱ� ������ �ε������� ���� ����
    if (headch == 'M' || headch == '#') { // headch ����� ����, 'M'�̳� '#'�̸�
        return TRUE; // true�� ��ȯ -- 
    }
    // headch���� '0'�� ��rh int���� multi�� ���ϸ� stage���� ������ ���� * ���� ������ ����ŭ inctail�� �����Ѵ�.

    inctail += (headch - '0') * multi; //��������
    return FALSE; // false�� ��ȯ
}

// Ű �Է��� ó���Ѵ�.
void ProcessKey()
{
    int ch;

    if (!_kbhit()) {//Ű�����Է¹��ۿ� ���� �ִ��� Ȯ�� 
        return;
    }
    ch = _getch();
    if (ch == 0xE0 || ch == 0) {
        //����Ű �ܿ� �ٸ� �Է��� ������ ���� ������
        ch = _getch();
        switch (ch) {
        case LEFT:
            // ���� �ݴ� �������δ� ��ȯ�� �� ����.
            if (dir != RIGHT) dir = LEFT; // ������ȯ
            break;
        case RIGHT:
            if (dir != LEFT) dir = RIGHT;
            break;
        case UP:
            if (dir != DOWN) dir = UP;
            break;
        case DOWN:
            if (dir != UP) dir = DOWN;
            break;
        }
    }
    else {
        switch (tolower(ch)) { // ch�� �빮�ڸ� �ҹ��ڷ� �ٲ۴�
        case 27: // esc �� ������ 
            setcursortype(NORMALCURSOR); //Ŀ���� Ÿ���� �Ϲ� Ŀ���� �ٲ۴�
            exit(0); // ����
        case ' ': // ' ' �����̽��ٸ� ������
            waitanykey(); // ������ Ű�� �ϳ� ������ ������ ��� // ���̺귯�� ���� X, ��ü ����
            break;
        }
    }
}

// ȭ���� x,y��ġ�� �ִ� ���ڸ� �����Ѵ�.
int getchcon(int x, int y)// headch ����
{
    COORD Cur; // ����ü��  x.y  ���� �ְ�
    Cur.X = x;
    Cur.Y = y;
    TCHAR Char; // ���ϰ�
    DWORD dwRead; // DWORD ���� �ý����� ��Ȱ��,  word == 16��Ʈ, dword 32��Ʈ, qword 64��Ʈ

    ReadConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), // �����ؼ� ���ۿ� �ִ� ���ڸ� �����ϴ� �Լ�
        &Char, 1, Cur, &dwRead);
    // (�ڵ�, ���� ���ڸ� �޴� ������, ���� ������ ����, ���� ù ��° ���� ��ǥ ��)
    return Char; // �ش� ��ǥ���� ���� ���ڸ� ���� �Ѵ�.
}

// ������ Ű �ϳ��� ������ ������ ����Ѵ�.
void waitanykey()
{
    int ch;

    ch = _getch(); // Ű �Է� �ϳ��� �޴´�.
    if (ch == 0xE0 || ch == 0) { 
        //�⺻Ű�����Է� �ܿ� �ٸ� �Է��� ������ ���� ������
        _getch(); //���۰� �����
    }
}