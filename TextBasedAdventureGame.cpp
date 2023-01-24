#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <chrono>
#include <thread>

using namespace std;

//Player Stats
int playerAttack;
int playerHP;
int potionHeal;

//Enemy Stats
int enemyAttack;
int enemyHP;
void fight();


int main() {

	std::cout << "You are a young boy who's dreams are to adventure through the ancient pyraminds of Egypt\n" //Storyline
		"You go on a long hike towards the ancient pyraminds with a team of other explorers\n"//Storyline
		"Whilst exploring the ancient ruins of Egypt you find yourself carried away exploring and lost from the others\n"//Storyline
		"\n";

	int i = 1;
	while (i < 5) {
		cout << "As you find yourself lost you come across two paths in the sand " << endl; //Story Choice
		Sleep(1000);
		cout << "On the left you see a path with foot prints" << endl; //Option 1
		Sleep(1000);
		cout << "On the right you see a path with deep tire marks embedded into the ground" // Option 2 
			<< endl;
		cout << "Left or Right?" << endl; // Player Has To Choose
		string path;
		cin >> path;

		if (path == "left") {
			cout << "You follow the path to find a local tribe ahead" << endl; // Option 1 Outcome 
			Sleep(100);
			cout << "You can ask them for help or continue down the path" << endl; // Story Choice
			Sleep(100);
			cout << "Help or Continue?" << endl; // Player Has To Choose
			string path7;
			cin >> path7;

			if (path7 == "continue") { // Option 1 
				cout << "You continue until you see a group of people ahead " << endl;
				cout << "You confront them but quickly realise that they are hostile natives" << endl;
				cout << "Fight or Run?" << endl;
				string path8;
				cin >> path8;
				if (path8 == "fight") // Option 1 Outcome
					cout << "You prepare to face a massive battle until one of the natives men approach you" << endl; // Fight Start
				cout << "Luckily they believe in a fair fight and give you a sword" << endl; //Story continues
				cout << "you are challenged to fight the best man from their group of warriors" << endl; //Fight Start
				fight(); // Function Added
				string path9;
				cin >> path9;
				if (path9 == "enter") { // Enter Cabin
					cout << "You find your friends inside of the wooden cabin" << endl; // Story Twist
					cout << "The tell you it was a prank" << endl; // End Of Choice


				}
				if (path9 == "continue") { // Story Option
					cout << "You run through the jungle but without any protection you find yourself staking out in a cave waiting for help" << endl; // Story
					cout << "With no food or water you die in days" << endl; // Story
				}
				break;

			}
			if (path7 == "help") { // Story Option 1
				cout << "they point you straight ahead in the wilderness telling you they saw some strangers walking that way" << endl; //Story Continues
				cout << "They tell you to follow the sun through the forest" << endl; //Story Continues
				cout << "Halfway through the clouds block the sun and you are faced with a tough decision" << endl; //Story Continues
				cout << "Left or Right?" << endl; //Story Option
				string path11;
				cin >> path11;

				if (path11 == "Left") { // Option 1 
					cout << "On the left you find a broken road with a gypsey waiting on its side" << endl;
					cout << "She intructs you to follow the path to find your friends" << endl;
					cout << "Follow or turn back" << endl;
					string path10;
					cin >> path10;
					if (path10 == "turn back") { // Story Option 2
						cout << "You turn back but are lost as to where to go" << endl;
						cout << "you lose interest in finding your friends and call a uber back home" << endl;
						cout << "Congrats, I think?" << endl;
						break;

						if (path10 == "follow") {
							cout << "The gypsy didnt lie to you" << endl;
							cout << "you find your friends" << endl;
							cout << "They tell you that they were playing hide and seek" << endl;
							break;

						}

					}
				}
				if (path11 == "right") { // Option 2
					cout << "you find literally nothing on this path" << endl;
					cout << "but you find a area to settle down near a river and become something like Tarzan" << endl;
					cout << "Congratulations" << endl;
					break;




				}
			}




			break;

		}

		if (path == "right") { //Story Option 
			cout << "You follow the path until you come across a cart parked in the sand" << endl;
			Sleep(100);
			cout << "You can either explore the cart or continue on into the wilderness" << endl;
			Sleep(100);
			cout << "Search or continue?" << endl;

			string path2;
			cin >> path2;
			if (path2 == "search") { //Story Option 
				cout << "You find that the car still has some gas in it" << endl;
				cout << "You can either drive through the mud or go through the shallow waters" << endl;
				cout << "mud or water" << endl;
				string path3;
				cin >> path3;
				if (path3 == "mud") { //Story Option 
					cout << "You cross the mud successfully and find a strange cabin" << endl;
					cout << "Do you enter or continue ?" << endl;
					cout << "Enter or continue?" << endl;
					string path6;
					cin >> path6;
					if (path6 == "enter") { //Story Option 
						cout << "Inside you find your friends lounging around a warm fire" << endl;
						cout << "It was all a big prank" << endl;
						if (path6 == "continue") {
							cout << "You contine through the desert and find no sign of any clues to tour friends whereabouts" << endl;
							cout << "While wandering through the desert you are bitten by a rattlesnake" << endl;
							cout << "You die the next day" << endl;
							cout << "Try again" << endl;

						}
					}
				}
				if (path3 == "water") { //Story Option 
					cout << "you attempt to cross the shallow water but hit a rock halfway through" << endl;
					cout << "you fall in the water and your are eaten alive by an alligator" << endl;
					cout << "Try again" << endl;
				}
				break;
			}
			if (path2 == "continue") { //Story Option 
				cout << "you see some mud and shallow water ahead" << endl;
				cout << "You must choose which way to move forward" << endl;
				cout << "mud or water?" << endl;
				string path4;
				cin >> path4;
				if (path4 == "mud") { //Story Option 
					cout << "You quickly realise the mud is quicksand and meet your demise" << endl;
					cout << "Try again" << endl;
				}
				if (path4 == "water") { //Story Option 
					cout << "You sprint through the water" << endl;
					cout << "dodging all the nasty beats that may lurk within it" << endl;
					cout << "You continue until you see a path straight ahead and a path to your right" << endl;
					cout << "Straight or right" << endl;
					string path5;
					cin >> path5;
					if (path5 == "straight") { //Story Option 
						cout << "You go forward and follow the path until daybreak" << endl;
						cout << "As you are walking in the darkness you suddenly feel a sharp pain in your leg" << endl;
						cout << "you have fallen into a natives animal trap left to die" << endl;
						cout << "Try Again" << endl;
					}
					if (path5 == "right") { //Story Option 
						cout << "you find a cabin in the woods" << endl;
						cout << "You enter it looking for shelter for the night" << endl;
						cout << "Inside you find your freinds" << endl;
						cout << "It was all a big prank" << endl;




					}
				}
				break;

			}

		}
		else
		{
			cout << "Invalid input" << endl; // User Inputs any text other than option, text will appear saying Invalid Option
			cin >> path;
			int i = 0;
		}



	}
}

void fight() // Fight Function being called
{
	int fightStart;


	enemyHP = 100; // variables
	enemyAttack = 25; // variables

	playerHP = 100; // variables
	playerAttack = 15; // variables
	potionHeal = 15; // variables
	// all with inputted numbers


	do
	{
		cout << "1 = Attack \n"; // Option to attack
		cout << "2 = Health Potion \n"; // Option to use health potion
		cin >> fightStart; // calling Fight to start


		if (fightStart == 1)
		{
			playerAttack; // Player input
			cout << "Attack Deals " << playerAttack << " Damage\n\n"; // dealing damage to enemy

			enemyHP = enemyHP - playerAttack; //Takes health away equal to the attack damage
			cout << "Enemy has " << enemyHP << "Left!" << "\n\n";
		}
		else if (fightStart == 2)
		{
			potionHeal; // player inputs potion option
			playerHP = playerHP + potionHeal; // adds health to player health
			cout << "You Healed up by " << potionHeal << "HP\n"; // healing 

			cout << "Current HP is " << playerHP << "\n\n"; // after potion is taken players health is.....
		}


		if (enemyHP <= 0)
		{
			cout << "YOU WON!\n"; // calling that you have won
			break;
		}
		else
		{
			enemyAttack;
			cout << "Enemy hit you for " << enemyAttack << " Damage!\n\n"; // enemy attack

			playerHP = playerHP - enemyAttack; //Takes health away equal to the attack damage

			cout << "You now have " << playerHP << "Left" << "\n\n";

		}


		if (playerHP <= 0)
		{
			cout << "You Lost....";
			break;
		}

	} while (playerHP >= 0 || enemyHP >= 0);
}