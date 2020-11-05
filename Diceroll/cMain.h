#pragma once
#include "wx/wx.h"
#include <string>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	wxButton *m_btn1 = nullptr;
	wxButton *m_btn2 = nullptr;
	wxButton *m_btn3 = nullptr;
	wxButton *m_btn4 = nullptr;
	wxButton *m_btn5 = nullptr;
	wxButton *m_btn6 = nullptr;
	wxButton *m_btn7 = nullptr;
	wxButton *m_btn8 = nullptr;
	wxTextCtrl *m_text = nullptr;
	wxListBox *m_list1 = nullptr;

	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton **btn;
	int *nField = nullptr;
	bool bFirstClick = true;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

