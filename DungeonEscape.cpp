// DungeonEscape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

char play;
const int trap = '3';
const int trap2 = '5';
const int trap3 = '6';
char choice;
int HP = 50;
bool playerAlive = true;

int main()
{
	while (playerAlive)
	{
		cout << "Welcome to dungeon escape. \n";
		cout << "1) Play the game. \n";
		cout << "2) Exit the game. \n";
		cin >> play;

		if (play == '1')
		{
			cout << "Welcome player. You wake up in a dark hallway. Three doors seem to be your way out \n";
			cout << "Player HP: " << HP << endl;
			cout << "which door will you choose? 1, 2 or 3? \n";
			cin >> choice;

			if (choice == '1')
			{
				cout << "You continue your adventure.";
				cout << "HP is increased by 50!";
				HP = HP + 50;
				cout << "Player HP: " << HP << endl;
				// system("cls");
			}
			else if (choice == '2')
			{
				cout << "You continue your adventure.";
				cout << "HP is increased by 50!";
				HP = HP + 50;
				cout << "Player HP: " << HP << endl;
				// system("cls");
			}
			else if (choice == trap)
			{
				cout << "It's a trap! You take 50 points of damage." << endl;
				HP = HP - 50;
				cout << "Player HP: " << HP << endl;
				cout << "Game over! Start again.";
				playerAlive = true;
				HP = 50;
			}

			if (HP == 100)
			{
				cout << "Another set of 3 doors appear before you, Which one do you choose?" << endl;
				cout << "Please enter 4, 5, or 6";
				cin >> choice;
				if (choice == '4')
				{
					cout << "You continue your adventure.";
					// system("cls");
					cout << "You see a dragon before you. It breathes fire upon you but you manage to escape with small wounds. Congratulations, you've escaped the dungeon!" << endl;
					HP = 50;
				}
				else if (choice == trap2)
				{
					cout << "You open the door and are attached by a banshee. You escape but your HP is low." << endl;
					HP = HP - 50;
					cout << "Player HP: " << HP << endl;
				}
				else if (choice == trap3)
				{
					cout << "You open the door and are attached by an ogre. You escape but your HP is low." << endl;
					HP = HP - 50;
					cout << "Player HP: " << HP << endl;
				}

				if (HP == 50 && choice == trap2 || choice == trap3)
				{
					cout << "You see a dragon appear before you.It breathes fire upon you and your weak body is engulfed immediately.Game over!" << endl;
					HP = HP - 50;
					cout << "Player HP: " << HP << endl;
					playerAlive = true;
					HP = 50;
				}
			}
		}
		else if (play != '1')
		{
			return 0;
		}
	}
	return 0;
}
