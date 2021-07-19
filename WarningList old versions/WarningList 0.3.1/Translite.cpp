#include "Translite.h"


enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magneta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagneta = 13,
	Yellow = 14,
	White = 15
};

void SytColor(int text, int bg)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

enum class score { two = 2, three, four, five };

void introR()
{
	cout << endl;
	cout << "\t\t\t\t.___________________________." << endl;
	cout << "\t\t\t\t|WarningList 0.3.1 BASIC    |" << endl;
	cout << "\t\t\t\t|�������� ����������        |" << endl;
	cout << "\t\t\t\t|������ AMPrograms          |" << endl;
	cout << "\t\t\t\t.---------------------------." << endl;
	cout << "\t\t\t\t      .______________." << endl;
	cout << "\t\t\t\t      |1)�����       |" << endl;
	cout << "\t\t\t\t      |2)�����       |" << endl;
	cout << "\t\t\t\t      |3)�����       |" << endl;
	cout << "\t\t\t\t      |4)����������  |" << endl;
	cout << "\t\t\t\t      .--------------." << endl;
}
void TranseleteR(int h)
{
	if (h == 1)
	{
		main();
	}
}
void BackEventR(int d)
{
	cout << "<------" << endl;
	cout << "1) �����" << endl;
	cin >> d;
	if (d == 1)
	{
		system("cls");
		introR();
	}
	else
	{
		cin >> d;
	}
}
class UserR //User Information
{
public:
	UserR(string h,string j,int d) : name(h),family(j),ID(d)
	{

	}
	void Tabl()
	{
		cout << "._____________________________." << endl;
		cout << "|��� ���: " << name << endl;
		cout << "|���� �������: " << family << endl;
		cout << "|���� ID - " << ID << endl;
		cout << "._____________________________." << endl;
	}
	void SetID(int id)
	{
		this->ID = id;
	}
	int GetID()
	{
		return ID;
	}
private:
	int ID;
	string name;
	string family;
};

int Translite()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, family;
	int id = rand() % 10000;
	int totalScore, totalResult, CorrectResult;
	int arrx = 0;
	int correct;
	int hit, hit2;
	int enter1 = 0, enter2, enter3 = 0, enter4;
	double warning = 0;
	double Count = 0; // ����� ������ ���������� ������
	double result; // ����� ���������(������� ����)
	const int suze = 14;
	double ryr[suze]{};
	const int size = 14;
	string arr[size]{ "����������: ", "������� ����: ", "������: ", "�������: ","���������� ����: ","�����: ","����������: ","��������������: ","��������: ","���������: ","���: ","�����������: ","��������� ������������: ","�����������: " };
	introR();
	cin >> enter1;
	while (enter1 != 1)
	{
		if (enter1 == 2)
		{
			cout << "�����..." << endl;
			return 0;
		}
		else if (enter1 == 3)
		{
			system("cls");
			cout << "\t\t\t\t     ����� *����*" << endl;
			cout << "\t\t\t\t     .------------." << endl;
			cout << "\t\t\t\t     |1)����      |" << endl;
			cout << "\t\t\t\t     |2)�������   |" << endl;
			cout << "\t\t\t\t     |3)����������|" << endl;
			cout << "\t\t\t\t     .------------." << endl;
			cin >> enter4;
			TranseleteR(enter4);
			BackEventR(enter3);
			cin >> enter1;
		}
		else if (enter1 == 4)
		{
			system("cls");
			cout << "\t\t\t\t     �������������� ����" << endl;
			cout << "\t\t\t\t  .-------------------------." << endl;
			cout << "\t\t\t\t  |1)���������� �� ������   |" << endl;
			cout << "\t\t\t\t  |2)�� ������������        |" << endl;
			cout << "\t\t\t\t  |3)��� ����� WarningList? |" << endl;
			cout << "\t\t\t\t  .-------------------------." << endl;
			cin >> enter2;
			switch (enter2)
			{
			case 1:
				cout << "\t\t\t .------------------------------------------------." << endl;
				cout << "\t\t\t |�������� - WarningList                          |" << endl;
				cout << "\t\t\t |������ - 0.3.1 Basic                            |" << endl;
				cout << "\t\t\t |id - 30032021                                   |" << endl;
				cout << "\t\t\t |����������:                                     |" << endl;
				cout << "\t\t\t |����������� - ������ �� ������ �����            |" << endl;
				cout << "\t\t\t .------------------------------------------------." << endl;
				BackEventR(enter3);
				cin >> enter1;
				break;
			case 2:
				cout << "\t\t\t.-----------------------------------------------------------." << endl;
				cout << "\t\t\t|������������! ���� ����� ���������, ��� ��� ������ ������. |" << endl;
				cout << "\t\t\t|�� �������� ������ ���� �� ���� ������ ��������,� �� ����� |" << endl;
				cout << "\t\t\t|RPG BASIC � Snake. � ��� ������������ ��� ���� � 3 ������. |" << endl;
				cout << "\t\t\t|��� �������� ������������� ��� C++, C(�������),�           |" << endl;
				cout << "\t\t\t|C#(3 - 6 ������). ���������� ������ ��������� �������     |" << endl;
				cout << "\t\t\t|�� ��� ����...                                             |" << endl;
				cout << "\t\t\t.-----------------------------------------------------------." << endl;
				BackEventR(enter3);
				cin >> enter1;
				break;
			case 3:
				cout << "\t\t\t.------------------------------------------------------." << endl;
				cout << "\t\t\t|WarningList - ��� ���������                           |" << endl;
				cout << "\t\t\t|������� ��������� ���� ������� ���� ,���� ����� �����|" << endl;
				cout << "\t\t\t|��� ��������� ������ ������� ��� ����������          |" << endl;
				cout << "\t\t\t|� ���������.                                          |" << endl;
				cout << "\t\t\t.------------------------------------------------------." << endl;
				BackEventR(enter3);
				cin >> enter1;
				break;
			default:
				cin >> enter2;
				break;
			}

		}
	}
	if (enter1 == 1)
	{
		cout << "��������..." << endl;
		cout << "\t\t\t._________________________________________________." << endl;
		cout << "\t\t\t";
		for (int f = 0; f < 50; f++)
		{

			SytColor(0, 15);
			cout << " ";
			SytColor(15, 0);
			Sleep(100);
		}
		cout << endl;
		cout << "\t\t\t.-------------------------------------------------." << endl;
		system("cls");
	}
	cout << "WarningList 0.3.1 BASIC" << endl;
	cout << ".__________________________." << endl;
	cout << "|������� ��� ��������/���������: ";
	cin >> name;
	cout << "|������� ������� ��������/���������: ";
	cin >> family;
	while (name == family)
	{
		cout << "������! ��� � ������� ���������!" << endl;
		cout << "|������� ��� ��������/���������: ";
		cin >> name;
		cout << "|������� ������� ��������/���������: ";
		cin >> family;
	}
	cout << "|��� ID: " << "#" << id << "|" << endl;
	cout << ".--------------------------." << endl;
	UserR user(name, family, id);
	Sleep(300);
	system("cls");

	int* d_syze = new int[arrx]; // ���������� �������� ������

	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	*/

	cout << "������� ���� ������: " << endl;

	for (int c = 0; c < size; c++)
	{
		user.Tabl();
		for (int h = 0; h < size; h++)
		{
			cout << "|" << arr[h] << " = " << ryr[h] << "\t|" << endl;
		}
		cout << ".------------------------------" << endl;
		cout << arr[c] << endl;
		cout << "--------------------" << endl;
		cout << "|������� ���������� ������: " << endl;
		cin >> arrx;
		while (arrx < 3)
		{
			SytColor(4, 0);
			cout << ".________________________________________________." << endl;
			cout << "|������! ���� ���������� ������ ����� ���������! |" << endl;
			cout << "|����������, ������� ���������� ������ ��������: |" << endl;
			cin >> arrx;
			cout << ".------------------------------------------------." << endl;
			SytColor(15, 0);
		}
		cout << "--------------------" << endl;


		for (int i = 0;i < arrx; i++)
		{
			cout << "������� ������: " << endl;
			cin >> d_syze[i];
			switch (d_syze[i])
			{
			case 2:
				score::two;
				break;
			case 3:
				score::three;
				break;
			case 4:
				score::four;
				break;
			case 5:
				score::five;
				break;
			}
			while (d_syze[i] <= 1 || d_syze[i] > 5)
			{
				cout << "������! ������������ �����! " << endl;
				d_syze[i] = NULL;
				cin >> d_syze[i];
			}

			Count += d_syze[i];


		}
		cout << "������ �������� ���������? " << endl;
		cout << "1) �� " << endl;
		cout << "2) ��� " << endl;
		cin >> CorrectResult;
		if (CorrectResult == 1)
		{
			Count = NULL;
			for (int i = 0;i < arrx; i++)
			{
				cout << "������� ������: " << endl;
				cin >> d_syze[i];
				switch (d_syze[i])
				{
				case 2:
					score::two;
					break;
				case 3:
					score::three;
					break;
				case 4:
					score::four;
					break;
				case 5:
					score::five;
					break;
				}

				if (d_syze[i] == 1 || d_syze[i] > 5)
				{
					cout << "������! ������������ �����! " << endl;
					d_syze[i] = NULL;
					cin >> d_syze[i];
				}

				Count += d_syze[i];


			}
		}

		// Count = d_syze[0] + d_syze[1] + d_syze[2] + d_syze[3] + d_syze[4];

		result = Count / arrx;


		ryr[c] = result;


		if (ryr[c] <= 2.5)
		{
			SytColor(4, 0);
			cout << "���� ������� ���� = " << result << endl;
			cout << "��������!!! ������� ���� ����� ������! " << endl;
			for (; warning < 2.6; )
			{
				warning = (Count + 3) / (arrx + 1);
				Count += 3;
				arrx += 1;
				cout << "���� �����: " << 3 << " ��� " << warning << endl;

			}
			warning = NULL;
			SytColor(15, 0);
			getch();
		}
		else if (ryr[c] <= 3.5)
		{
			SytColor(14, 0);
			cout << "���� ������� ���� = " << result << endl;
			cout << "��������! ������� ���� ����� 3!" << endl;
			for (; warning < 3.6; )
			{
				warning = (Count + 4) / (arrx + 1);
				Count += 4;
				arrx += 1;
				cout << "���� �����: " << 4 << " ��� " << warning << endl;
			}
			warning = NULL;
			SytColor(15, 0);
			getch();
		}
		else if (ryr[c] <= 4.5)
		{
			SytColor(10, 0);
			cout << "���� ������� ���� = " << result << endl;
			cout << "��������! ������� ���� ����� 4!" << endl;
			for (; warning < 4.6; )
			{
				warning = (Count + 5) / (arrx + 1);
				Count += 5;
				arrx += 1;
				cout << "���� �����: " << 5 << " ��� " << warning << endl;
			}
			warning = NULL;
			SytColor(15, 0);
			getch();
		}
		else
		{
			SytColor(3, 0);
			cout << "���� ������� ���� = " << result << endl;
			cout << "� ���� �� ������ �������! ;) " << endl;
			SytColor(15, 0);
			getch();
		}


		Count = NULL;
		system("cls");
	}

	cout << endl;

	totalScore = ryr[0] + ryr[1] + ryr[2] + ryr[3] + ryr[4] + ryr[5] + ryr[6] + ryr[7] + ryr[8] + ryr[9] + ryr[10] + ryr[11] + ryr[12] + ryr[13]; // ����� ����� ���� ��������� 
	totalResult = totalScore / 14; // ����� ������� ����
	switch (totalResult)
	{
	case 2:
		SytColor(4, 0);
		cout << "���� ����� ������� ����(����������)" << totalResult << endl;
		SytColor(15, 0);
		break;
	case 3:
		SytColor(14, 0);
		cout << "���� ����� ������� ����(����������) " << totalResult << endl;
		SytColor(15, 0);
		break;
	case 4:
		SytColor(2, 0);
		cout << "���� ����� ������� ����(����������) " << totalResult << endl;
		SytColor(15, 0);
		break;
	case 5:
		SytColor(3, 0);
		cout << "���� ����� ������� ����(����������) " << totalResult << endl;
		SytColor(15, 0);
		break;
	}
	cout << "�������� ����������: " << endl;
	cout << "._____________________________________." << endl;
	cout << "|��� ���: " << name << "\t|" << endl;
	cout << "|���� �������: " << family << "\t|" << endl;
	cout << "|���� ID: " << id << "\t|" << endl;
	cout << "|���� ����� ������� ����(����������): " << totalResult << "\t|" << endl;
	cout << "|������������: " << "\t|" << endl;
	cout << ".-------------------------------------." << endl;
	delete[] d_syze;
	return 0;
}