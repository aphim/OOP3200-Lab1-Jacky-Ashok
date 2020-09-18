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


class WorkTicket
{
public:
    //constructor
    WorkTicket(int ticketNumber = 0, string clientID = " ", int workTicketDay = 1, int workTicketMonth = 1, int workTicketYear = 2000, string issueDescription = " ");


    // Accessors:
    //get the work ticket number
    int GetWorkTicketNumber();
    //get the client ID
    string GetClientID();
    //get the work ticket date
    int GetWorkTicketDay();
    //get the work ticket month
    int GetWorkTicketMonth();
    //get the work ticket year
    int GetWorkTicketYear();
    //get the clients problem description
    string GetDescription();


    //Mutators:
    // set ticket number
    void SetWorkTicketNumber(int ticketNumber);
    // set client ID
    void SetClientID(string clientID);
    // set work ticket Date
    void SetWorkTicketDay(int workTicketDay);
    // set work ticket Month
    void SetWorkTicketMonth(int workTicketMonth);
    // set work ticket Year
    void SetWorkTicketYear(int workTicketYear);
    // set issue Description
    void SetIssueDescription(string issueDescription);
    // set work ticket
    void SetWorkTicket(int ticketNumber, string clientID, int workTicketDay, int workTicketMonth, int workTicketYear, string issueDescription);


private:
    int ticketNumber; //work ticket number variable
    string clientID; // client ID variable
    int workTicketDay;//work ticket day variable
    int workTicketMonth;//work ticket month variable
    int workTicketYear;//work ticket year variable
    string issueDescription; //issue description variable

};


int main()
{
    //user inputted variables
    int inputtedTicketNumber;
    string inputtedClientID;
    int inputtedWorkTicketDay;
    int inputtedWorkTicketMonth;
    int inputtedWorkTicketYear;
    string inputtedIssueDescription;

}



WorkTicket::WorkTicket(int inputtedTicketNumber, string inputtedClientID, int inputtedWorkTicketDay, int inputtedWorkTicketMonth, int inputtedWorkTicketYear, string inputtedIssueDescription)
{
    SetWorkTicket(inputtedTicketNumber, inputtedClientID, inputtedWorkTicketDay, inputtedWorkTicketMonth, inputtedWorkTicketYear, inputtedIssueDescription);
}

void WorkTicket::SetWorkTicket(int inputtedTicketNumber, string inputtedClientID, int inputtedWorkTicketDay, int inputtedWorkTicketMonth, int inputtedWorkTicketYear, string inputtedIssueDescription)
{
    SetWorkTicketNumber(inputtedTicketNumber);
    // set client ID
    SetClientID(inputtedClientID);
    // set work ticket Day
    SetWorkTicketDay(inputtedWorkTicketDay);
    // set work ticket Month
    SetWorkTicketDay(inputtedWorkTicketMonth);
    // set work ticket Year
    SetWorkTicketDay(inputtedWorkTicketYear);
    // set issue Description
    SetIssueDescription(inputtedIssueDescription);
}

//setter for the work ticket number
void WorkTicket::SetWorkTicketNumber(int inputtedTicketNumber)
{
    ticketNumber = inputtedTicketNumber;
}

//setter for the client ID
void WorkTicket::SetClientID(string inputtedClientID)
{
    clientID = inputtedClientID;
}

//setter for workTicketDay
void WorkTicket::SetWorkTicketDay(int inputtedWorkTicketDay)
{
    workTicketDay = inputtedWorkTicketDay;
}

//setter for the work ticket month
void WorkTicket::SetWorkTicketMonth(int inputtedWorkTicketMonth)
{
    workTicketMonth = inputtedWorkTicketMonth;
}

//setter for the work ticket year
void WorkTicket::SetWorkTicketYear(int inputtedWorkTicketYear)
{
    workTicketYear = inputtedWorkTicketYear;
}

//setter for the work ticket description
void WorkTicket::SetIssueDescription(string inputtedIssueDescription)
{
    issueDescription = inputtedIssueDescription;
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
