#include <iostream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <iomanip> 
using namespace std;

vector <int> podskazki2 = { 0 };  //наличие подсказок
vector <int> podskazki1 = { 0 };
vector <int> podskazki3 = { 0 };
bool flag = false;
int score_name1 = 0;  //количество монет первого
int score_name2 = 0;  //и второго игрока
int score_[15] = { 100, 200, 300, 500, 1000, 2000, 4000, 8000, 16000, 32000, 64000, 125000, 250000, 500000, 1000000 };
//хранение вопросов, ответов, правильных ответов
string voprosy[15] = { "Скорость чего в вакууме составляет 300 тысяч километров в секунду?", "Чему посвящены материалы, размещенные в сети бьюти-блогером?",
"Как называется повторный толчок, происходящий после сильного земле-\nтрясения?", "Какой инструмент упомянут в названии одного из бросков в хокее с шай-\nбой?",
"Какой греческий бог является аналогом древнеславянского Перуна?", "Какое ударение правильное?", "Что используют для обеззараживания?",
"Какого сахара не существует?", "Какой герой впервые появляется в книге, «пересчитывая ступеньки собст-\nвенным затылком»?",
"Кто придумал прорезиненную ткань, изделия из которой получили имя соз-\nдателя?", "В каком месяце, согласно календарю, в Южном полушарии наступает осень?",
"В каком городе недавно появилась скульптура из сомкнутых рук под наз-\nванием «Наводить мосты»?", "Что стало элементом логотипа чемпионата Европы по футболу, который \nпрошел в 2021 году?",
"Кто не имеет отношения к коням?", "Какой текст был отправлен в первом в истории СМС-сообщении?" };																							//																							
string otveti[15][4] = { {"a) звука", "b) света", "c) запаха", "d) вкуса"},
{"a) боксу и самбо", "b) икебане и флористике", "c) кино и театру", "d) косметике и макияжу"},
{"a) афтершок", "b) артишок", "c) штришок", "d) электрошок"},
{"a) лопата", "b) вила", "c) коса", "d) грабли"},
{"a) Аполлон", "b) Зевс", "c) Посейдон", "d) Гефест"},
{"a) грАффити", "b) куркУма", "c) мусоропрОвод", "d) катАлог"},
{"a) антифриз", "b) антиквариат", "c) антивещество", "d) антисептик"},
{"a) пальмового", "b) дубового", "c) свекловичного", "d) кленового"},
{"a) Пиноккио", "b) Питер Пэн", "c) Винни-Пух", "d) Незнайка"},
{"a) Реглан", "b) Френч", "c) Кардиган", "d) Макинтош"},
{"a) 1 марта", "b) 1 июня", "c) 1 сентября", "d) 1 декабря"},
{"a) Санкт-Петербург", "b) Амстердам", "c) Венеция", "d) Сан-Франциско"},
{"a) стена", "b) башня", "c) лестница", "d) мост"},
{"a) кентавр", "b) Пегас", "c) гиппогриф", "d) Минотавр"},
{"a) У Мери был барашек", "b) Счастливого Рождества", "c) Здравствуй, мир!", "d) Генрих Герц"} };																						//
char correct_otveti[15][2] = { {'b', 'B'},{'d', 'D'}, {'a', 'A'}, {'a', 'A'},
{'b', 'B'}, {'b', 'B'}, {'d', 'D'}, {'b', 'B'},
{'c' , 'C'}, {'d', 'D'}, {'a', 'A'}, {'c' , 'C'},
{'d', 'D'}, {'d', 'D'}, {'b', 'B'} };
void podskazka1() {
	int a = rand() % 100;
	int b = rand() % (100 - a);
	int c = rand() % (100 - a - b);
	int d = rand() % (100 - a - b - c);
	cout << "_____________________________________________________________________" << endl;
	cout << "\n\t\tИтоги голосования аудитории:" << endl;
	cout << "\t\tОтвет а: " << a << "% \t Ответ b: " << b << "%\n\t\tОтвет с: " << c << "% \t Ответ d: " << d << "%" << endl;
	podskazki1.erase(podskazki1.begin());
}
void podskazka3(int i) {
	cout << "\n\tКому вы будете звонить: ";
	string name_friend;
	cin >> name_friend;
	cout << "\t  Хорошо, мы звоним " << name_friend << "\n" << endl;
	cout << name_friend << ": Привет!" << endl;
	cout << "Вы: Привет. Мне нужна помощь, ответь на следующий вопрос:\n   " << voprosy[i] << endl;
	cout << "   Варианты ответов: " << otveti[i][0] << " " << otveti[i][1] << " " << otveti[i][2] << " " << otveti[i][3] << " " << "." << endl;
	cout << name_friend << ": Секунду, я подумаю." << endl;
	int l = rand() % 3;
	switch (l) {
	case 0:
		cout << name_friend << ": Я думаю это ответ А!" << endl;
		cout << "Вы: Спасибо, я попробую!" << endl;
		break;
	case 1:
		cout << name_friend << ": Я думаю это ответ B!" << endl;
		cout << "Вы: Спасибо, я попробую!" << endl;
		break;
	case 2:
		cout << name_friend << ": Я думаю это ответ C!" << endl;
		cout << "Вы: Спасибо, я попробую!" << endl;
		break;
	case 3:
		cout << name_friend << ": Я думаю это ответ D!" << endl;
		cout << "Вы: Спасибо, я попробую!" << endl;
		break;
	}
	podskazki3.erase(podskazki3.begin());
}

vector <int> obsh_vopros(vector <int> score_i, int score, int i) {
	cout << "\n\t\t  Вопрос №" << i + 1 << " на " << score_[i] << " монет:\n" << endl;														//вывод вопроса
	cout << voprosy[i] << "\n" << endl;
	if ((i == 5) || (i == 6) || (i == 10)) {
		cout << "\t  " << otveti[i][0] << " \t\t " << otveti[i][1] << "\n\t  " << otveti[i][2] << " \t " << otveti[i][3] << "\n" << endl;	//вывод ответов
	}
	else if (i == 14) {
		cout << "\t  " << otveti[i][0] << "  " << otveti[i][1] << "\n\t  " << otveti[i][2] << " \t " << otveti[i][3] << "\n" << endl;
	}
	else if (i == 11) {
		cout << "\t  " << otveti[i][0] << " \t " << otveti[i][1] << "\n\t  " << otveti[i][2] << " \t\t " << otveti[i][3] << "\n" << endl;
	}
	else if (i == 7) {
		cout << "\t  " << otveti[i][0] << " \t " << otveti[i][1] << "\n\t  " << otveti[i][2] << " \t " << otveti[i][3] << "\n" << endl;
	}
	else {
		cout << "\t  " << otveti[i][0] << " \t\t " << otveti[i][1] << "\n\t  " << otveti[i][2] << " \t\t " << otveti[i][3] << "\n" << endl;
	}
	cout << "  Введите ответ или воспользуйтесь подсказкой, введя 'p': ";
	char otvet;
kak1:
	cin >> otvet;
kak3:
	if (otvet == 'p' || otvet == 'P' || otvet == 'р' || otvet == 'Р') {
		cout << "\n\t  Введите номер подсказки или вернитесь назад \n(1. Помощь аудитории; 2. 50/50; 3. Звонок другу; 4. Вернуться назад): "; //ввод подсказки
		int p123;
	kak:
		cin >> p123;
		while ((p123 < 1) && (p123 > 4)) {
			if ((cin.fail()) || (p123 != 1) || (p123 != 2) || (p123 != 3) || (p123 != 4)) {  //проверка на правильность ввода
				cout << "Введите цифру от 1 до 4: ";
				cin.clear();
				cin.ignore(1000, '\n');
				goto kak;
			}
		}
		if (p123 == 1) {
			if (!(podskazki1.empty())) {         //подсказка Вопрос аудитории
				podskazka1();
				cout << "\n\t\t Введите ваш ответ: ";
				cin >> otvet;
				goto kak4;
			}
			else if (podskazki1.empty() && podskazki2.empty() && podskazki3.empty()) {
				cout << "\n\tУ вас уже нет ни одной подсказки. Введите ваш ответ: ";
				cin >> otvet;
				goto kak4;
			}
			else if (podskazki1.empty()) {
				cout << "Вы уже израсходовали эту подсказку. Введите номер другой подсказки: ";
				goto kak;
			}
		}
		else if (p123 == 2) {
			if (!podskazki2.empty()) {        //подсказка 50/50
			lol:
				int n = rand() % 3;
				char nn;
				switch (n) {
				case 0:
					nn = 'A';
					break;
				case 1:
					nn = 'B';
					break;
				case 2:
					nn = 'C';
					break;
				case 3:
					nn = 'D';
					break;
				}
				if (nn == correct_otveti[i][1]) {
					goto lol;
				}
				cout << "_____________________________________________________________________" << endl;
				cout << "\n\tОстаются ответы: " << correct_otveti[i][1] << " и " << nn << ". Какой выберите? ";
				cin >> otvet;
				podskazki2.erase(podskazki2.begin());
				goto kak4;
			}
			else if (podskazki1.empty() && podskazki2.empty() && podskazki3.empty()) {
				cout << "\n\tУ вас уже нет ни одной подсказки. Введите ваш ответ: ";
				cin >> otvet;
				goto kak4;
			}
			else if (podskazki2.empty()) {
				cout << "Вы уже израсходовали эту подсказку. Введите номер другой подсказки: ";
				goto kak;
			}
		}
		else if (p123 == 3) {                    //подсказка Звонок другу
			if (!(podskazki3.empty())) {
				podskazka3(i);
				cout << "\n\tВведите ваш ответ: ";
				cin >> otvet;
				goto kak4;
			}
			else if (podskazki1.empty() && podskazki2.empty() && podskazki3.empty()) {
				cout << "\n\tУ вас уже нет ни одной подсказки. Введите ваш ответ: ";
				cin >> otvet;
				goto kak4;
			}
			else if (podskazki3.empty()) {
				cout << "Вы уже израсходовали эту подсказку. Введите номер другой подсказки: ";
				goto kak;
			}
		}
		else if (p123 == 4) {
			cout << "\n\tВведите ваш ответ: ";
			goto kak1;
		}
	}
kak4:
	char correct_answer1 = correct_otveti[i][0];                  //правильный ответ или нет
	char correct_answer2 = correct_otveti[i][1];
	if (otvet == correct_answer1 || otvet == correct_answer2) {
		system("cls");
		cout << "\n\t\tПоздравляю, ваш ответ правильный" << endl;
		cout << "_____________________________________________________________________" << endl << endl;
		if (i < 14) {
			score = score_[i];
		}
		else {
			score = 1000000;
		}
		i += 1;
		cout << "\t\t  Вы заработали " << score << " монет" << endl;
		cout << "_____________________________________________________________________" << endl;
	}
	else if (otvet != 'a' && otvet != 'A' && otvet != 'b' && otvet != 'B' &&
		otvet != 'c' && otvet != 'C' && otvet != 'd' && otvet != 'D') {
		cout << "\n\t Неправильно введен ответ. Попробуйте снова: ";
		goto kak1;
	}
	else {
		cout << "____________________________________________________________________" << endl;
		cout << "\n\t\t    Ваш ответ неверный" << endl;
	}
	score_i.push_back(score);
	score_i.push_back(i);
	return score_i;
}

int main() {
	SetConsoleCP(1251);       //возможность ввода
	SetConsoleOutputCP(1251); //и вывода кириллицы
	srand(time(NULL));        //для рандома
	system("color BF");       //изменение консоли
	system("mode con cols=70 lines=28");
	char name1[20];
	string da;
	cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << endl;
	cout << " $                                                                  $ " << endl;
	cout << " $-------------------Кто хочет стать миллионером?-------------------$ " << endl;
	cout << " $                                                                  $ " << endl;
	cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << endl << endl;
	cout << " ____________________________________________________________________" << endl << endl;
	cout << " \t\t    Добро пожаловать в игру!" << endl;
	cout << " \t\t     Введите свое имя: ";
	cin >> name1;
	cout << endl;
	cout << " \t\t        Описание игры: " << endl;
	cout << " \tВсего 15 вопросов, каждый вопрос стоит определенной\n\t    суммы монет. Вы имеете три вида подсказок." << endl << endl;
	cout << " ____________________________________________________________________" << endl << endl;
	cout << " ********************************************************************" << endl;
	cout << "   Подсказка №1: Задать вопрос аудитории - спрашивается мнение людей" << endl;
	cout << "   Подсказка №2: 50/50 - исключает два неправильных ответа." << endl;
	cout << "   Подсказка №3: Позвонить другу - Вы можете позвонить другу, чтобы\n\t\t  он помог вам ответить на вопрос." << endl;
	cout << " ********************************************************************" << endl << endl;
	cout << " \t\t\t" << name1 << ", начнем?" << endl;
	cout << " \t\t   Введите 'да' для старта: " << "\n\t\t\t     ";
	goto po;
friend1:
	flag = true;
	char name2[20];
	cout << " ____________________________________________________________________" << endl << endl;
	cout << " \t\t    Добро пожаловать в игру!" << endl;
	cout << " \t\t     Введите свое имя: ";
	cin >> name2;
	cout << endl;
	cout << " \t\t        Описание игры: " << endl;
	cout << " \tВсего 15 вопросов, каждый вопрос стоит определенной\n\t    суммы монет. Вы имеете три вида подсказок." << endl << endl;
	cout << " _____________________________________________________________________" << endl << endl;
	cout << " *********************************************************************" << endl;
	cout << "   Подсказка №1: Задать вопрос аудитории - спрашивается мнение людей" << endl;
	cout << "   Подсказка №2: 50/50 - исключает два неправильных ответа." << endl;
	cout << "   Подсказка №3: Позвонить другу - Вы можете позвонить другу, чтобы\n\t\t  он помог вам ответить на вопрос." << endl;
	cout << " *********************************************************************" << endl << endl;
	cout << " \t\t\t" << name2 << ", начнем?" << endl;
	cout << " \t\t   Введите 'да' для старта: " << "\n\t\t\t    ";
po:
	cin >> da;
	system("cls");
	if ((da == "да") || (da == "Да") || (da == "ДА") || (da == "дА")) {
		goto po1;
	}
	else if ((da != "да") && (da != "Да") && (da != "ДА") && (da != "дА")) {
		cout << "Введите 'да', когда будете готовы" << endl;
		goto po;
	}
po1:
	if (podskazki1.empty()) {        //все ли подсказки есть
		podskazki1.push_back(0);
	}
	if (podskazki2.empty()) {
		podskazki2.push_back(0);
	}
	if (podskazki3.empty()) {
		podskazki3.push_back(0);
	}
	int i = 0;
	int score = 0;
	int score_old = 0;

	for (int j = 0; j < 15; j++) {
		vector <int> score_i = obsh_vopros(score_i, score, i);
		score = score_i[0];
		i = score_i[1];
		if ((score == score_old) && (score_old < score_[4])) {   //ответ неверный и человек не дошел до 5 вопроса
			if (flag == false) {
				cout << "\n\t\t     Спасибо за игру!" << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Начать заново.\n\t    2. Посоревноваться со своим другом.\n\t    3. Выйти." << "\n\t    ";
				int nomer;
			once_again1:
				cin >> nomer;
				switch (nomer) {
				case 1:
					system("cls");
					goto po1;
				case 2:
					system("cls");
					score_name1 = score;
					goto friend1;
				case 3:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again1;
				}
			}
			else {
				cout << "\n\t\t     Спасибо за игру!" << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Сравнить результаты.\n\t    2. Выйти." << "\n\t    ";
				int nomer;
			once_again2:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					score_name2 = score;
					if (score_name1 > score_name2) {
						cout << "\n\t\t\t" << name1 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 < score_name2) {
						cout << "\n\t\t\t" << name2 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 == score_name2) {
						cout << "\n\t\t\t  Ничья!\n" << endl;
						break;
					}
				case 2:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again2;
				}
			}
		}
		else if ((score > score_old) && (score_old <= score_[4])) { //количество монет изменилось
			if (flag == false) {
				score_name1 = score;
			}
			else {
				score_name2 = score;
			}
			score_old = score;
			continue;
		}
		else if ((score == score_old) && ((score_old >= score_[4]) && (score_old < score_[9]))) { //ответ неверный и человек между 5 и 10 вопросом
			if (flag == false) {
				cout << "\n\t   Спасибо за игру! Вы выиграли 1000 монет!" << endl;
				cout << " _____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Начать заново.\n\t    2. Посоревноваться со своим другом.\n\t    3. Выйти." << "\n\t    ";
				int nomer;
			once_again3:
				cin >> nomer;
				switch (nomer) {
				case 1:
					system("cls");
					goto po1;
				case 2:
					system("cls");
					score_name1 = score;
					goto friend1;
				case 3:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again3;
				}
			}
			else {
				cout << "\n\t   Спасибо за игру! Вы выиграли 1000 монет!" << endl;
				cout << " _____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Сравнить результаты.\n\t    2. Выйти." << "\n\t    ";
				int nomer;
			once_again4:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					score_name2 = score;
					if (score_name1 > score_name2) {
						cout << "\n\t\t\t" << name1 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 < score_name2) {
						cout << "\n\t\t\t" << name2 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 == score_name2) {
						cout << "\n\t\t\t  Ничья!\n" << endl;
						break;
					}
				case 2:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again4;
				}
			}
		}
		else if ((score > score_old) && ((score_old >= score_[4]) && (score_old <= score_[9]))) { //количество монет изменилось
			if (flag == false) {
				score_name1 = score;
			}
			else {
				score_name2 = score;
			}
			score_old = score;
			continue;
		}
		else if ((score == score_old) && (score_old >= score_[9])) { //ответ неверный и человек между 10 и 15 вопросом
			if (flag == false) {
				cout << "\n\t   Спасибо за игру! Вы выиграли 32000 монет!" << endl;
				cout << " _____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Начать заново.\n\t    2. Посоревноваться со своим другом.\n\t    3. Выйти." << "\n\t    ";
				int nomer;
			once_again5:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					goto po1;
				case 2:
					system("cls");
					score_name1 = score;
					goto friend1;
				case 3:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again5;
				}
			}
			else {
				cout << "\n\t   Спасибо за игру! Вы выиграли 32000 монет!" << endl;
				cout << " _____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Сравнить результаты.\n\t    2. Выйти." << "\n\t    ";
				int nomer;
			once_again6:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					score_name2 = score;
					if (score_name1 > score_name2) {
						cout << "\n\t\t\t" << name1 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 < score_name2) {
						cout << "\n\t\t\t" << name2 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 == score_name2) {
						cout << "\n\t\t\t  Ничья!\n" << endl;
						break;
					}
				case 2:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again6;
				}
			}
		}
		else if ((score > score_old) && ((score_old >= score_[9]) && (score < score_[14]))) { //количество монет изменилось
			if (flag == false) {
				score_name1 = score;
			}
			else {
				score_name2 = score;
			}
			score_old = score;
			continue;
		}
		else if (score == score_[14]) { //человек выиграл
			if (flag == false) {
				cout << "\n\t  Спасибо за игру! Поздравляю, Вы стали миллионером!" << endl;
				cout << "_____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Начать заново.\n\t    2. Посоревноваться со своим другом.\n\t    3. Выйти." << "\n\t    ";
				int nomer;
			once_again7:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					goto po1;
				case 2:
					system("cls");
					goto friend1;
				case 3:
					system("cls");
					break;
				default:
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again7;
				}
			}
			else {
				cout << "\n\t  Спасибо за игру! Поздравляю, Вы стали миллионером!" << endl;
				cout << "_____________________________________________________________________" << endl << endl;
				cout << "\t   Выберите дальнейшие действие и введите номер\n\t    1. Сравнить результаты.\n\t    2. Выйти." << "\n\t    ";
				int nomer;
			once_again8:
				cin >> nomer;

				switch (nomer) {
				case 1:
					system("cls");
					score_name2 = score;
					if (score_name1 > score_name2) {
						cout << "\n\t\t\t" << name1 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 < score_name2) {
						cout << "\n\t\t\t" << name2 << ", Вы победили!\n" << endl;
						break;
					}
					else if (score_name1 == score_name2) {
						cout << "\n\t\t\t  Ничья!\n" << endl;
						break;
					}
				case 2:
					system("cls");
					break;
				default:
					system("cls");
					cout << "\n\t\tВведите корректный ответ: ";
					goto once_again8;
				}
			}
		}
		return 0;
	}
}
