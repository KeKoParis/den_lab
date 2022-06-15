#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	CppCLR_WinForms_GUI1::MyForm form;
	Application::Run(% form);

}

System::Void CppCLR_WinForms_GUI1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	a = -10;
	b = 10;
	double h = 0.1;

	for (double i = a; i <= b; i+=h) {
		
		y = Math::Cos(i);

		this->chart1->Series[0]->Points->AddXY(i, y);

	}

	return System::Void();
}
