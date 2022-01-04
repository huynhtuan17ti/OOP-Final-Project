#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "Timestamp.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterUI
	/// </summary>
	public ref class RegisterUI : public System::Windows::Forms::Form
	{
	public:
		RegisterUI(System::Windows::Forms::Form^ srcPrevForm)
		{
			prevForm = srcPrevForm;
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
		~RegisterUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Users* userAccounts;
	private: System::Windows::Forms::Form^ prevForm;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ userText;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passText;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ nameText;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ sexComboBox;
	private: System::Windows::Forms::ComboBox^ genderComboBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ birthDateTimePicker;

	private: System::Windows::Forms::Button^ registerButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterUI::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->userText = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sexComboBox = (gcnew System::Windows::Forms::Label());
			this->genderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->birthDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(360, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tên đăng nhập";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Text", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(357, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Đăng kí tài khoản";
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(-1, 0);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(52, 48);
			this->backButton->TabIndex = 2;
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &RegisterUI::backButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 600);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->userText);
			this->panel2->Location = System::Drawing::Point(507, 109);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 47);
			this->panel2->TabIndex = 4;
			// 
			// userText
			// 
			this->userText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->userText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userText->Location = System::Drawing::Point(12, 14);
			this->userText->Name = L"userText";
			this->userText->Size = System::Drawing::Size(235, 20);
			this->userText->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->passText);
			this->panel3->Location = System::Drawing::Point(507, 188);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(258, 47);
			this->panel3->TabIndex = 6;
			// 
			// passText
			// 
			this->passText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->passText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passText->Location = System::Drawing::Point(12, 14);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(235, 20);
			this->passText->TabIndex = 0;
			this->passText->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(360, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Mật khẩu";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->nameText);
			this->panel4->Location = System::Drawing::Point(507, 268);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(258, 47);
			this->panel4->TabIndex = 8;
			// 
			// nameText
			// 
			this->nameText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->nameText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameText->Location = System::Drawing::Point(12, 14);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(235, 20);
			this->nameText->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(360, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Họ và tên";
			// 
			// sexComboBox
			// 
			this->sexComboBox->AutoSize = true;
			this->sexComboBox->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sexComboBox->Location = System::Drawing::Point(360, 354);
			this->sexComboBox->Name = L"sexComboBox";
			this->sexComboBox->Size = System::Drawing::Size(83, 23);
			this->sexComboBox->TabIndex = 9;
			this->sexComboBox->Text = L"Giới tính";
			// 
			// genderComboBox
			// 
			this->genderComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->genderComboBox->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nữ", L"Nam" });
			this->genderComboBox->Location = System::Drawing::Point(507, 352);
			this->genderComboBox->Name = L"genderComboBox";
			this->genderComboBox->Size = System::Drawing::Size(258, 29);
			this->genderComboBox->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(360, 421);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 23);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Ngày sinh";
			// 
			// birthDateTimePicker
			// 
			this->birthDateTimePicker->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birthDateTimePicker->Location = System::Drawing::Point(507, 417);
			this->birthDateTimePicker->Name = L"birthDateTimePicker";
			this->birthDateTimePicker->Size = System::Drawing::Size(258, 27);
			this->birthDateTimePicker->TabIndex = 12;
			// 
			// registerButton
			// 
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->Location = System::Drawing::Point(487, 491);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(175, 53);
			this->registerButton->TabIndex = 13;
			this->registerButton->Text = L"Tạo tài khoản";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &RegisterUI::registerButton_Click);
			// 
			// RegisterUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->birthDateTimePicker);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->genderComboBox);
			this->Controls->Add(this->sexComboBox);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RegisterUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Đăng kí tài khoản";
			this->Load += gcnew System::EventHandler(this, &RegisterUI::RegisterUI_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		prevForm->Refresh();
		prevForm->Show();
		this->Hide();
	}
	private: System::Void RegisterUI_Load(System::Object^ sender, System::EventArgs^ e) {
		genderComboBox->SelectedIndex = 0;
	}
	
	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string curUserName = msclr::interop::marshal_as<std::string>(userText->Text);
		std::string curPassword = msclr::interop::marshal_as<std::string>(passText->Text);
		std::string curName = msclr::interop::marshal_as<std::string>(nameText->Text);
		bool curSex = genderComboBox->SelectedIndex;
		std::string birthDayStr = msclr::interop::marshal_as<std::string>((this->birthDateTimePicker->Value).ToString("dd/MM/yyyy"));
		Date curBirth = Date::Parse(birthDayStr);

		if (curUserName == "" || curPassword == "" || curName == "") {
			MessageBox::Show(L"Hãy điền hết các chỗ trống!", L"Đăng kí thất bại");
			return;
		}

		if (userAccounts->isHaveSameUsername(curUserName)) {
			MessageBox::Show(L"Tên đăng nhập đã bị trùng!", L"Đăng kí thất bại");
			return;
		}

		User* user = new User(curUserName, curPassword, curName, curBirth, curSex);
		userAccounts->addUser(user);
		userAccounts->Save();

		prevForm->Refresh();
		prevForm->Show();
		this->Hide();
	}
};
}
