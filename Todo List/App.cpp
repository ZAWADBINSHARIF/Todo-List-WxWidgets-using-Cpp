#include "App.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	auto frame = new MainFrame("Todo List");
	frame->MainFrameStyles();
	frame->Show();
	frame->SetClientSize(400, 500);
	frame->Center();
	return true;
}