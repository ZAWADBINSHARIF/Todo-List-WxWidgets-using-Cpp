#include "MainFrame.h"

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title) {

	auto panel = new wxPanel(this);

	inputText = new wxTextCtrl(panel, wxID_ANY, "");
	addBtn = new wxButton(panel, wxID_ANY, "Add");
	todoListView = new wxListBox(panel, wxID_ANY);

	auto main_sizer = new wxBoxSizer(wxVERTICAL);
	auto top_sizer = new wxBoxSizer(wxHORIZONTAL);

	top_sizer->Add(inputText, 1, wxRIGHT, sidePadding);
	top_sizer->Add(addBtn, 0, wxEXPAND);

	main_sizer->Add(top_sizer, 0, wxEXPAND | wxALL, padding);
	main_sizer->Add(todoListView, 1, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, padding);
	
	panel->SetSizerAndFit(main_sizer);

	this->SetBackgroundColour(backgroundColor);

	addBtn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::AddTodo, this);
}

void MainFrame::AddTodo(wxCommandEvent& event)
{
	auto todo = inputText->GetValue();

	inputText->SetFocus();
	
	if (!todo) return;
	
	todoListView->AppendString(todo);
	inputText->SetValue("");
	event.Skip();
}