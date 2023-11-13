#include "MainFrame.h";

void MainFrame::MainFrameStyles()
{
	inputText->SetFont(*custom_font);
	inputText->SetBackgroundColour(backgroundColor);
	inputText->SetForegroundColour(fontColor);

	todoListView->SetBackgroundColour(backgroundColor);
	todoListView->SetForegroundColour(fontColor);
	todoListView->SetFont(*custom_font);
}
