#pragma once
#include "MainMenuUI.h"
#include "User.h"
#include <msclr\marshal_cppstd.h>
#include "RegisterUI.h"

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
			userAccounts = new Users();
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
			if (userAccounts != nullptr) {
				delete userAccounts;
				userAccounts = nullptr;
			}
			if (components)
			{
				delete components;
			}
		}

	private:
		Users* userAccounts;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ userText;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passText;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->userText = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(385, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Đăng nhập";
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
			this->userText->Text = L"Tên đăng nhập";
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
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(392, 331);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(126, 42);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Đăng nhập";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginUI::loginButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->Location = System::Drawing::Point(547, 331);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(126, 42);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Đăng kí";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginUI::registerButton_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::Color::White;
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(443, 461);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox->TabIndex = 6;
			this->pictureBox->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(515, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// LoginUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Đăng nhập";
			this->Load += gcnew System::EventHandler(this, &LoginUI::LoginUI_Load);
			this->Click += gcnew System::EventHandler(this, &LoginUI::other_Click);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginUI_Load(System::Object^ sender, System::EventArgs^ e) {
		reloadUsers();
	}
	
	private: System::Void userText_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userText->Text == L"Tên đăng nhập") {
			userText->Text = "";
		}
	}

	private: System::Void passText_Click(System::Object^ sender, System::EventArgs^ e) {
		if (passText->Text == "Mat khau") {
			passText->Text = "";
		}
	}

	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		RegisterUI^ registerUI = gcnew RegisterUI(gcnew LoginUI());
		registerUI->Show();
	}

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string curUserName = msclr::interop::marshal_as<std::string>(userText->Text);
		std::string curPassword = msclr::interop::marshal_as<std::string>(passText->Text);
		User* curUser = userAccounts->accountSearching(curUserName, curPassword);
		if (curUser != NULL) {
			this->Hide();
			MainMenuUI^ mainMenuUI = gcnew MainMenuUI(curUser, this);
			mainMenuUI->Show();
		}
		else {
			MessageBox::Show(L"Tên đăng nhập hoặc mật khẩu không tồn tại",
				L"Thông báo");
		}
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userText->Text == "")
			userText->Text = L"Tên đăng nhập";
		if (passText->Text == "")
			passText->Text = "Mat khau";
	}

	public:
		void reloadUsers() {
			if (userAccounts != NULL)
				delete userAccounts;
			userAccounts = new Users();
		}
};
}
