FrameHome::FrameHome(const wxString& title, const wxPoint& pos, const wxSize& size)
    :wxFrame(NULL, wxID_ANY, title, pos, size), boton(nullptr), secondFrame(nullptr){


    wxScrolledWindow* containerscrolled = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxVSCROLL | wxHSCROLL);
    containerscrolled->SetBackgroundColour(wxColour(20, 40, 60));
    
    wxBoxSizer* buttonBoxSizer = new wxBoxSizer(wxHORIZONTAL);


    Panel* panel1 = new Panel(containerscrolled);

    buttonBoxSizer->Add(panel1, 0, wxALIGN_TOP, 5);

    for (int i = 0; i < 40; i++) {

        boton = new wxButton(containerscrolled, wxID_ANY, wxString::Format("boton %d", i + 1), wxDefaultPosition, wxDefaultSize);

        buttonBoxSizer->Add(boton, 0, wxALIGN_TOP, 5);
    }

    containerscrolled->SetSizer(buttonBoxSizer);

    containerscrolled->SetScrollRate(0, 10);

     // Deshabilita el botón de maximizar
    Maximize();  // Maximiza el marco para ocupar toda la pantalla
    SetMinSize(wxSize(wxGetDisplaySize()));

}
