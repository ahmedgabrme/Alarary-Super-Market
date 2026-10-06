#pragma once
#include "namy_savy.h"
#include <msclr/marshal_cppstd.h>
namespace alarary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for savy_maily
	/// </summary>
	public ref class savy_maily : public System::Windows::Forms::Form
	{
	public:
		savy_maily(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~savy_maily()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse1;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse2;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse3;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse4;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse5;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse6;

	private: System::ComponentModel::IContainer^ components;












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(savy_maily::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gunaElipse1 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse2 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse3 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse4 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse5 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse6 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-2, -1);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(659, 56);
			this->panel1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(153, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(396, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer\'s details";
			this->label1->Click += gcnew System::EventHandler(this, &savy_maily::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(343, 60);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(304, 72);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &savy_maily::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-4, 55);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(304, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &savy_maily::pictureBox2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(57, 81);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 27);
			this->textBox1->TabIndex = 1;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Name";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &savy_maily::textBox1_TextChanged_1);
			this->textBox1->Enter += gcnew System::EventHandler(this, &savy_maily::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &savy_maily::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(404, 81);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Email";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &savy_maily::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &savy_maily::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &savy_maily::textBox2_Leave);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(217, 112);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 173);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &savy_maily::button1_Click);
			// 
			// gunaElipse1
			// 
			this->gunaElipse1->Radius = 25;
			this->gunaElipse1->TargetControl = this;
			// 
			// gunaElipse2
			// 
			this->gunaElipse2->Radius = 18;
			this->gunaElipse2->TargetControl = this;
			// 
			// gunaElipse3
			// 
			this->gunaElipse3->TargetControl = this;
			// 
			// gunaElipse4
			// 
			this->gunaElipse4->Radius = 16;
			this->gunaElipse4->TargetControl = this;
			// 
			// gunaElipse5
			// 
			this->gunaElipse5->Radius = 10;
			this->gunaElipse5->TargetControl = this;
			// 
			// gunaElipse6
			// 
			this->gunaElipse6->TargetControl = this;
			// 
			// savy_maily
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(658, 262);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"savy_maily";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = textBox1->Text;
		String^ email = textBox2->Text;
		// 1. Check empty textboxes
		if (name == "" || name == "Name" || email == "" || email == "Email")
		{
			MessageBox::Show("Please fill all fields", "Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		// 2. Check email format

		else if (!email->Contains("@") || !email->Contains("."))
		{
			MessageBox::Show("Email Format is not valid", "Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		// 3. If everything is OK
		MessageBox::Show("Data is valid", "Good Job",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		addCustomerName(msclr::interop::marshal_as<std::string>(name));
		addCustomerEmail(msclr::interop::marshal_as<std::string>(email));

		this->Close();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Name") {
			textBox1->Text = "";
			textBox1->ForeColor = System::Drawing::Color::Black;


		}
	}
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Name";
			textBox1->ForeColor = System::Drawing::Color::LightGray;


		}
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			textBox2->Text = "Email";
			textBox2->ForeColor = System::Drawing::Color::LightGray;


		}
	}
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Email") {
			textBox2->Text = "";
			textBox2->ForeColor = System::Drawing::Color::Black;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
