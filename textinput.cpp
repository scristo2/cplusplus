// Crear un área de texto (wxTextCtrl) que se expande solo verticalmente
        wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxHSCROLL | wxEXPAND);
