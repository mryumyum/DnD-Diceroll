#include "cMain.h"
#include <iostream>
#include <random>
#include <string>

using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(1, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(3, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
	EVT_BUTTON(5, OnButtonClicked)
	EVT_BUTTON(6, OnButtonClicked)
	EVT_BUTTON(7, OnButtonClicked)
	EVT_BUTTON(8, OnButtonClicked)
wxEND_EVENT_TABLE()

int random(vector<int> numbers)
{
	random_device seed;
	mt19937 engine(seed());
	uniform_int_distribution<int> choose(0, numbers.size() - 1);
	return numbers[choose(engine)];
}

int d20() { return random({ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 }); }
int d12() { return random({ 1,2,3,4,5,6,7,8,9,10,11,12 }); }
int d10() { return random({ 1,2,3,4,5,6,7,8,9,10 }); }
int dt()  { return random({ 10,20,30,40,50,60,70,80,90,100 }); }
int d8()  { return random({ 1,2,3,4,5,6,7,8 }); }
int d6()  { return random({ 1,2,3,4,5,6 }); }
int d4()  { return random({ 1,2,3,4 }); }

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "DnD Dice Roll", wxPoint(30,30),wxSize(600,480)) 
{
	m_btn1 = new wxButton(this, 1, "D20",   wxPoint(10, 10), wxSize(150, 50));
	m_btn2 = new wxButton(this, 2, "D12",   wxPoint(10, 70), wxSize(150, 50));
	m_btn3 = new wxButton(this, 3, "D10",   wxPoint(10, 130), wxSize(150, 50));
	m_btn4 = new wxButton(this, 4, "DTENS", wxPoint(10, 190), wxSize(150, 50));
	m_btn5 = new wxButton(this, 5, "D8",    wxPoint(10, 250), wxSize(150, 50));
	m_btn6 = new wxButton(this, 6, "D6",    wxPoint(10, 310), wxSize(150, 50));
	m_btn7 = new wxButton(this, 7, "D4",    wxPoint(10, 370), wxSize(150, 50));
	m_btn8 = new wxButton(this, 8, "Clear", wxPoint(300, 360), wxSize(150, 50));
	m_list1 = new wxListBox(this, 101,      wxPoint(230, 30), wxSize(300, 300));
}


cMain::~cMain()
{
	delete[]m_btn1;
	delete[]m_btn2;
	delete[]m_btn3;
	delete[]m_btn4;
	delete[]m_btn5;
	delete[]m_btn6;
	delete[]m_btn7;
}

void cMain::OnButtonClicked(wxCommandEvent &evt)
{
	if (evt.GetId() == 1)
	{
		int x = d20();
		string s = to_string(x);
		m_list1->Insert("D20 Rolled: " + s, 0);
		evt.Skip();
	}

	if (evt.GetId() == 2)
	{
		int x = d12();
		string s = to_string(x);
		m_list1->Insert("D12 Rolled: " + s, 0);
		evt.Skip();
	}

	if (evt.GetId() == 3)
	{
		int x = d10();
		string s = to_string(x);
		m_list1->Insert("D10 Rolled: " + s, 0);
		evt.Skip();
	}
	
	if (evt.GetId() == 4)
	{
		int x = dt();
		string s = to_string(x);
		m_list1->Insert("DTENS Rolled: " + s, 0);
		evt.Skip();
	}
	if (evt.GetId() == 5)
	{
		int x = d8();
		string s = to_string(x);
		m_list1->Insert("D8 Rolled: " + s, 0);
		evt.Skip();
	}
	if (evt.GetId() == 6)
	{
		int x = d6();
		string s = to_string(x);
		m_list1->Insert("D6 Rolled: " + s, 0);
		evt.Skip();
	}
	if (evt.GetId() == 7)
	{
		int x = d4();
		string s = to_string(x);
		m_list1->Insert("D4 Rolled: " + s, 0);
		evt.Skip();
	}
	if (evt.GetId() == 8)
	{
		m_list1->Clear();
		evt.Skip();
	}

}
