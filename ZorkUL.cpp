#include <iostream>

using namespace std;
#include "ZorkUL.h"

/*int main(int argc, char* argv[]) {
	ZorkUL temp;
	temp.play();
	return 0;
}*/

ZorkUL::ZorkUL() {
	createRooms();
    printWelcome();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k; //items = name, weight , value

    a = new Room("Great hall\nYou walk through the door and are amazed by what you see. It is a Great Hall you can't believe your eyes. You look around there is long rows of tables all leading to a Throne. You think to yourself... This must be where the king sat.... ");
        a->addItem(new Item("x", 1, 11));
        a->addItem(new Item("y", 2, 22));
    b = new Room("Balcony\nYou enter a balcony. The view is great from here");
        b->addItem(new Item("xx", 3, 33));
        b->addItem(new Item("yy", 4, 44));
    c = new Room("Bedroom\n You enter what appears to be the kings bedroom you see a shiny sword in the corner");
    d = new Room("Hallway\n You have walked through the wooden door and are now in a long hallway.");
        d->addItem(new Item("key",3,33));
    e = new Room("Deadend\nYou walk through the door there is nothing there.");
    f = new Room("Armory/n You enter an armory. There is alot of weapons and armor lying around....");
    g = new Room("Libary\n You enter the libary. Maybe there will be import information in one of these books...");
    h = new Room("Courtyard\n You enter the courtyard. You see what appears to be a hidden door to your north");
    i = new Room("Outside\n You walk through the door and appear to be outside. You turn around and look at the building you just came from it seems to be an old castle. You think to yourself.... Maybe theres some old treasure in here... You think about running away but your curious to see whats inside...");
        i->addItem(new Item("sword", 100,1));
    j = new Room("Spawn \n You are in a small dark room. There is barely any light and the room appears to be empty");
        k  = new Room("Tresure Room\nYou see a tresure box ahead of you. You need a key to open it");

//             (N, E, S, W)
	a->setExits(f, b, d, c);
	b->setExits(NULL, NULL, NULL, a);
	c->setExits(NULL, a, NULL, NULL);
    d->setExits(a, e, j, i);
	e->setExits(NULL, NULL, NULL, d);
	f->setExits(NULL, g, a, h);
	g->setExits(NULL, NULL, NULL, f);
    h->setExits(k, f, NULL, NULL);
    i->setExits(NULL, d, NULL, NULL);
    j->setExits(d,NULL,NULL,NULL);
    k->setExits(NULL,NULL,h,NULL);

        currentRoom = j;
}

/**
 *  Main play routine.  Loops until end of play.
 */
/*
void ZorkUL::play() {
	printWelcome();

	// Enter the main command loop.  Here we repeatedly read commands and
	// execute them until the ZorkUL game is over.

	bool finished = false;
	while (!finished) {
		// Create pointer to command and give it a command.
		Command* command = parser.getCommand();
		// Pass dereferenced command and check for end of game.
		finished = processCommand(*command);
		// Free the memory allocated by "parser.getCommand()"
		//   with ("return new Command(...)")
		delete command;
	}
	cout << endl;
	cout << "end" << endl;
}
*/

bool ZorkUL::update(std::string buffer) {
    // Create pointer to command and give it a command.
    Command* command = parser.getCommand(buffer);
    // Pass dereferenced command and check for end of game.
    bool finished = processCommand(*command);
    // Free the memory allocated by "parser.getCommand()"
    //   with ("return new Command(...)")
    delete command;

    return finished;
}

void ZorkUL::printWelcome() {
	cout << "start"<< endl;
	cout << "info for help"<< endl;
	cout << endl;
	cout << currentRoom->longDescription() << endl;
}

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */
bool ZorkUL::processCommand(Command command) {
	if (command.isUnknown()) {
		cout << "invalid input"<< endl;
		return false;
	}

	string commandWord = command.getCommandWord();
	if (commandWord.compare("info") == 0)
		printHelp();

	else if (commandWord.compare("map") == 0)
		{
        cout << "  [Tresure room]        " << endl;
        cout << "         |         " << endl;
        cout << "         |         " << endl;
        cout << "   [Courtyard] --- [Armory] --- [Libary]" << endl;
        cout << "                      |         " << endl;
        cout << "                      |         " << endl;
        cout << "    [Bedroom] --- [Great hall] --- [Balcony]" << endl;
        cout << "                      |         " << endl;
        cout << "                      |         " << endl;
        cout << "     [Outside] --- [Hallway] --- [Deadend]" << endl;
        cout << "                      |         " << endl;
        cout << "                      |         " << endl;
        cout << "                   [Spawn]        " << endl;
        }

	else if (commandWord.compare("go") == 0)
		goRoom(command);

    else if (commandWord.compare("take") == 0)
    {
       	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
         if (command.hasSecondWord()) {
        cout << "you're trying to take " + command.getSecondWord() << endl;
        int location = currentRoom->isItemInRoom(command.getSecondWord());
        if (location  < 0 )
            cout << "item is not in room" << endl;
        else
            cout << "item is in room" << endl;
            cout << "index number " << + location << endl;
            cout << endl;
            cout << currentRoom->longDescription() << endl;
        }
    }

    else if (commandWord.compare("put") == 0)
    {

    }
    /*
    {
    if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
            cout << "you're adding " + command.getSecondWord() << endl;
            itemsInRoom.push_Back;
        }
    }
*/
    else if (commandWord.compare("quit") == 0) {
		if (command.hasSecondWord())
			cout << "overdefined input"<< endl;
		else
			return true; /**signal to quit*/
	}
	return false;
}
/** COMMANDS **/
void ZorkUL::printHelp() {
	cout << "valid inputs are; " << endl;
	parser.showCommands();

}

void ZorkUL::goRoom(Command command) {
	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
		return;
	}

	string direction = command.getSecondWord();

	// Try to leave current room.
	Room* nextRoom = currentRoom->nextRoom(direction);

	if (nextRoom == NULL)
		cout << "underdefined input"<< endl;
	else {
		currentRoom = nextRoom;
		cout << currentRoom->longDescription() << endl;
	}
}

string ZorkUL::go(string direction) {
	//Make the direction lowercase
	//transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
	//Move to the next room
	Room* nextRoom = currentRoom->nextRoom(direction);
	if (nextRoom == NULL)
		return("direction null");
	else
	{
		currentRoom = nextRoom;
		return currentRoom->longDescription();
	}
}
