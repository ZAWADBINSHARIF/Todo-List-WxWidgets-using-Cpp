#pragma once

#include <wx/wx.h>
#include <wx/listbox.h>

class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString &title);

private:
    int padding = 16;
    int sidePadding = 5;

    wxTextCtrl* inputText;
    wxButton* addBtn;
    wxListBox* todoListView;

    void AddTodo(wxCommandEvent& event);
};

