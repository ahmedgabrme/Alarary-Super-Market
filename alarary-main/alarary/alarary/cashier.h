#pragma once

#include "cashier_utils.h"
// sortProductsByMostSold(*products);
#include "datafunc.h"
#include "savy_maily.h"
#include "fatoora_savy.h"
#include <algorithm>
#include<Windows.h>


namespace alarary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cashier
	/// </summary>
	public ref class cashier : public System::Windows::Forms::Form
	{
	public:
		cashier(void)
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
		~cashier()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: Guna::UI::WinForms::GunaElipse^ gunaElipse7;


































	private: Guna::UI::WinForms::GunaElipse^ gunaElipse1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse5;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse3;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse4;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse2;
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse6;






	private: System::Windows::Forms::PictureBox^ pictureBox6;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ pn_Fatoora;
	private: System::Windows::Forms::Panel^ pn_Welcome;
	private: System::Windows::Forms::Label^ Welcome_message;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pn_recent_fatooras;
	private: System::Windows::Forms::Panel^ table_head_recent_fatooras;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ table_recent_fatooras;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ Fatoora;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;


	private: Guna::UI::WinForms::GunaButton^ clear_fatoora;
	private: Guna::UI::WinForms::GunaButton^ save_fatoora;
	private: Guna::UI::WinForms::GunaButton^ add_item;
	private: System::Windows::Forms::Button^ xaya;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ cart_num;
	private:
		std::vector<Product>* products;

































	protected:














































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cashier::typeid));
			this->gunaElipse7 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse1 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->gunaElipse5 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse3 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse4 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse2 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse6 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->xaya = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Fatoora = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_Fatoora = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cart_num = (gcnew System::Windows::Forms::PictureBox());
			this->save_fatoora = (gcnew Guna::UI::WinForms::GunaButton());
			this->add_item = (gcnew Guna::UI::WinForms::GunaButton());
			this->clear_fatoora = (gcnew Guna::UI::WinForms::GunaButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_Welcome = (gcnew System::Windows::Forms::Panel());
			this->pn_recent_fatooras = (gcnew System::Windows::Forms::Panel());
			this->table_recent_fatooras = (gcnew System::Windows::Forms::Panel());
			this->table_head_recent_fatooras = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Welcome_message = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pn_Fatoora->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cart_num))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->pn_Welcome->SuspendLayout();
			this->pn_recent_fatooras->SuspendLayout();
			this->table_head_recent_fatooras->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaElipse7
			// 
			this->gunaElipse7->TargetControl = this;
			// 
			// gunaElipse1
			// 
			this->gunaElipse1->TargetControl = this;
			// 
			// gunaElipse5
			// 
			this->gunaElipse5->TargetControl = this;
			// 
			// gunaElipse3
			// 
			this->gunaElipse3->TargetControl = this;
			// 
			// gunaElipse4
			// 
			this->gunaElipse4->TargetControl = this;
			// 
			// gunaElipse2
			// 
			this->gunaElipse2->Radius = 10;
			this->gunaElipse2->TargetControl = this;
			// 
			// gunaElipse6
			// 
			this->gunaElipse6->TargetControl = this;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(7, 10);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(149, 117);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->xaya);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(179, 665);
			this->panel2->TabIndex = 5;
			// 
			// xaya
			// 
			this->xaya->BackColor = System::Drawing::Color::Transparent;
			this->xaya->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xaya.BackgroundImage")));
			this->xaya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->xaya->Enabled = false;
			this->xaya->FlatAppearance->BorderSize = 0;
			this->xaya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xaya->Location = System::Drawing::Point(3, 631);
			this->xaya->Margin = System::Windows::Forms::Padding(0);
			this->xaya->Name = L"xaya";
			this->xaya->Size = System::Drawing::Size(33, 34);
			this->xaya->TabIndex = 6;
			this->xaya->UseVisualStyleBackColor = false;
			this->xaya->Visible = false;
			this->xaya->Click += gcnew System::EventHandler(this, &cashier::xaya_Click_1);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(178, 302);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(852, 58);
			this->panel4->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Fatoora);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(3, 157);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(173, 88);
			this->panel3->TabIndex = 5;
			// 
			// Fatoora
			// 
			this->Fatoora->BackColor = System::Drawing::Color::Teal;
			this->Fatoora->Dock = System::Windows::Forms::DockStyle::Right;
			this->Fatoora->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fatoora->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Fatoora->Location = System::Drawing::Point(56, 0);
			this->Fatoora->Name = L"Fatoora";
			this->Fatoora->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Fatoora->Size = System::Drawing::Size(117, 88);
			this->Fatoora->TabIndex = 3;
			this->Fatoora->Text = L"Fatoora";
			this->Fatoora->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Fatoora->Click += gcnew System::EventHandler(this, &cashier::Fatoora_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 88);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &cashier::pictureBox2_Click_1);
			// 
			// pn_Fatoora
			// 
			this->pn_Fatoora->Controls->Add(this->label13);
			this->pn_Fatoora->Controls->Add(this->cart_num);
			this->pn_Fatoora->Controls->Add(this->save_fatoora);
			this->pn_Fatoora->Controls->Add(this->add_item);
			this->pn_Fatoora->Controls->Add(this->clear_fatoora);
			this->pn_Fatoora->Controls->Add(this->panel7);
			this->pn_Fatoora->Controls->Add(this->panel6);
			this->pn_Fatoora->Controls->Add(this->panel5);
			this->pn_Fatoora->Location = System::Drawing::Point(179, 93);
			this->pn_Fatoora->Name = L"pn_Fatoora";
			this->pn_Fatoora->Size = System::Drawing::Size(854, 572);
			this->pn_Fatoora->TabIndex = 7;
			this->pn_Fatoora->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cashier::pn_Fatoora_Paint);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(738, 47);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 28);
			this->label13->TabIndex = 18;
			this->label13->Text = L"1";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &cashier::label13_Click);
			// 
			// cart_num
			// 
			this->cart_num->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cart_num.Image")));
			this->cart_num->Location = System::Drawing::Point(682, 14);
			this->cart_num->Name = L"cart_num";
			this->cart_num->Size = System::Drawing::Size(142, 114);
			this->cart_num->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cart_num->TabIndex = 17;
			this->cart_num->TabStop = false;
			this->cart_num->Click += gcnew System::EventHandler(this, &cashier::cart_num_Click);
			// 
			// save_fatoora
			// 
			this->save_fatoora->AllowDrop = true;
			this->save_fatoora->Animated = true;
			this->save_fatoora->AnimationHoverSpeed = 0.07F;
			this->save_fatoora->AnimationSpeed = 0.03F;
			this->save_fatoora->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->save_fatoora->BaseColor = System::Drawing::Color::DarkTurquoise;
			this->save_fatoora->BorderColor = System::Drawing::Color::Black;
			this->save_fatoora->BorderSize = 2;
			this->save_fatoora->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->save_fatoora->ForeColor = System::Drawing::Color::White;
			this->save_fatoora->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_fatoora.Image")));
			this->save_fatoora->ImageSize = System::Drawing::Size(25, 25);
			this->save_fatoora->Location = System::Drawing::Point(694, 385);
			this->save_fatoora->Name = L"save_fatoora";
			this->save_fatoora->OnHoverBaseColor = System::Drawing::Color::Black;
			this->save_fatoora->OnHoverBorderColor = System::Drawing::Color::Black;
			this->save_fatoora->OnHoverForeColor = System::Drawing::Color::Lime;
			this->save_fatoora->OnHoverImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_fatoora.OnHoverImage")));
			this->save_fatoora->OnPressedColor = System::Drawing::Color::IndianRed;
			this->save_fatoora->Size = System::Drawing::Size(148, 52);
			this->save_fatoora->TabIndex = 5;
			this->save_fatoora->Text = L"Save Fatoora";
			this->save_fatoora->Click += gcnew System::EventHandler(this, &cashier::save_fatoora_Click);
			// 
			// add_item
			// 
			this->add_item->AllowDrop = true;
			this->add_item->Animated = true;
			this->add_item->AnimationHoverSpeed = 0.07F;
			this->add_item->AnimationSpeed = 0.03F;
			this->add_item->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->add_item->BaseColor = System::Drawing::Color::DarkTurquoise;
			this->add_item->BorderColor = System::Drawing::Color::Black;
			this->add_item->BorderSize = 2;
			this->add_item->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->add_item->ForeColor = System::Drawing::Color::White;
			this->add_item->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_item.Image")));
			this->add_item->ImageSize = System::Drawing::Size(25, 25);
			this->add_item->Location = System::Drawing::Point(694, 200);
			this->add_item->Name = L"add_item";
			this->add_item->OnHoverBaseColor = System::Drawing::Color::Black;
			this->add_item->OnHoverBorderColor = System::Drawing::Color::Black;
			this->add_item->OnHoverForeColor = System::Drawing::Color::GreenYellow;
			this->add_item->OnHoverImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_item.OnHoverImage")));
			this->add_item->OnPressedColor = System::Drawing::Color::IndianRed;
			this->add_item->Size = System::Drawing::Size(148, 52);
			this->add_item->TabIndex = 3;
			this->add_item->Text = L"Add Item";
			this->add_item->Click += gcnew System::EventHandler(this, &cashier::add_item_Click);
			// 
			// clear_fatoora
			// 
			this->clear_fatoora->AllowDrop = true;
			this->clear_fatoora->Animated = true;
			this->clear_fatoora->AnimationHoverSpeed = 0.07F;
			this->clear_fatoora->AnimationSpeed = 0.03F;
			this->clear_fatoora->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->clear_fatoora->BaseColor = System::Drawing::Color::DarkTurquoise;
			this->clear_fatoora->BorderColor = System::Drawing::Color::Black;
			this->clear_fatoora->BorderSize = 2;
			this->clear_fatoora->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->clear_fatoora->ForeColor = System::Drawing::Color::White;
			this->clear_fatoora->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear_fatoora.Image")));
			this->clear_fatoora->ImageSize = System::Drawing::Size(25, 25);
			this->clear_fatoora->Location = System::Drawing::Point(694, 293);
			this->clear_fatoora->Name = L"clear_fatoora";
			this->clear_fatoora->OnHoverBaseColor = System::Drawing::Color::Black;
			this->clear_fatoora->OnHoverBorderColor = System::Drawing::Color::Black;
			this->clear_fatoora->OnHoverForeColor = System::Drawing::Color::Red;
			this->clear_fatoora->OnHoverImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear_fatoora.OnHoverImage")));
			this->clear_fatoora->OnPressedColor = System::Drawing::Color::IndianRed;
			this->clear_fatoora->Size = System::Drawing::Size(148, 52);
			this->clear_fatoora->TabIndex = 4;
			this->clear_fatoora->Text = L"Clear Fatoora";
			this->clear_fatoora->Click += gcnew System::EventHandler(this, &cashier::clear_fatoora_Click);
			// 
			// panel7
			// 
			this->panel7->AutoScroll = true;
			this->panel7->Location = System::Drawing::Point(26, 186);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(662, 397);
			this->panel7->TabIndex = 16;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cashier::panel7_Paint);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Location = System::Drawing::Point(26, 124);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(662, 56);
			this->panel6->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(211, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 35);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Qty";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(462, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 35);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Total";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(78, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 35);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Item";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(333, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 35);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Price";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(12, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 35);
			this->label10->TabIndex = 0;
			this->label10->Text = L"#";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &cashier::label10_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(26, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(468, 98);
			this->panel5->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 16, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(314, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &cashier::textBox1_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &cashier::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 16, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(26, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &cashier::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 16, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(289, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 49);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Quantity:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &cashier::label7_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 16, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(6, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 49);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Barcode:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_Welcome
			// 
			this->pn_Welcome->Controls->Add(this->pn_recent_fatooras);
			this->pn_Welcome->Controls->Add(this->label2);
			this->pn_Welcome->Controls->Add(this->Welcome_message);
			this->pn_Welcome->Location = System::Drawing::Point(179, 93);
			this->pn_Welcome->Name = L"pn_Welcome";
			this->pn_Welcome->Size = System::Drawing::Size(854, 572);
			this->pn_Welcome->TabIndex = 8;
			// 
			// pn_recent_fatooras
			// 
			this->pn_recent_fatooras->BackColor = System::Drawing::Color::Linen;
			this->pn_recent_fatooras->Controls->Add(this->table_recent_fatooras);
			this->pn_recent_fatooras->Controls->Add(this->table_head_recent_fatooras);
			this->pn_recent_fatooras->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_recent_fatooras->Location = System::Drawing::Point(0, 178);
			this->pn_recent_fatooras->Name = L"pn_recent_fatooras";
			this->pn_recent_fatooras->Size = System::Drawing::Size(854, 394);
			this->pn_recent_fatooras->TabIndex = 1;
			// 
			// table_recent_fatooras
			// 
			this->table_recent_fatooras->AutoScroll = true;
			this->table_recent_fatooras->Location = System::Drawing::Point(97, 81);
			this->table_recent_fatooras->Name = L"table_recent_fatooras";
			this->table_recent_fatooras->Size = System::Drawing::Size(679, 265);
			this->table_recent_fatooras->TabIndex = 16;
			this->table_recent_fatooras->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cashier::table_recent_fatooras_Paint);
			// 
			// table_head_recent_fatooras
			// 
			this->table_head_recent_fatooras->BackColor = System::Drawing::Color::LightSeaGreen;
			this->table_head_recent_fatooras->Controls->Add(this->label5);
			this->table_head_recent_fatooras->Controls->Add(this->label4);
			this->table_head_recent_fatooras->Controls->Add(this->label3);
			this->table_head_recent_fatooras->Location = System::Drawing::Point(97, 19);
			this->table_head_recent_fatooras->Name = L"table_head_recent_fatooras";
			this->table_head_recent_fatooras->Size = System::Drawing::Size(679, 56);
			this->table_head_recent_fatooras->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(516, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 35);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Total";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(274, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 35);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Customer";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(41, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 35);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Fatoora";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(583, 76);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ready for Al-Arnab Alga2e3!";
			this->label2->Click += gcnew System::EventHandler(this, &cashier::Welcome_message_Click);
			// 
			// Welcome_message
			// 
			this->Welcome_message->Font = (gcnew System::Drawing::Font(L"Segoe Script", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome_message->Location = System::Drawing::Point(16, 44);
			this->Welcome_message->Name = L"Welcome_message";
			this->Welcome_message->Size = System::Drawing::Size(446, 84);
			this->Welcome_message->TabIndex = 0;
			this->Welcome_message->Text = L"Welcome Mr. Cashier, ";
			this->Welcome_message->Click += gcnew System::EventHandler(this, &cashier::Welcome_message_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(179, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(854, 93);
			this->panel1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(770, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 61);
			this->button1->TabIndex = 14;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cashier::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 87);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &cashier::pictureBox1_Click_1);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 40, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(109, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 93);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Cashier";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &cashier::label1_Click_1);
			// 
			// cashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 665);
			this->Controls->Add(this->pn_Welcome);
			this->Controls->Add(this->pn_Fatoora);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"cashier";
			this->Text = L"cashier";
			this->Load += gcnew System::EventHandler(this, &cashier::cashier_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pn_Fatoora->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cart_num))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->pn_Welcome->ResumeLayout(false);
			this->pn_recent_fatooras->ResumeLayout(false);
			this->table_head_recent_fatooras->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private:
		void todays_customers() {
			int new_panel_welcome = 5;
			int bgcolor_row_welcome = 1;
			int item_num_welcome = 1;

			
			vector<pair<double, string>> totals_today = getCartTotals();

			for(int i = 0; i < totals_today.size(); ++i) {
				int label_per_panel_welcome = 2;
				Panel^ p = gcnew Panel();
				p->Size = System::Drawing::Size(800, 45);
				p->Location = System::Drawing::Point(0, new_panel_welcome);
				if (bgcolor_row_welcome) {
					p->BackColor = System::Drawing::SystemColors::ControlLight;
				}
				else {
					p->BackColor = System::Drawing::SystemColors::Control;
				}
				
				bgcolor_row_welcome ^= 1;
				for (int j = 0; j < 3; j++) {
					Label^ lbl = gcnew Label();
					lbl->AutoSize = false;
					lbl->Width = 200;
					//lbl->Height = 25;
					lbl->AutoEllipsis = true;
					lbl->TextAlign = ContentAlignment::MiddleCenter;
					if (j == 0) {
						lbl->Text = Convert::ToString(item_num_welcome);
						item_num_welcome++;
					}
					else if (j == 1) {
						std::string totalini = totals_today[i].second;
						lbl->Text = gcnew String(totalini.c_str());
						lbl->Width = 240;
					}
					else if (j == 2) {
						lbl->Text = totals_today[i].first.ToString();
						lbl->Width = 240;
					}

					lbl->Location = System::Drawing::Point(label_per_panel_welcome, 3);
					lbl->Font = gcnew System::Drawing::Font("Bell MT", 15.0f, System::Drawing::FontStyle::Bold);
					p->Controls->Add(lbl);
					if (j == 0) {
						label_per_panel_welcome += 200;
					}
					else if (j == 1) {
						label_per_panel_welcome += 235;
					}
					
				}

				this->table_recent_fatooras->Controls->Add(p);

				new_panel_welcome += 45;
			}
		}
private:
	System::Void cashier_Load(System::Object^ sender, System::EventArgs^ e) {
		products = new std::vector<Product>(loaditmesFromFile());
		todays_customers();
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Fatoora_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Welcome_message_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Fatoora_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pn_Fatoora->BringToFront();
	Fatoora->BackColor = System::Drawing::Color::LightSeaGreen;
	panel3->BackColor = System::Drawing::Color::LightSeaGreen;

	
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pn_Fatoora->BringToFront();
	Fatoora->BackColor = System::Drawing::Color::LightSeaGreen;
	panel3->BackColor = System::Drawing::Color::LightSeaGreen;
}

private: System::Void pn_Fatoora_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	todays_customers();
	panel3->BackColor = System::Drawing::Color::Teal;
	Fatoora->BackColor = System::Drawing::Color::Teal;
	pn_Welcome->BringToFront();
	// Show Recent Fatooras
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	todays_customers();
	panel3->BackColor = System::Drawing::Color::Teal;
	Fatoora->BackColor = System::Drawing::Color::Teal;
	pn_Welcome->BringToFront();

	// Show Recent Fatooras
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Message Box
	System::Windows::Forms::DialogResult result;

	result = MessageBox::Show(
		"Are you sure?",
		"Confirmation",
		MessageBoxButtons::OKCancel,
		MessageBoxIcon::Warning
	);

	if (result == System::Windows::Forms::DialogResult::OK){
		// Save Products Vector to a CSV file
		bool fl = false;
		std::ofstream file("items_data.csv");
		if (!file.is_open()) {
			fl = true;
		}
		if (fl)
		{
			System::Windows::Forms::MessageBox::Show("Failed to open data file for saving.", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			System::Windows::Forms::Application::Exit();
		}
		file << "barcode,name,category,quantity,price,sold_items\n";
		for (int i = 0; i < this->products->size(); ++i)
		{
			file << products->at(i).toCSV() << '\n';

		}
		file.close();
		System::Windows::Forms::Application::Exit();
		Environment::Exit(0);
	}
	
}

	 int cart_number = 1; // initailize cart number every time you open the application
	 int new_panel = 1;
	 int bgcolor_row = 1;
	 int item_num = 1;

private: System::Void add_item_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ barcode = textBox1->Text;
	String^ qty = textBox2->Text;
	int entered_qty_num;


	String^ item_name;
	if (barcode != "" && qty != "" && qty != "0") {
		entered_qty_num = Convert::ToInt32(qty);

		int qty_num = 0;
		double price_num = 0;
		bool found = false;
		
		for (int i = 0; i < products->size(); ++i) {
			String^ prods_bar_cd = (products->at(i).get_barcode_cashier());
			if (prods_bar_cd == barcode) {
				found = true;
				qty_num = products->at(i).get_qty_cashier();
				//if (entered_qty_num > qty_num) {
				//	MessageBox::Show("You want " + Convert::ToString(entered_qty_num) + " and there is " + Convert::ToString(qty_num) + " in the store.", "Error: Not Enough Qty");
				//}
				//else {
					price_num = products->at(i).get_price_cashier();
					item_name = products->at(i).get_name_cashier();
					break;
				//}
			}
		}
		if (!found) {
			MessageBox::Show(
				"Barcode not found.",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
			return;
		}
		bool mawgood = false;

		for each (Control ^ ctrl in panel7->Controls)
		{
			Panel^ p = dynamic_cast<Panel^>(ctrl);

			if (p != nullptr)
			{
				Label^ secondLabel = dynamic_cast<Label^>(p->Controls[1]);
				Label^ quantity = dynamic_cast<Label^>(p->Controls[2]);
				if (secondLabel != nullptr && secondLabel->Text == item_name)
				{
					mawgood = true;
					if ( ( entered_qty_num + (Convert::ToInt32(quantity->Text)) ) > qty_num) {
						MessageBox::Show("You want to buy " + Convert::ToString(entered_qty_num + (Convert::ToInt32(quantity->Text))) + " and there is " + Convert::ToString(qty_num) + " in the store.", "Error: Not Enough Qty");
						return;
					}
					else {
						p->Controls[2]->Text = Convert::ToString(Convert::ToInt32(quantity->Text) + entered_qty_num);
						p->Controls[4]->Text = Convert::ToString((entered_qty_num + (Convert::ToInt32(quantity->Text)) ) * price_num);
					}

				}
			}
		}



		if (!mawgood) {
			int label_per_panel = 2;

			Panel^ p = gcnew Panel();
			p->Size = System::Drawing::Size(800, 45);
			p->Location = System::Drawing::Point(0, new_panel);
			if (bgcolor_row) {
				p->BackColor = System::Drawing::SystemColors::ControlLight;
			}
			else {
				p->BackColor = System::Drawing::SystemColors::Control;
			}

			bgcolor_row ^= 1;
			if (entered_qty_num > qty_num) {
				MessageBox::Show("You want " + Convert::ToString(entered_qty_num) + " and there is " + Convert::ToString(qty_num) + " in the store.", "Error: Not Enough Qty");
				return;
			}
			for (int j = 0; j <= 5; j++) {
				if (j == 5) {
					Button^ btnaya = gcnew Button();

					btnaya->BackgroundImage = xaya->BackgroundImage;
					btnaya->Size = xaya->Size;
					btnaya->BackgroundImageLayout = xaya->BackgroundImageLayout;
					btnaya->Location = System::Drawing::Point(label_per_panel - 20, 3);
					btnaya->Visible = true;
					btnaya->FlatAppearance->BorderSize = 0;
					btnaya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					btnaya->BringToFront();
					btnaya->TextAlign = xaya->TextAlign;
					btnaya->Click += gcnew System::EventHandler(this, &cashier::ButtonClicked);
					p->Controls->Add(btnaya);
					continue;
				}
				Label^ lbl = gcnew Label();
				lbl->AutoSize = false;
				lbl->Width = 80;
				//lbl->Height = 25;
				lbl->AutoEllipsis = true;
				lbl->TextAlign = ContentAlignment::MiddleCenter;
				if (j == 0) {
					lbl->Text = Convert::ToString(item_num);
					item_num++;
				}
				else if (j == 1) {
					lbl->Text = item_name;
					lbl->Width = 110;
				}
				else if (j == 2) {
					lbl->Text = entered_qty_num.ToString();
				}
				else if (j == 3) {
					lbl->Text = price_num.ToString();
				}
				else if (j == 4) {
					lbl->Text = Convert::ToString(entered_qty_num * price_num);
				}
				

				lbl->Location = System::Drawing::Point(label_per_panel, 3);
				lbl->Font = gcnew System::Drawing::Font("Bell MT", 15.0f, System::Drawing::FontStyle::Bold);
				p->Controls->Add(lbl);
				if (j == 0) {
					label_per_panel += 90;
				}
				else if(j == 1){
					label_per_panel += 150;
				}
				else{
					label_per_panel += 130;
				}
			}

			this->panel7->Controls->Add(p);

			new_panel += 45;
		}
	}
}
private: System::Void save_fatoora_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel7->Controls->Count == 0)
	{
		return;
	}
	
	System::Windows::Forms::DialogResult result;

	result = MessageBox::Show(
		"Are you sure?",
		"Confirmation",
		MessageBoxButtons::OKCancel,
		MessageBoxIcon::Warning
	);

	if (result == System::Windows::Forms::DialogResult::OK)
	{

		std::string fatoora_text = "";

		fatoora_text += "----- INVOICE FOR BILL # " + std::to_string(cart_number) + " -----\n";
		fatoora_text += "   Item   |  Quant.  | Price | Total\n";
		// looping on every row in the cart to save it
		// inside each loop, we will loop on the vector of products
		// when we find the item we want to save,
		// we will update the quantity value
		// after the cart, we will save the fatoora.
		double totally = 0;
		for each (Control ^ ctrl in panel7->Controls)
		{
			Panel^ p = dynamic_cast<Panel^>(ctrl);

			if (p != nullptr)
			{
				String^ item_name = p->Controls[1]->Text;
				String^ qty = p->Controls[2]->Text;
				String^ price = p->Controls[3]->Text;
				String^ total = p->Controls[4]->Text;

				String^ line =
					item_name + " |   " +
					qty + "   |  " +
					price + "  |  " +
					total;

				for (int i = 0; i < products->size(); ++i) {
					String^ prods_item_name = (products->at(i).get_name_cashier());
					if (prods_item_name == item_name) {

						int qty_num = products->at(i).get_qty_cashier();

						products->at(i).setQuantity(qty_num - Convert::ToInt32(qty));
						break;
					}
				}
				//fatoora_text += msclr::interop::marshal_as<std::string>(line) + "\n";
				totally += Convert::ToDouble(total);
			}
		}
		fatoora_text += "\nTotal: " + std::to_string(totally) + "\n";
		fatoora_text += "Status: PAID\n"
			"Welcome to Alarnab Alga2e3!\n\n"
			"===============================\n";
		createBillFile(fatoora_text);
		createBillFileRef(totally);

		// save to csv
		cart_number++;
		label13->Text = Convert::ToString(cart_number);
		panel7->Controls->Clear();
		textBox1->Clear();
		textBox2->Clear();
		new_panel = 1;
		bgcolor_row = 1;
		item_num = 1;
		savy_maily^ saving_email = gcnew savy_maily();
		saving_email->Show();
		
		// Get the last email in the file (والله أنا اللي كاتب الكومنت مش Ai)
		std::string filename_ref = "emails.txt";
		std::string email_al3ameel = "email@example.com";

		ifstream file(filename_ref);
		if (!file.is_open()) {	
			email_al3ameel = "email@example.com";
		}

		std::string totalLine;
		while (getline(file, totalLine)) {
			email_al3ameel = totalLine;
		}

		file.close();

		// Send Fatoora Text to this email
	}
}

private: System::Void clear_fatoora_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel7->Controls->Count == 0)
	{
		return;
	}
	

	System::Windows::Forms::DialogResult result;

	result = MessageBox::Show(
		"Are you sure?",
		"Confirmation",
		MessageBoxButtons::OKCancel,
		MessageBoxIcon::Warning
	);

	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel7->Controls->Clear();
		new_panel = 1;
		bgcolor_row = 1;
		item_num = 1;
	}
		
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void xaya_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void xaya_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void ButtonClicked(System::Object^ sender, System::EventArgs^ e) {
		item_num -= 1;
		Button^ clicked = safe_cast<Button^>(sender);
		Panel^ panelaya = safe_cast<Panel^>(clicked->Parent);
		
		int Y_pos_panelaya = panelaya->Location.Y;

		Panel^ allitems = safe_cast<Panel^>(panelaya->Parent);
		int pnl_id = System::Convert::ToInt32(panelaya->Controls[0]->Text);
		allitems->Controls->Remove(panelaya);
		delete panelaya;
		new_panel -= 44;
		bgcolor_row ^= 1;
		for each (Control ^ c in allitems->Controls) {

			Panel^ pnky = safe_cast<Panel^>(c);
			if(pnky != nullptr){
				
				bool light = false;
				if (pnky->BackColor == System::Drawing::SystemColors::Control) {
					light = true;
				}
				if (pnky->Location.Y > Y_pos_panelaya) {
					pnky->Location = System::Drawing::Point(
						pnky->Location.X,
						pnky->Location.Y - 44);
					if(light){
						pnky->BackColor = System::Drawing::SystemColors::ControlLight;
					}
					else {
						pnky->BackColor = System::Drawing::SystemColors::Control;
					}
				}

			}
			int new_id = 1;
			for each(Control ^ ctrl in panel7->Controls)
			{
				Panel^ p = dynamic_cast<Panel^>(ctrl);

				if (p != nullptr)
				{
					p->Controls[0]->Text = Convert::ToString(new_id);
					new_id++;
				}
			}
			item_num = new_id;

			
		}
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cart_num_Click(System::Object^ sender, System::EventArgs^ e) {
	label13->Text = Convert::ToString(cart_number);
	cart_number++;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void table_recent_fatooras_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}