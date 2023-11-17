// Crear un área de texto (wxTextCtrl) que se expande solo verticalmente
        wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxHSCROLL | wxEXPAND);


##dtectar cambios en el input

<< esto en el constructor de la clase mencionada
Bind(wxEVT_TEXT, &FrameHome::detectTextInput, this, tested->GetId()); ##tested es la variable que le di al input

void FrameHome::detectTextInput(wxCommandEvent& event) {

    wxString texto = dynamic_cast<wxTextCtrl*>(wxWindow::FindWindowById(event.GetId()))->GetValue();


}
