#pragma once
#include "MainMenuUI.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginUI
	/// </summary>
	public ref class LoginUI : public System::Windows::Forms::Form
	{
	public:
		LoginUI(void)
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
		~LoginUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ userText;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passText;
	private: System::Windows::Forms::Button^ loginButton;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->userText = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(347, 466);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(385, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dang Nhap";
			this->label1->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->userText);
			this->panel2->Location = System::Drawing::Point(392, 187);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(330, 47);
			this->panel2->TabIndex = 2;
			this->panel2->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			// 
			// userText
			// 
			this->userText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->userText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userText->Location = System::Drawing::Point(9, 14);
			this->userText->Name = L"userText";
			this->userText->Size = System::Drawing::Size(156, 18);
			this->userText->TabIndex = 0;
			this->userText->Text = L"Ten dang nhap";
			this->userText->Click += gcnew System::EventHandler(this, &LoginUI::userText_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->passText);
			this->panel3->Location = System::Drawing::Point(392, 256);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(330, 47);
			this->panel3->TabIndex = 3;
			this->panel3->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			// 
			// passText
			// 
			this->passText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->passText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passText->Location = System::Drawing::Point(9, 14);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(156, 18);
			this->passText->TabIndex = 0;
			this->passText->Text = L"Mat khau";
			this->passText->UseSystemPasswordChar = true;
			this->passText->Click += gcnew System::EventHandler(this, &LoginUI::passText_Click);
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(392, 331);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(165, 42);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Dang Nhap";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginUI::loginButton_Click);
			// 
			// LoginUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 470);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginUI";
			this->Text = L"Dang nhap";
			this->Load += gcnew System::EventHandler(this, &LoginUI::LoginUI_Load);
			this->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginUI_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	private: System::Void userText_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userText->Text == "Ten dang nhap") {
			userText->Text = "";
		}
	}

	private: System::Void passText_Click(System::Object^ sender, System::EventArgs^ e) {
		if (passText->Text == "Mat khau") {
			passText->Text = "";
		}
	}

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userText->Text == "test" && passText->Text == "test") {
			this->Hide();
			MainMenuUI^ mainMenuUI = gcnew MainMenuUI();
			mainMenuUI->Show();
		}
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		if(userText->Text == "")
			userText->Text = "Ten dang nhap";
		if(passText->Text == "")
			passText->Text = "Mat khau";
	}
};
}
