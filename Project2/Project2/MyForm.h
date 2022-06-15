#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ tmr;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ pic;

	private: System::Windows::Forms::PictureBox^ pic2;

	private: System::Windows::Forms::PictureBox^ pic4;



	private: System::Windows::Forms::PictureBox^ pic3;


































	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tmr = (gcnew System::Windows::Forms::Timer(this->components));
			this->pic = (gcnew System::Windows::Forms::PictureBox());
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->pic4 = (gcnew System::Windows::Forms::PictureBox());
			this->pic3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
			this->SuspendLayout();
			// 
			// tmr
			// 
			this->tmr->Interval = 80;
			this->tmr->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pic
			// 
			this->pic->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic.Image")));
			this->pic->Location = System::Drawing::Point(266, 251);
			this->pic->Name = L"pic";
			this->pic->Size = System::Drawing::Size(30, 30);
			this->pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic->TabIndex = 0;
			this->pic->TabStop = false;
			// 
			// pic2
			// 
			this->pic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.Image")));
			this->pic2->Location = System::Drawing::Point(443, 82);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(51, 39);
			this->pic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic2->TabIndex = 2;
			this->pic2->TabStop = false;
			// 
			// pic4
			// 
			this->pic4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.Image")));
			this->pic4->Location = System::Drawing::Point(99, 57);
			this->pic4->Name = L"pic4";
			this->pic4->Size = System::Drawing::Size(46, 55);
			this->pic4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic4->TabIndex = 4;
			this->pic4->TabStop = false;
			// 
			// pic3
			// 
			this->pic3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.Image")));
			this->pic3->Location = System::Drawing::Point(233, 91);
			this->pic3->Name = L"pic3";
			this->pic3->Size = System::Drawing::Size(30, 30);
			this->pic3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic3->TabIndex = 5;
			this->pic3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(548, 397);
			this->Controls->Add(this->pic3);
			this->Controls->Add(this->pic4);
			this->Controls->Add(this->pic2);
			this->Controls->Add(this->pic);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: double x = 0, y = 0;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {


		this->pic->Location = Drawing::Point(20 * Math::Cos(50 * x) + 250, 20 * Math::Sin(5 * y) + 30);
		this->pic3->Location = Drawing::Point(40 * Math::Cos(60 * x) + 80, 10 * Math::Sin(65 * y) + 50);
		this->pic2->Location = Drawing::Point(60 * Math::Cos(80 * x) + 80, 58 * Math::Sin(15 * y) + 200);
		this->pic4->Location = Drawing::Point(30 * Math::Cos(25 * x) + 200, 30 * Math::Sin(45 * y) + 200);


		x += 0.01;
		y += 0.01;

		if (x == 3.14) {
			x = 0;
		}
		if (y == 3.14) {
			y = 0;
		}
	
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->tmr->Enabled = true;
		this->tmr->Interval = 50;


	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
