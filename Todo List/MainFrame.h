#pragma once

#include <wx/wx.h>
#include <wx/listbox.h>

class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString &title);
    void MainFrameStyles();

private:
    int padding = 16;
    int sidePadding = 5;
    wxColor fontColor = wxColor(255, 255, 255);
    wxColor backgroundColor = wxColor(100, 300, 200);
    wxFont* custom_font = new wxFont(32, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
    

    wxTextCtrl* inputText;
    wxButton* addBtn;
    wxListBox* todoListView;

    void AddTodo(wxCommandEvent& event);
};

