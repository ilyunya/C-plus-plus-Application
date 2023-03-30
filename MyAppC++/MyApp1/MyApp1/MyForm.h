#pragma once

namespace MyApp1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage3;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;





	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;




	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;




	private: System::Windows::Forms::TabControl^ tabControl1;






	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::DimGray;
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->menuStrip3);
			this->tabPage3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(797, 533);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"directory 3";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->pictureBox3);
			this->groupBox5->Location = System::Drawing::Point(355, 10);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(400, 472);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->ImageLocation = L"C:\\Users\\Домашний\\Desktop\\ИЕРАРХИЯ - программирования\\Материал(Космос)";
			this->pictureBox3->InitialImage = nullptr;
			this->pictureBox3->Location = System::Drawing::Point(-41, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(453, 475);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Location = System::Drawing::Point(9, 29);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(332, 453);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(6, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 19);
			this->label5->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(299, 380);
			this->label6->TabIndex = 0;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// menuStrip3
			// 
			this->menuStrip3->BackColor = System::Drawing::Color::Gray;
			this->menuStrip3->Location = System::Drawing::Point(3, 3);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Size = System::Drawing::Size(791, 24);
			this->menuStrip3->TabIndex = 4;
			this->menuStrip3->Text = L"menuStrip1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::DimGray;
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(797, 533);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"directory 2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Location = System::Drawing::Point(355, 10);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(400, 472);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"C:\\UseC:\\Users\\Домашний\\Desktop\\ИЕРАРХИЯ - программирования\\Материал(Космос)";
			this->pictureBox2->InitialImage = nullptr;
			this->pictureBox2->Location = System::Drawing::Point(-41, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(453, 475);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Location = System::Drawing::Point(9, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(332, 453);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 19);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(6, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(319, 437);
			this->label3->TabIndex = 0;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::Color::Gray;
			this->menuStrip2->Location = System::Drawing::Point(3, 3);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(791, 24);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip1";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::DimGray;
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Help;
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(797, 533);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"directory 1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Location = System::Drawing::Point(355, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(400, 472);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\UseC:\\Users\\Домашний\\Desktop\\ИЕРАРХИЯ - программирования\\Материал(Космос)";
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-41, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(453, 475);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(9, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 453);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(6, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 114);
			this->label4->TabIndex = 1;
			this->label4->Text = L"О справочнике: \r\n\r\nТут описано управление ракетой, и кратко, что\r\nвам вцелом нужн"
				L"о делать.\r\n\r\nшрифт: AA Bebas Neue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"справочник по игре: ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gray;
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(791, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(805, 559);
			this->tabControl1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 550);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void открытьВкладкуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void вкладка2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менятьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
