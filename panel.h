#pragma once
#include<wx/wx.h>
class Panel : public wxPanel {
public:
	Panel(wxWindow* parent);
};

luego cuando lo menciones en .cpp
  Panel::Panel(wxWindow* parent)
    :wxPanel(parent){

    this->SetBackgroundColour(wxColour(255, 255, 255));

    wxBoxSizer* panelsizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText* text = new wxStaticText(this, wxID_ANY, wxT("hello panel 1"), wxDefaultPosition, wxDefaultSize);

    panelsizer->Add(text, 0, wxALIGN_TOP, 5);


    SetSizer(panelsizer);
}
