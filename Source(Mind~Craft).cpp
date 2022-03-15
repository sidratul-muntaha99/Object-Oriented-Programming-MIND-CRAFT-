#include<iostream>
#include<iomanip>
#include<cstring>
#include<Windows.h>
#include<conio.h>

using namespace std;
class game
{
protected:
	char name[100];
	char a[8][8];
	int i, j;

	//int life;
	int score=0;
	int lev = 1;
	int p = 1;

public:

	
	void loading()
	{
		cout << "Loading";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";

	}
	void nextlev()
	{
		Sleep(500);
		cout << "Loading level"<<lev;
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";

	}
	void pro()
	{
		Sleep(100);
		cout << "proceeding";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";



	}
	void sc()
	{
		
		score = score + 10;
	}

	void d_sc()
	{
		cout << endl;
		cout << "Your score: " << score;

	}
	



	void intro()
	{
		//...........................................The opening of the game...........................................
		cout << setw(80);
		Sleep(500);
		cout << "M";
		Sleep(500);
		cout << "I";
		Sleep(500);
		cout << "N";
		Sleep(500);
		cout << "D";
		Sleep(500);
		cout << "~";
		Sleep(500);
		cout << "C";
		Sleep(500);
		cout << "R";
		Sleep(500);
		cout << "A";
		Sleep(500);
		cout << "F";
		Sleep(500);
		cout << "T";
		cout << endl;

		cout << setw(100);
		cout << "welcome to the world of MIND~CRAFT" << endl;
	}

	void t_name()
	{
		cout << "enter your name: ";
		cin.getline(name,100);
		system("cls");

	}
	void about()
	{
		intro();
		cout << endl << endl;
		cout << "welcome " << name << ",";
		cout << endl << endl;
		Sleep(1000);
		cout << "This game is all about how well you can sort out the mysteries and find out the hidden numbers in it, which will lead you towards glory "<<endl;
		Sleep(1000);
		cout << "Each clue will open a path there will be several paths which you can take but to win you will habe to find the smallest path aong them"<<endl;
		Sleep(1000);
		cout << "this game justifies how well you can read the mysteries and how well is your geomatrical common scence"<<endl<<endl;
		Sleep(3000);
		cout << setw(90);
		cout << "instructions"<<endl<<endl;
		cout << "* you will achieve a point in the map passing every level."<<endl;
		cout << "* Using any two of the points and mendetory the last point you will have to reach the X mark "<<endl;
		cout << "* For each level you will achieve 1 key  "<<endl;
		cout << "* After all the levels when you will solve the final clue you will be given a secret messege which wil be the key of the tresaure "<<endl;
		cout << endl << endl;
		cout <<setw(90)<< "How to play"<<endl;
		cout << "1.you will have to solve all the clues to win this game" << endl;
		cout << "3.but you only have three lives" << endl;
		cout << "2.if you go to the last clue ull find a jackpot round with a lot of points" << endl;
		cout << "if u complete the jackpot rund you will get a huge amount of bonous from your remaining lives" << endl;
		cout << endl << endl << endl;
		Sleep(200);
		cout << "input '1' to proseed"<<endl;

		int in;
		cin >> in ;

		if (in== 1)
		{
			system("cls");
		}
	}


	void story()
	{
		cout << setw(90);
		loading();

		cout <<endl<<endl<<endl ;

		cout << "This is a story of 1850. Long long ago there was a merchant named Abu Sayed. He was not that much wealthy but he was really honest and helpful. One day he found an old man very sick and laying by the side of the road. So he took him to the nearest hakim(doctor). So the doctor told Sayed that he won’t live for long and prescribed some medicines. Sayed took the old man to his home and took good care of the man. But after all his hard work to keep him alive one night,the man died. Before death he wrote a small note for Sayed. In the note he thanked Sayed for all his love and care and gave him a small hint where he could find a map to a treasure chest where he had all his wealth hidden. But Sayed did not understand the clue so he needs your help to find the map." << endl;
		Sleep(3000);
	}


};

class start :public game
{
protected:
		
		int r, c;
		
		int f_score;


public:

	void f_map()

	{
		for (i = 0; i <=7; i++)
		{
			for (j = 0;j <= 7; j++)
			{
				if(i==0&&j==0)
				{
					a[i][j] = 'S';
				}
				else if (i == 7 && j == 7)
				{
					a[i][j] = 'X';
				}
				else
					a[i][j] = 'O';
				

				
			}
		}

	
		display();
		Sleep(10000);

	}

	void w_game()
	{
		system("cls");

		int i, j;
		int lev = 1;
		int l = 3;
		while (l != 0)
		{
			int flag = 0;
			//......................................................CLUE ONE....................................................................



			int r, c;
			if (lev = 1)
			{
				cout <<"life "<<l;

				d_sc();
				display();

				cout << "\nclue 1:" << endl;
				cout << "The genius asked the merchant when he first arrived here if he did not sit down on the ground and if he did not take some dates from his wallet." << endl;
				cout << "Again he asked whilst eating them if he did not throw the stones about." << endl << endl;
				cout << "The merchant agreed with him." << endl << endl;
				cout << "The genius then claimed that for whilst he(merchant) were throwing about the stones, his(genius) son passed by, and two of them struck him in the eye and killed him. " << endl;
				cout << "So he should kill him now. The merchant cried for his(genius) forgiveness." << endl << endl;

				cout << "What is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;
				a[1][2] = '*';

				if (a[1][2] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;



				pro();
				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					sc();
					lev++;
					
					system("cls");
				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;

				}
				
			}




			//..................................................CLUE 2..................................................................

			if (lev == 2)
			{
				cout << "life " << l;
				d_sc();
				display();
				
				
				cout << "\nclue 2:" << endl;
				cout << "The genius said that he(genius) will have no mercy on him(merchant)I shall kill you as you killed my son" << endl;
				cout << "and so saying, he(g) seized the merchant by the arm and lifted his(g) sabre to cut off his head for the third time." << endl;
				cout << "When the merchant saw that the genius was determined to cut off his head, he requested to grant him just a short time to go home and bid his wife and two childrens farewell" << endl;
				cout << "When he has done this he(merchant) will come back here and the genius shall kill him. " << endl;


				cout << " \nWhat is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;

				a[3][2] = '*';

				if (a[3][2] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;



				pro();
				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					sc();
					lev++;
					
					system("cls");

				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;

				}

			}

			//...........................................................CLUE THREE......................................................

			if (lev == 3)
			{
				cout << "life " << l;
				d_sc();
				display();
				cout << "clue 3:" << endl;
				cout << " Then the genius said that if he(genius) grant him(merchant) the delay he ask, he(g) is afraid that he(m) will not come back." << endl;
				cout << "\"I give you my word of honor,\" answered the merchant, \"that I will come back without fail. I ask you for third of (a)year's grace. I promise you that to-morrow four month, I shall be waiting under these trees to give myself up to you.\"" << endl;
				cout << "On this the genius left him near the fountain and disappeared.The merchant, having recovered from his fright, mounted his horse and went on his road." << endl;


				cout << "What is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;

				a[3][4] = '*';

				if (a[3][4] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;


				pro();

				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					lev++;
					
					sc();
					system("cls");

				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;

				}

			}

			//....................................................................................................................

			if (lev == 4)
			{
				cout << "life " << l;
				d_sc();
				display();
				cout << "clue 4:" << endl;
				cout << " When he arrived home his wife and children received him with the greatest joy. But instead of embracing them he(m) began to weep bitterly. His wife requested him to say what happened to him." << endl;
				cout << "\"Alas!\" answered her husband, \"I have only four months to live.\"" << endl;
				cout << "When they heard this sad news they were in despair, and wept much. The next third day the merchant began to settle his affairs, and first of all to pay his debts. He gave large alms to the poor, set his slaves at liberty and provided for his wife and children. The time soon passed away." << endl;


				cout << "What is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;

				a[4][3] = '*';

				if (a[4][3] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;
				pro();



				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					sc();
					lev++;
					
					system("cls");

				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;

				}

			}

			//.....................................................................................................................

			if (lev == 5)
			{
				cout << "life " << l;
				d_sc();
				display();
				cout << "clue 5:" << endl;
				cout << "When he tried to say good-bye he was quite overcome with grief. At length he reached on the day that he had appointed. He dismounted, and sat down at the edge of the fountain." << endl;
				cout << "When he was waiting, an old man leading a hind came towards him. They greeted one another, and he(om) asked him what brought him(m) to this desert place.";
				cout << "He(om) listened in astonishment and said that he(om) would like to stay to be a witness of their interview." << endl;
				cout << "While they were talking another old man came up, followed by three black dogs. The second old man had not sooner heard the story than he, too, decided to stay there to see what would happen. " << endl;


				cout << "What is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;

				a[1][3] = '*';

				if (a[1][3] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;



				pro();
				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					sc();
					lev++;
					
					system("cls");
					
				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;

				}

			}

			//....................................................................................................................

			if (lev == 6)
			{
				cout << "life " << l;
				d_sc();
				display();
				cout << "clue 6:" << endl;
				cout << "They soon saw in the distance a thick smoke, like a cloud of dust. This smoke came nearer, and then, all at once, it vanished, and they saw the genius." << endl;
				cout << "Then the old man leading the hind threw himself at the monster's feet and said, \"O  Sixth Prince of the Genii, I beg of you to stay your fury and to listen to me. I am going ";
				cout << "to tell you my story and that of the hind I have with me, and if you find it more marvellous than that of the merchant whom you are about to kill, I hope that ";
				cout << "you will do away with a six part of his punishment?\" " << endl;


				cout << "What is the value of r(row number)" << endl;
				cin >> r;

				cout << "What is the value of c(column number)" << endl;
				cin >> c;

				a[6][6] = '*';

				if (a[6][6] == a[r][c])
				{
					flag = 1;
				}
				else
					flag = 0;

				pro();


				if (flag == 1)
				{
					cout << endl << endl;
					cout << "congrats you have solved the clue" << lev << endl << endl;
					sc();
					lev++;
					p = l;
					f_score = score;
					system("cls");
					jackpot();
					
					
					break;
				}
				else
				{
					cout << endl << endl;
					cout << "wrong" << endl << endl;
					l--;
					
				}

			}




		}

		//...........................................GAME OVER.................................................................
		if (l == 0)
		{
			cout << "GAME OVER" << endl;
			f_score = score;
		}
	
	
	
	
	
	
	}



	void jackpot()
	{
		cout << "A merchant can place 8 large boxes or 10 small boxes into a carton for shipping. In one shipment, he sent a total of 96 boxes.";
		cout << "If there are more large boxes than small boxes?" << endl;
		int w,v;
		cout << "enter the ans(cartoons): ";
		cin >> w;
		cout<<"enter the ans(small box): ";
		cin >> v;

		if (w == 11 && v == 96)
		{
			f_score = f_score + 1000;
			f_score = f_score + (p * 10);
			scr();
		}
			
		
	}

	void display()
	{
		cout << endl;

		for (i = 0; i <= 7; i++)
		{
			for (j = 0; j <= 7; j++)
			{
				cout << setw(5);
				cout << a[i][j];

			}
			cout << endl;
		}

	}
	void scr()
	{

		cout << "you have scored: " << f_score;
	}


};


 



int main()
{
	start obj;
	start obj1;

	obj.intro();
	obj.t_name();
	obj.about();
	obj.story();
	obj.f_map();
	obj.w_game();
	
	system("pause");
}