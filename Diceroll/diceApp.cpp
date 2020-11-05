#include "diceApp.h"

wxIMPLEMENT_APP(diceApp);

diceApp::diceApp()
{
}

diceApp::~diceApp()
{
}

bool diceApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}

