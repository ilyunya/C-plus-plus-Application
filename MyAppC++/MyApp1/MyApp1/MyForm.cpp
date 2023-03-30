#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MyApp1::MyForm form;
	Application::Run(% form);
}

System::Void MyApp1::MyForm::îòêðûòüÂêëàäêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyApp1::MyForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void MyApp1::MyForm::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	// 9; 29
	groupBox1->Visible = true;
	groupBox1->Location = Point(9,29);

	groupBox2->Visible = false;
}

System::Void MyApp1::MyForm::âêëàäêà2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBox2->Visible = true;
	groupBox2->Location = Point(9, 29);

	groupBox1->Visible = false;
}

System::Void MyApp1::MyForm::ìåíÿòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBox1->Visible) {
		groupBox2->Visible = true;
		groupBox2->Location = Point(9, 29);

		groupBox1->Visible = false;
	}
	else {
		groupBox1->Visible = true;
		groupBox1->Location = Point(9, 29);

		groupBox2->Visible = false;
	}
}
