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

void introR(string logo, string f, int cF, int cW)
{
	SytColor(cF, cW);
	system("mode con cols=140 lines=31");
	fstream lg;
	lg.open(logo, fstream::in | fstream::out | fstream::app);

	while (!lg.eof())
	{

		getline(lg, f);

		cout << f << endl;

	}

}
void TranseleteR(int h)
{
	if (h == 1)
	{
		main();
	}
}
void BackEventR(int d, string f, string g, int CF, int CW)
{
	cout << "<------" << endl;
	cout << "1) �����" << endl;
	cin >> d;
	if (d == 1)
	{
		system("cls");
		introR(f, g, CF, CW);
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
	int id = rand() % 10000;
	string bd = "BD.txt";
	string logos = "Logo.txt";
	string info = "Information.txt";
	string options = "Options.txt";
	string files = "Files.txt";
	string str, msg, ftr, ltr, ntr, mtr, ktr;
	char ch, ce;
	fstream fs;
	fstream fe;
	fstream le;
	fstream ne;
	fstream me;
	fstream ke;
	string ster, stry;
	int totalScore, totalResult, CorrectResult;
	int y = 0, x, selectdata, savedata, loaddata, deletedata, save = 0, i = 0, e = 0;
	const int size = 10;
	bool exit = false;
	string name, family;
	string newname, addname;
	int arrx = 0;
	int correct;
	int colorW = 0, colorF = 7;
	int hit, hit2;
	int fix;
	int add;
	int Delete, deletef;
	int enter1 = 0, enter2, enter3 = 0, enter4, enter5 = 0;
	double warning = 0;
	double Count = 0; // ����� ������ ���������� ������
	double result; // ����� ���������(������� ����)
	vector<string> data = { "" };
	vector<string> mylist = { "����������: ", "������� ����: ", "������: ", "�������: ","���������� ����: ","�����: ","����������: ","��������������: ","��������: ","���������: ","���: ","�����������: ","��������� ������������: ","�����������: " };
	vector<double> ryr = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	introR(logos, ftr, colorF, colorW);
	fs.open(bd, fstream::in | fstream::out | fstream::app);
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
			le.open(options, fstream::in | fstream::out | fstream::app);

			while (!le.eof())
			{

				getline(le, ltr);

				cout << ltr << endl;

			}
			cin >> enter4;
			if (enter4 == 1)
			{
				TranseleteR(enter4);
			}
			if (enter4 == 2)
			{
				cout << "�������� ���� ����: " << endl;
				SytColor(8, colorW);
				cout << "0.׸����" << endl;
				SytColor(1, colorW);
				cout << "1.�����" << endl;
				SytColor(2, colorW);
				cout << "2.������" << endl;
				SytColor(3, colorW);
				cout << "3.�������" << endl;
				SytColor(4, colorW);
				cout << "4.�������" << endl;
				SytColor(5, colorW);
				cout << "5.����������" << endl;
				SytColor(6, colorW);
				cout << "6.����������" << endl;
				SytColor(7, colorW);
				cout << "7.������-�����" << endl;
				SytColor(8, colorW);
				cout << "8.׸���-�����" << endl;
				SytColor(9, colorW);
				cout << "9.������-�����" << endl;
				SytColor(10, colorW);
				cout << "10.������-������" << endl;
				SytColor(11, colorW);
				cout << "11.������=�������" << endl;
				SytColor(12, colorW);
				cout << "12.������-�������" << endl;
				SytColor(13, colorW);
				cout << "13.������-����������" << endl;
				SytColor(14, colorW);
				cout << "14.Ƹ����" << endl;
				SytColor(15, colorW);
				cout << "15.�����" << endl;
				SytColor(7, colorW);
				cin >> colorW;
				switch (colorW)
				{
				case 0:
					SytColor(colorF, 0);
					break;
				case 1:
					SytColor(colorF, 1);
					break;
				case 2:
					SytColor(colorF, 2);
					break;
				case 3:
					SytColor(colorF, 3);
					break;
				case 4:
					SytColor(colorF, 4);
					break;
				case 5:
					SytColor(colorF, 5);
					break;
				case 6:
					SytColor(colorF, 6);
					break;
				case 7:
					SytColor(colorF, 7);
					break;
				case 8:
					SytColor(colorF, 8);
					break;
				case 9:
					SytColor(colorF, 9);
					break;
				case 10:
					SytColor(colorF, 10);
					break;
				case 11:
					SytColor(colorF, 11);
					break;
				case 12:
					SytColor(colorF, 12);
					break;
				case 13:
					SytColor(colorF, 13);
					break;
				case 14:
					SytColor(colorF, 14);
					break;
				case 15:
					SytColor(colorF, 15);
					break;
				}
				if (colorF == colorW)
				{
					SytColor(7, 0);
					cout << "������!���� ������ ����� ����� ����! " << endl;

				}

				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				le.close();
			}
			if (enter4 == 3)
			{
				cout << "�������� ���� �����: " << endl;
				SytColor(8, colorW);
				cout << "0.׸����" << endl;
				SytColor(1, colorW);
				cout << "1.�����" << endl;
				SytColor(2, colorW);
				cout << "2.������" << endl;
				SytColor(3, colorW);
				cout << "3.�������" << endl;
				SytColor(4, colorW);
				cout << "4.�������" << endl;
				SytColor(5, colorW);
				cout << "5.����������" << endl;
				SytColor(6, colorW);
				cout << "6.����������" << endl;
				SytColor(7, colorW);
				cout << "7.������-�����" << endl;
				SytColor(8, colorW);
				cout << "8.׸���-�����" << endl;
				SytColor(9, colorW);
				cout << "9.������-�����" << endl;
				SytColor(10, colorW);
				cout << "10.������-������" << endl;
				SytColor(11, colorW);
				cout << "11.������=�������" << endl;
				SytColor(12, colorW);
				cout << "12.������-�������" << endl;
				SytColor(13, colorW);
				cout << "13.������-����������" << endl;
				SytColor(14, colorW);
				cout << "14.Ƹ����" << endl;
				SytColor(15, colorW);
				cout << "15.�����" << endl;
				SytColor(7, colorW);
				cin >> colorF;
				switch (colorF)
				{
				case 0:
					SytColor(0, colorW);
					break;
				case 1:
					SytColor(1, colorW);
					break;
				case 2:
					SytColor(2, colorW);
					break;
				case 3:
					SytColor(3, colorW);
					break;
				case 4:
					SytColor(4, colorW);
					break;
				case 5:
					SytColor(5, colorW);
					break;
				case 6:
					SytColor(6, colorW);
					break;
				case 7:
					SytColor(7, colorW);
					break;
				case 8:
					SytColor(8, colorW);
					break;
				case 9:
					SytColor(9, colorW);
					break;
				case 10:
					SytColor(10, colorW);
					break;
				case 11:
					SytColor(11, colorW);
					break;
				case 12:
					SytColor(12, colorW);
					break;
				case 13:
					SytColor(13, colorW);
					break;
				case 14:
					SytColor(14, colorW);
					break;
				case 15:
					SytColor(15, colorW);
					break;
				}
				if (colorF == colorW)
				{
					SytColor(7, 0);
					cout << "������!���� ������ ����� ����� ����! " << endl;

				}

				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				le.close();
			}
		}

		else if (enter1 == 4)
		{
			system("cls");
			ne.open(info, fstream::in | fstream::out | fstream::app);

			while (!ne.eof())
			{

				getline(ne, ntr);

				cout << ntr << endl;

			}
			cin >> enter2;
			switch (enter2)
			{
			case 1:
				cout << "\t\t\t .------------------------------------------------------." << endl;
				cout << "\t\t\t |�������� - WarningList                                |" << endl;
				cout << "\t\t\t |������ - 0.4.9 Basic                                  |" << endl;
				cout << "\t\t\t |id - 18062021                                         |" << endl;
				cout << "\t\t\t |����������:                                           |" << endl;
				cout << "\t\t\t |���������� - ����� ������ ����� ��� ������ � ����     |" << endl;
				cout << "\t\t\t |*��������� ������ Basic                               |" << endl;
				cout << "\t\t\t .------------------------------------------------------." << endl;
				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				ne.close();
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
				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				ne.close();
				break;
			case 3:
				cout << "\t\t\t.------------------------------------------------------." << endl;
				cout << "\t\t\t|WarningList - ��� ���������                           |" << endl;
				cout << "\t\t\t|������� ��������� ���� ������� ���� ,���� ����� �����|" << endl;
				cout << "\t\t\t|��� ��������� ������ ������� ��� ����������          |" << endl;
				cout << "\t\t\t|� ���������.                                          |" << endl;
				cout << "\t\t\t.------------------------------------------------------." << endl;
				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				ne.close();
				break;
			default:
				cin >> enter2;
				ne.close();
				break;
			}

		}

		else if (enter1 == 5)
		{
		me.open(files, fstream::in | fstream::out | fstream::app);

		while (!me.eof())
		{

			getline(me, mtr);

			cout << mtr << endl;

		}
			cout << "�������� ���������� �������� � ������:" << endl;
			cout << "1) ��������� " << endl;
			cout << "2) ������� " << endl;
			cin >> deletef;
			if (deletef == 1)
			{
				while (fs.peek() == EOF)
				{
					cout << "���� BD ����" << endl;
					fs.close();
					BackEventR(enter3, logos, ftr, colorF, colorW);
					cin >> enter1;
				}
				while (!fs.eof())
				{



					data[i] = (char*)malloc(sizeof(char) * size);
					fs >> data[i] >> ch;
					if (i > 0)
					{
						ster = ch + data[i];
						data[i] = ster;
					}
					ce = ch;
					cout << data[i] << "\0" << endl;
					i++;
					if (i > 0)
					{
						data.push_back("");
					}
				}

				cin >> loaddata;

				fe.open(data[loaddata]);
				while (fe.peek() == EOF)
				{
					cout << "���� " << data[i] << "���� ��� �� ����������!" << endl;
					BackEventR(enter3, logos, ftr, colorF, colorW);
					cin >> enter1;
				}

				while (!fe.eof())
				{
					msg = "";
					getline(fe, msg);

					cout << msg << endl;
				}
				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				fe.close();
				fs.close();
				me.close();
			}
			else if (deletef == 2)
			{
				while (fs.peek() == EOF)
				{
					cout << "���� BD ����" << endl;
					fs.close();
					BackEventR(enter3, logos, ftr, colorF, colorW);
					cin >> enter1;
				}
				cout << "�������� ���� ��� ��������: " << endl;
				while (!fs.eof())
				{

					data[i] = (char*)malloc(sizeof(char) * save);
					fs >> data[i] >> ch;

					if (i > 0)
					{
						str = ce + data[i];
						data[i] = str;
					}
					ce = ch;
					cout << data[i] << endl;

					i++;
					if (i > 0)
					{
						data.push_back("");
					}
				}
				cin >> deletedata;

				if (remove(data[deletedata].c_str()) != -1)
				{
					cout << "���� " << data[deletedata] << " �����" << endl;
					data.erase(data.begin() + deletedata);

					fs.close();
					if (remove(bd.c_str()) != -1)
					{
						fs.open(bd, fstream::in | fstream::out | fstream::app);
						for (; e < i; e++)
						{
							fs << data[e] << endl;
						}
					}


				}
				else
				{
					cout << "������!" << endl;
				}

				fs.close();
				BackEventR(enter3, logos, ftr, colorF, colorW);
				cin >> enter1;
				me.close();
			}

		}
		if (enter1 == 1)
		{
			cout << "��������..." << endl;
			cout << "\t\t\t\t._________________________________________________." << endl;
			cout << "\t\t\t\t";
			for (int f = 0; f < 50; f++)
			{

				SytColor(colorF, 15);
				cout << " ";
				SytColor(colorF, colorW);
				Sleep(100);
			}
			cout << endl;
			cout << "\t\t\t\t.-------------------------------------------------." << endl;
			system("cls");
		}
		cout << "WarningList 0.4.9 BASIC" << endl;
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

		vector<int> d_syze = {}; // ���������� �������� ������

		/*for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
		*/

		cout << "������� ���� ������: " << endl;

		for (int c = 0; c < mylist.size(); c++)
		{
			user.Tabl();
			cout << "������ �������� ��� �������� �������?" << endl;
			cout << "1)��" << endl;
			cout << "2)�������" << endl;
			cout << "3)���" << endl;
			cin >> enter5;

			while (exit != 1)
			{
				if (enter5 == 1)
				{
					cout << "�������� ������� ����� �������� ��� �������� �����" << endl;
					cin >> fix;
					if (fix > mylist.size())
					{
						cout << "������� ��� ����������� ��������: " << endl;
						cin >> addname;

						mylist.push_back(addname);
						ryr.push_back(0);
					}
					else
					{
						cout << "������� ��� ��������� ��������: " << endl;
						cin >> newname;
						mylist[fix] = newname;
					}
				}
				if (enter5 == 2)
				{
					cout << "������� ������� ��� ��� ��������: " << endl;
					cin >> Delete;
					while (Delete > mylist.size())
					{
						SytColor(4, colorW);
						cout << ".__________________________________." << endl;
						cout << "|������! ������� �� ������!        |" << endl;
						cout << "|����������,������� ������� �����: |" << endl;
						cin >> Delete;
						cout << ".----------------------------------." << endl;
						SytColor(colorF, colorW);
					}
					mylist.erase(mylist.begin() + Delete);
					ryr.erase(ryr.begin() + Delete);

				}
				cout << "�����?" << endl;
				cout << "1)��" << endl;
				cout << "0)���" << endl;
				cin >> exit;
				if (exit == 0)
				{
					cout << "1)��������� �������" << endl;
					cout << "2)�������" << endl;
					cout << "3)���" << endl;
					cin >> enter5;
				}
			}
			for (int h = 0; h < mylist.size(); h++)
			{
				cout << "|" << mylist[h] << " = " << ryr[h] << "\t|" << endl;
			}
			cout << ".------------------------------" << endl;
			cout << "Enter element array: " << endl;
			cin >> x;
			cout << mylist[x] << endl;
			cout << "--------------------" << endl;
			cout << "|������� ���������� ������: " << endl;
			cin >> arrx;
			d_syze.resize(arrx);
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


			ryr[x] = result;


			if (ryr[x] <= 2.5)
			{
				SytColor(4, colorW);
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
				SytColor(colorF, colorW);
				getch();
			}
			else if (ryr[x] <= 3.5)
			{
				SytColor(14, colorW);
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
				SytColor(colorF, colorW);
				getch();
			}
			else if (ryr[x] <= 4.5)
			{
				SytColor(10, colorW);
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
				SytColor(colorF, colorW);
				getch();
			}
			else
			{
				SytColor(3, colorW);
				cout << "���� ������� ���� = " << result << endl;
				cout << "� ���� �� ������ �������! ;) " << endl;
				SytColor(colorF, colorW);
				getch();
			}

			exit = false;
			Count = NULL;
			system("cls");
		}

		cout << endl;

		totalScore = ryr[0] + ryr[1] + ryr[2] + ryr[3] + ryr[4] + ryr[5] + ryr[6] + ryr[7] + ryr[8] + ryr[9] + ryr[10] + ryr[11] + ryr[12] + ryr[13]; // ����� ����� ���� ��������� 
		totalResult = totalScore / 14; // ����� ������� ����
		switch (totalResult)
		{
		case 2:
			SytColor(4, colorW);
			cout << "���� ����� ������� ����(����������)" << totalResult << endl;
			SytColor(colorF, colorW);
			break;
		case 3:
			SytColor(14, colorW);
			cout << "���� ����� ������� ����(����������) " << totalResult << endl;
			SytColor(colorF, colorW);
			break;
		case 4:
			SytColor(2, colorW);
			cout << "���� ����� ������� ����(����������) " << totalResult << endl;
			SytColor(colorF, colorW);
			break;
		case 5:
			SytColor(3, colorW);
			cout << "���� ����� ������� ����(����������) " << totalResult << endl;
			SytColor(colorF, colorW);
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
		return 0;
		cout << "���������: " << endl;
		cout << "1) �� " << endl;
		cout << "2) ��� " << endl;
		cin >> savedata;
		if (savedata == 1)
		{
			cout << "������� ��� �����: " << endl;
			cin >> ster;
			fs << ster << "\n";

			fs.open(bd, fstream::in | fstream::out | fstream::app);
			fe.open(ster, fstream::in | fstream::out | fstream::app);

			try
			{
				cout << "���� ������! " << endl;
				fs << ster << "\n";

			}
			catch (exception esf)
			{
				cout << "���� �� ������ " << endl;
				cout << esf.what() << endl;
			}
			try
			{
				cout << "���� ������!" << endl;
				fe << "�������� ����������: " << endl;
				fe << ".____________________________." << endl;
				fe << "|��� ���: " << name << "\t|" << endl;
				fe << "|���� �������: " << family << "\t|" << endl;
				fe << "|���� ID: " << user.GetID() << "\t|" << endl;
				fe << "|���� ����� ����: " << totalResult << "\t|" << endl;
				fe << "|������������: " << "\t|" << endl;
				fe << ".----------------------------." << endl;
				fe << "._____________________________." << endl;
				for (int h = 0; h < mylist.size(); h++)
				{
					fe << "|" << mylist[h] << " = " << ryr[h] << "\t|" << endl;
				}
				fe << ".------------------------------" << endl;
				fe << "������: " << "0.4.9 BASIC" << endl;
				fe << "����� ������ ���������: " << clock() << "/���" << endl;

			}
			catch (exception ese)
			{
				cout << "���� �� ������! " << endl;
				cout << ese.what() << endl;
			}
			fs.close();
			fe.close();
		}
	}
}
