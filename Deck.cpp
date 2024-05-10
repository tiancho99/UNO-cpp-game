/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Deck.cpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:59 PM
 */

#include <vector>
#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <limits>

#include "Deck.hpp"

Deck::Deck()
{
    /* Create all the cards in the game*/
    srand(time(NULL));
    int num;
    direction = false;
    acumulated = 0;
    vector<char> colors = {'b', 'r', 'y', 'g', 's'};
    vector<string> numbers = {"1",
                              "2",
                              "3",
                              "4",
                              "5",
                              "6",
                              "7",
                              "8",
                              "9",
                              "draw2",
                              "skip",
                              "reverse"};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < colors.size(); j++)
        {
            if (colors.at(j) != 's')
            {
                for (int k = 0; k < numbers.size(); k++)
                {
                    cards.push_back(Card(colors.at(j), numbers.at(k)));
                }
            }
        }
    }
    // Create special cards
    for (int i = 0; i < 4; i++)
    {
        cards.push_back(Card('s', "draw4"));
        cards.push_back(Card('s', "color"));
    }
}

void Deck::dealCards(int players)
{
    /* Start the game and deal cards to each player
     * args:
     * int players: Number of players
     */
    srand(time(NULL));

    for (int i = 0; i < players; i++)
    {
        vector<Card> hand;
        string name;
        ostringstream s;
        int index;

        for (int j = 0; j < 7; j++)
        {
            // Add card to player hand and revome it from the deck
            index = rand() % cards.size();
            hand.push_back(cards.at(index));
            cards.erase(cards.begin() + (index));
        }
        s << i;
        std::cout << "Enter player " << i + 1 << " name ";
        cin >> name;

        // Add players to a cirle list
        game.addFirst(Player(name, s.str(), hand));
    }
}

void Deck::play()
{
    /* Select a card from the deck to place on the top of the pile to start the game and ask player to pick a card */
    clear();
    waitPlayer();
    int indexTop = rand() % (cards.size());
    top = cards.at(indexTop);
    while (top.getColor() == 's') {
        indexTop = rand() % (cards.size());
        top = cards.at(indexTop);
    }
    cards.erase(cards.begin() + indexTop);

    bool isEnd = false;

    while (!isEnd)
    {
        clear();
        Player* currentPlayer = game.getPlayer();
        std::cout << "Player " << currentPlayer->getName() <<endl;
        vector<Card> *hand = currentPlayer->getCardsPtr(); // get current player hand
        // Check if player has to take cards (draw4 draw2)
        if (acumulated > 0)
        {
            std::cout << "Take " << acumulated << " cards " << endl;
            for (int i = 0; i < acumulated; i++)
            {
                std::cout << "took card" <<endl;
                currentPlayer->drawCard(&cards);
            }
            acumulated = 0;
        }

        waitPlayer();
        // Check if player is skipped
        if (isSkipped) {
            std::cout << "You have been skipped" << endl;
            waitPlayer();
            isSkipped = false;
        }
        else
        {
            displayHand(hand);
            // Verify if there is a compatible to drop from player's hand
            if (!isAvailableCards(*hand))
            {
                std::cout << "\nYou have no cards to drop. You draw a card:\n"
                     << endl;
                currentPlayer->drawCard(&cards);
                displayHand(hand);
            }
            if (isAvailableCards(*hand)) // Check if player has cards to play
            {
                int selection;
                Card playedCard;
                do
                {
                    std::cout << "\nSelect a card to play" << endl;
                    cin >> selection;
                    playedCard = hand->at(selection - 1);
                } while (!isValidSelection(playedCard, top));
                top = playedCard;
                isSpecial(playedCard);
                currentPlayer->dropCard(selection - 1);
            }
        }
        if (hand->empty()) {
            std::cout << "Congratulations player "<< currentPlayer->getName() << " You win!";
            isEnd = true;
        }
        getchar();
        game.next(direction);
    }
}

void Deck::displayHand(vector<Card>* hand)
{
    std::cout << "\nCard on top: " << top.toString() << "\n";
    for (int i = 0; i < hand->size(); i++)
    {
        std::cout << i + 1 << ")" << hand->at(i).toString();
    }
}

void Deck::clear()
{
    system("clear");
}

void Deck::waitPlayer()
{

    /* Wait for player to press Enter
     */
    std::cout << "Press 'Enter' to continue..." << std::endl;
    std::string dummyInput;
    std::getline(std::cin, dummyInput);
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool Deck::isSpecial(Card card)
{
    string number = card.getNumber();
    char color = card.getColor();

    if (color == 's')
    {
        if (number.compare("draw4") == 0)
        {
            acumulated += 4;
        }
        changeColor(number);
        return true;
    }
    else if (number.compare("draw2") == 0)
    {
        acumulated += 2;
        return true;
    }
    else if (number.compare("skip") == 0)
    {
        isSkipped = true;
        return true;
    }
    else if (number.compare("reverse") == 0)
    {
        direction = !direction;
        return true;
    }
    return false;
}

void Deck::changeColor(string number)
{
    std::cout << "Select color you want to change to"
            "\n1)green"
            "\n2)red"
            "\n3)yellow"
            "\n4)blue"
         << endl;
    int seleccion;
    cin >> seleccion;
    switch (seleccion)
    {
    case 1:
    {
        top = Card('g', number);
    }
    break;
    case 2:
    {
        top = Card('r', number);
    }
    break;
    case 3:
    {
        top = Card('y', number);
    }
    break;
    case 4:
    {
        top = Card('b', number);
    }
    break;
    }
}

bool Deck::isValidSelection(Card card, Card top)
/* Check if a card can be thrown on top card (same color or same number or special card) */

{
    if (card.getColor() == top.getColor() || card.getNumber() == top.getNumber())
    {
        return true;
    }
    else if (card.getColor() == 's')
    {
        return true;
    }
    return false;
}

bool Deck::isAvailableCards(vector<Card> hand)
{
    /* Start the game
     * args:
     * int players: Number of players
     */
    for (int i = 0; i < hand.size(); i++)
    {
        if (hand.at(i).getColor() == top.getColor())
        {
            return true;
        }
        else if (hand.at(i).getNumber().compare(top.getNumber()) == 0)
        {
            return true;
        }
        else if (hand.at(i).getColor() == 's')
        {
            return true;
        }
    }

    return false;
}
Deck::~Deck(){}