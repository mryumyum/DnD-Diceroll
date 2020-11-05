#pragma once

#include "wx/wx.h"
#include "cMain.h"

class diceApp : public wxApp
{
public:
	diceApp();
	~diceApp();

private:
	cMain *m_frame1 = nullptr;

public:
	virtual bool OnInit();

};

