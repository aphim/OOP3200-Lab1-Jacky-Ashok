// OOP3200-Lab1-Jacky-Ashok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Title:  OOP 3200 Lab 1 - Review of Classes and Objects
// Made by: Jacky Yuan, 100520106
//          Ashok Sasitharan, 100745484
// Date: Sept 18, 2020
// Description: Program used to generate and track work tickets for client requests.
// Last Modified: N/A
//

#include <iostream> 		// cin, cout
#include <iomanip>			// fixed, setprecision()
#include <sstream> 			// stringstream
#include <cmath>			// sqrt()
#include <limits>			// INT_MAX
#include <stdexcept>		// out_of_range
#include "MyConsoleInput.h" // ConsoleInput::ReadInteger()

using namespace std;

const int DAY_MONTH_YEAR = 2;

 class WorkTicket
 {
 public:
//constructor
WorkTicket(int ticketNumber = 0, string clientID = " ", int workTicketDate[DAY_MONTH_YEAR] = {1, 1, 2000}, string issueDescription = " ");

// Accessors:
//get the work ticket number
int GetWorkTicketNumber();
//get the client ID
string GetClientID();
//get the work ticket date
int GetWorkTicketDate();
//get the clients problem description
string GetDescription();


//Mutators:
// set ticket number
void SetWorkTicketNumber(int ticketNumber);
// set client ID
void SetClientID(string clientID);
// set work ticket Date
void SetWorkTicketDate(int workTicketDate[DAY_MONTH_YEAR]);
// set issue Description
void SetIssueDescription(string issueDescription);
// set work ticket
void SetWorkTicket(int ticketNumber, string clientID, int workTicketDate[DAY_MONTH_YEAR], string issueDescription);


 private:
   int ticketNumber; //work ticket number variable
   string clientID; // client ID variable
   int workTicketDate[DAY_MONTH_YEAR];
   string issueDescription; //issue description variable

 };


int main()
{
//user inputted variables
int inputtedticketNumber;
string inputtedClientID;
int inputtedworkTicketDate[DAY_MONTH_YEAR];
string inputtedissueDescription;

}



WorkTicket::WorkTicket(int ticketNumber, string clientID, int workTicketDate[DAY_MONTH_YEAR], string issueDescription)
{
  SetWorkTicket(int ticketNumber, string clientID, int workTicketDate[DAY_MONTH_YEAR], string issueDescription);
}

void WorkTicket::SetWorkTicket(int ticketNumber, string clientID, int workTicketDate[DAY_MONTH_YEAR], string issueDescription)
{
  SetWorkTicketNumber(int ticketNumber);
  // set client ID
  SetClientID(string clientID);
  // set work ticket Date
  SetWorkTicketDate(int workTicketDate[DAY_MONTH_YEAR]);
  // set issue Description
  SetIssueDescription(string issueDescription);
}

void WorkTicket::SetWorkTicketNumber(int ticketNumber)
{
  ticketNumber = inputtedticketNumber;
}


void WorkTicket::SetClientID(string clientID)
{
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
