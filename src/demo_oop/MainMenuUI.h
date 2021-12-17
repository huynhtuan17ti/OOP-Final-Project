#pragma once
#include "DatabaseUI.h"
#include "TestExamUI.h"
#include <list>

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainMenuUI
	/// </summary>
	public ref class MainMenuUI : public System::Windows::Forms::Form
	{
	public:
		MainMenuUI(void)
		{
			curPanelIndex = 0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainMenuUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int curPanelIndex;
		cli::array < System::Windows::Forms::Panel^>^ listPanel;

	private: System::Windows::Forms::Button^ questionButton;
	private: System::Windows::Forms::Button^ testButton;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Button^ historyButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ butonA1;
	private: System::Windows::Forms::Button^ buttonA2;
	private: System::Windows::Forms::Button^ buttonB1;
	private: System::Windows::Forms::Button^ buttonB2;

	private: System::Windows::Forms::Panel^ panelTest;
	private: System::Windows::Forms::Panel^ panelData;
	private: System::Windows::Forms::Panel^ panelHelp;
	private: System::Windows::Forms::Panel^ panelHistory;
	
	private: System::Windows::Forms::Button^ buttonStartTest;
	private: System::Windows::Forms::Label^ labelLimitWrong;
	private: System::Windows::Forms::ComboBox^ comboBoxLimitWrong;
	private: System::Windows::Forms::Label^ labelSaveHistory;
	private: System::Windows::Forms::ComboBox^ comboBoxHistory;
	private: System::Windows::Forms::Label^ labelCertificate;
	private: System::Windows::Forms::ComboBox^ comboBoxCertificate;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::ComboBox^ comboBoxTime;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->questionButton = (gcnew System::Windows::Forms::Button());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->historyButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelHelp = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonA2 = (gcnew System::Windows::Forms::Button());
			this->buttonB1 = (gcnew System::Windows::Forms::Button());
			this->buttonB2 = (gcnew System::Windows::Forms::Button());
			this->butonA1 = (gcnew System::Windows::Forms::Button());
			this->panelData = (gcnew System::Windows::Forms::Panel());
			this->panelHistory = (gcnew System::Windows::Forms::Panel());
			this->panelTest = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTime = (gcnew System::Windows::Forms::ComboBox());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->labelCertificate = (gcnew System::Windows::Forms::Label());
			this->comboBoxCertificate = (gcnew System::Windows::Forms::ComboBox());
			this->labelSaveHistory = (gcnew System::Windows::Forms::Label());
			this->comboBoxHistory = (gcnew System::Windows::Forms::ComboBox());
			this->labelLimitWrong = (gcnew System::Windows::Forms::Label());
			this->comboBoxLimitWrong = (gcnew System::Windows::Forms::ComboBox());
			this->buttonStartTest = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panelData->SuspendLayout();
			this->panelTest->SuspendLayout();
			this->SuspendLayout();
			// 
			// questionButton
			// 
			this->questionButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionButton->Location = System::Drawing::Point(10, 130);
			this->questionButton->Name = L"questionButton";
			this->questionButton->Size = System::Drawing::Size(280, 85);
			this->questionButton->TabIndex = 2;
			this->questionButton->Text = L"Bộ câu hỏi\n";
			this->questionButton->UseVisualStyleBackColor = true;
			this->questionButton->Click += gcnew System::EventHandler(this, &MainMenuUI::questionButton_Click);
			// 
			// testButton
			// 
			this->testButton->BackColor = System::Drawing::Color::White;
			this->testButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->testButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->testButton->Location = System::Drawing::Point(10, 20);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(280, 85);
			this->testButton->TabIndex = 3;
			this->testButton->Text = L"Thi thử ngay";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &MainMenuUI::testButton_Click);
			// 
			// helpButton
			// 
			this->helpButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helpButton->Location = System::Drawing::Point(10, 350);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(280, 85);
			this->helpButton->TabIndex = 4;
			this->helpButton->Text = L"Trợ giúp";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &MainMenuUI::helpButton_Click);
			// 
			// historyButton
			// 
			this->historyButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyButton->Location = System::Drawing::Point(10, 240);
			this->historyButton->Name = L"historyButton";
			this->historyButton->Size = System::Drawing::Size(280, 85);
			this->historyButton->TabIndex = 0;
			this->historyButton->Text = L"Lịch sử";
			this->historyButton->UseVisualStyleBackColor = true;
			this->historyButton->Click += gcnew System::EventHandler(this, &MainMenuUI::historyButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->Location = System::Drawing::Point(10, 460);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(280, 85);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"Thoát";
			this->exitButton->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(901, 80);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->historyButton);
			this->panel2->Controls->Add(this->exitButton);
			this->panel2->Controls->Add(this->questionButton);
			this->panel2->Controls->Add(this->testButton);
			this->panel2->Controls->Add(this->helpButton);
			this->panel2->Location = System::Drawing::Point(0, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 670);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(82, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hãy chọn loại bằng lái xe tương ứng";
			// 
			// buttonA2
			// 
			this->buttonA2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA2->Location = System::Drawing::Point(349, 118);
			this->buttonA2->Name = L"buttonA2";
			this->buttonA2->Size = System::Drawing::Size(142, 70);
			this->buttonA2->TabIndex = 1;
			this->buttonA2->Text = L"A2";
			this->buttonA2->UseVisualStyleBackColor = true;
			// 
			// buttonB1
			// 
			this->buttonB1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB1->Location = System::Drawing::Point(97, 255);
			this->buttonB1->Name = L"buttonB1";
			this->buttonB1->Size = System::Drawing::Size(142, 70);
			this->buttonB1->TabIndex = 2;
			this->buttonB1->Text = L"B1";
			this->buttonB1->UseVisualStyleBackColor = true;
			// 
			// buttonB2
			// 
			this->buttonB2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB2->Location = System::Drawing::Point(349, 255);
			this->buttonB2->Name = L"buttonB2";
			this->buttonB2->Size = System::Drawing::Size(142, 70);
			this->buttonB2->TabIndex = 3;
			this->buttonB2->Text = L"B2";
			this->buttonB2->UseVisualStyleBackColor = true;
			// 
			// butonA1
			// 
			this->butonA1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butonA1->Location = System::Drawing::Point(97, 118);
			this->butonA1->Name = L"butonA1";
			this->butonA1->Size = System::Drawing::Size(142, 70);
			this->butonA1->TabIndex = 4;
			this->butonA1->Text = L"A1";
			this->butonA1->UseVisualStyleBackColor = true;
			this->butonA1->Click += gcnew System::EventHandler(this, &MainMenuUI::butonA1_Click);
			// 
			// panelTest
			// 
			this->panelTest->Controls->Add(this->buttonStartTest);
			this->panelTest->Controls->Add(this->labelLimitWrong);
			this->panelTest->Controls->Add(this->comboBoxLimitWrong);
			this->panelTest->Controls->Add(this->labelSaveHistory);
			this->panelTest->Controls->Add(this->comboBoxHistory);
			this->panelTest->Controls->Add(this->labelCertificate);
			this->panelTest->Controls->Add(this->comboBoxCertificate);
			this->panelTest->Controls->Add(this->labelTime);
			this->panelTest->Controls->Add(this->comboBoxTime);
			this->panelTest->Controls->Add(this->label2);
			this->panelTest->Location = System::Drawing::Point(300, 80);
			this->panelTest->Name = L"panelTest";
			this->panelTest->Size = System::Drawing::Size(604, 673);
			this->panelTest->TabIndex = 5;
			// 
			// panelData
			// 
			this->panelData->Controls->Add(this->label1);
			this->panelData->Controls->Add(this->buttonA2);
			this->panelData->Controls->Add(this->buttonB1);
			this->panelData->Controls->Add(this->buttonB2);
			this->panelData->Controls->Add(this->butonA1);
			this->panelData->Location = System::Drawing::Point(300, 80);
			this->panelData->Name = L"panelData";
			this->panelData->Size = System::Drawing::Size(604, 673);
			this->panelData->TabIndex = 0;
			// 
			// panelHistory
			// 
			this->panelHistory->Location = System::Drawing::Point(300, 80);
			this->panelHistory->Name = L"panelHistory";
			this->panelHistory->Size = System::Drawing::Size(604, 673);
			this->panelHistory->TabIndex = 1;
			// 
			// panelHelp
			// 
			this->panelHelp->Location = System::Drawing::Point(300, 80);
			this->panelHelp->Name = L"panelHelp";
			this->panelHelp->Size = System::Drawing::Size(604, 673);
			this->panelHelp->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(317, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Cài đặt cho làm bài thi thử";
			// 
			// comboBoxTime
			// 
			this->comboBoxTime->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxTime->FormattingEnabled = true;
			this->comboBoxTime->Location = System::Drawing::Point(256, 129);
			this->comboBoxTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTime->Name = L"comboBoxTime";
			this->comboBoxTime->Size = System::Drawing::Size(156, 30);
			this->comboBoxTime->Items->Add(L"20 phút");
			this->comboBoxTime->Items->Add(L"15 phút");
			this->comboBoxTime->Items->Add(L"10 phút");
			this->comboBoxTime->Items->Add(L"5 phút");
			this->comboBoxTime->Items->Add(L"1 phút");
			this->comboBoxTime->TabIndex = 1;
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->Location = System::Drawing::Point(25, 137);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(88, 22);
			this->labelTime->TabIndex = 2;
			this->labelTime->Text = L"Thời gian";
			// 
			// labelCertificate
			// 
			this->labelCertificate->AutoSize = true;
			this->labelCertificate->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCertificate->Location = System::Drawing::Point(25, 210);
			this->labelCertificate->Name = L"labelCertificate";
			this->labelCertificate->Size = System::Drawing::Size(93, 22);
			this->labelCertificate->TabIndex = 4;
			this->labelCertificate->Text = L"Loại bằng";
			// 
			// comboBoxCertificate
			// 
			this->comboBoxCertificate->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCertificate->FormattingEnabled = true;
			this->comboBoxCertificate->Location = System::Drawing::Point(256, 202);
			this->comboBoxCertificate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCertificate->Name = L"comboBoxCertificate";
			this->comboBoxCertificate->Size = System::Drawing::Size(156, 30);
			this->comboBoxCertificate->Items->Add("A1");
			this->comboBoxCertificate->Items->Add("A2");
			this->comboBoxCertificate->Items->Add("B1");
			this->comboBoxCertificate->Items->Add("B2");
			this->comboBoxCertificate->TabIndex = 3;
			// 
			// labelSaveHistory
			// 
			this->labelSaveHistory->AutoSize = true;
			this->labelSaveHistory->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSaveHistory->Location = System::Drawing::Point(25, 284);
			this->labelSaveHistory->Name = L"labelSaveHistory";
			this->labelSaveHistory->Size = System::Drawing::Size(105, 22);
			this->labelSaveHistory->TabIndex = 6;
			this->labelSaveHistory->Text = L"Lưu lịch sử";
			// 
			// comboBoxHistory
			// 
			this->comboBoxHistory->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxHistory->FormattingEnabled = true;
			this->comboBoxHistory->Location = System::Drawing::Point(256, 276);
			this->comboBoxHistory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxHistory->Name = L"comboBoxHistory";
			this->comboBoxHistory->Size = System::Drawing::Size(156, 30);
			this->comboBoxHistory->Items->Add("Có");
			this->comboBoxHistory->Items->Add("Không");
			this->comboBoxHistory->TabIndex = 5;
			// 
			// labelLimitWrong
			// 
			this->labelLimitWrong->AutoSize = true;
			this->labelLimitWrong->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLimitWrong->Location = System::Drawing::Point(25, 360);
			this->labelLimitWrong->Name = L"labelLimitWrong";
			this->labelLimitWrong->Size = System::Drawing::Size(182, 22);
			this->labelLimitWrong->TabIndex = 8;
			this->labelLimitWrong->Text = L"Số câu sai cho phép";
			// 
			// comboBoxLimitWrong
			// 
			this->comboBoxLimitWrong->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxLimitWrong->FormattingEnabled = true;
			this->comboBoxLimitWrong->Location = System::Drawing::Point(256, 352);
			this->comboBoxLimitWrong->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxLimitWrong->Name = L"comboBoxLimitWrong";
			this->comboBoxLimitWrong->Size = System::Drawing::Size(156, 30);
			this->comboBoxLimitWrong->Items->Add("0 câu");
			this->comboBoxLimitWrong->Items->Add(L"4 câu (chuẩn)");
			this->comboBoxLimitWrong->Items->Add("10 câu");
			this->comboBoxLimitWrong->Items->Add("15 câu");
			this->comboBoxLimitWrong->TabIndex = 7;
			// 
			// buttonStartTest
			// 
			this->buttonStartTest->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStartTest->Location = System::Drawing::Point(202, 452);
			this->buttonStartTest->Name = L"buttonStartTest";
			this->buttonStartTest->Size = System::Drawing::Size(162, 57);
			this->buttonStartTest->TabIndex = 9;
			this->buttonStartTest->Text = L"Bắt đầu ngay";
			this->buttonStartTest->UseVisualStyleBackColor = true;
			this->buttonStartTest->Click += gcnew System::EventHandler(this, &MainMenuUI::startTestButton_Click);
			// 
			// MainMenuUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 750);
			this->Controls->Add(this->panelData);
			this->Controls->Add(this->panelTest);
			this->Controls->Add(this->panelHistory);
			this->Controls->Add(this->panelHelp);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MainMenuUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"App thi bang lai xe (Demo)";
			this->Load += gcnew System::EventHandler(this, &MainMenuUI::MainMenuUI_Load);
			this->panel2->ResumeLayout(false);
			this->panelData->ResumeLayout(false);
			this->panelData->PerformLayout();
			this->panelTest->ResumeLayout(false);
			this->panelTest->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void questionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 1;
		showPanel();
	}
	private: System::Void testButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 0;
		showPanel();
	}
	private: System::Void historyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 2;
		showPanel();
	}
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 3;
		showPanel();
	}
	private: System::Void butonA1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this);
		databaseUI->Show();
	}
	private: System::Void startTestButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TestExamUI^ testExamUI = gcnew TestExamUI(this);
		testExamUI->Show();
	}
	private: System::Void MainMenuUI_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBoxTime->SelectedItem = NULL;
		comboBoxCertificate->SelectedItem = NULL;
		comboBoxHistory->SelectedItem = NULL;
		comboBoxLimitWrong->SelectedItem = NULL;

		listPanel = gcnew array<System::Windows::Forms::Panel^>(4);
		listPanel[0] = panelTest;
		listPanel[1] = panelData;
		listPanel[2] = panelHistory;
		listPanel[3] = panelHelp;
		showPanel();
	}
	private: 
		void showPanel() {
			for (int i = 0; i < 4; i++)
				if (i == curPanelIndex)
					listPanel[i]->Show();
				else listPanel[i]->Hide();
		}
};
}
