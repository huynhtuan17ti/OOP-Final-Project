﻿#pragma once
#include "DatabaseUI.h"
#include "TestExamUI.h"
#include <list>
#include <tuple>
#include "Constants.h"

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
	private: System::Windows::Forms::Label^ labelQuestionAmount;
	private: System::Windows::Forms::ComboBox^ comboBoxQuestionAmount;
	private: System::Windows::Forms::Label^ labelCertificate;
	private: System::Windows::Forms::ComboBox^ comboBoxCertificate;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::ComboBox^ comboBoxTime;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ historyLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowHistoryPanel;
	private: System::Windows::Forms::Button^ resetHistoryButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenuUI::typeid));
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
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->flowHistoryPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelTest = (gcnew System::Windows::Forms::Panel());
			this->buttonStartTest = (gcnew System::Windows::Forms::Button());
			this->labelLimitWrong = (gcnew System::Windows::Forms::Label());
			this->comboBoxLimitWrong = (gcnew System::Windows::Forms::ComboBox());
			this->labelQuestionAmount = (gcnew System::Windows::Forms::Label());
			this->comboBoxQuestionAmount = (gcnew System::Windows::Forms::ComboBox());
			this->labelCertificate = (gcnew System::Windows::Forms::Label());
			this->comboBoxCertificate = (gcnew System::Windows::Forms::ComboBox());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->comboBoxTime = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resetHistoryButton = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panelData->SuspendLayout();
			this->panelHistory->SuspendLayout();
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
			// panelHelp
			// 
			this->panelHelp->Location = System::Drawing::Point(300, 80);
			this->panelHelp->Name = L"panelHelp";
			this->panelHelp->Size = System::Drawing::Size(604, 673);
			this->panelHelp->TabIndex = 1;
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->buttonA2->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonA2_Click);
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
			this->buttonB1->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonB1_Click);
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
			this->buttonB2->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonB2_Click);
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
			this->panelHistory->Controls->Add(this->resetHistoryButton);
			this->panelHistory->Controls->Add(this->historyLabel);
			this->panelHistory->Controls->Add(this->flowHistoryPanel);
			this->panelHistory->Location = System::Drawing::Point(300, 80);
			this->panelHistory->Name = L"panelHistory";
			this->panelHistory->Size = System::Drawing::Size(604, 673);
			this->panelHistory->TabIndex = 1;
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(209, 31);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(200, 35);
			this->historyLabel->TabIndex = 1;
			this->historyLabel->Text = L"Lịch sử làm bài";
			// 
			// flowHistoryPanel
			// 
			this->flowHistoryPanel->AutoScroll = true;
			this->flowHistoryPanel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->flowHistoryPanel->Location = System::Drawing::Point(24, 89);
			this->flowHistoryPanel->Margin = System::Windows::Forms::Padding(10);
			this->flowHistoryPanel->Name = L"flowHistoryPanel";
			this->flowHistoryPanel->Padding = System::Windows::Forms::Padding(10);
			this->flowHistoryPanel->Size = System::Drawing::Size(556, 561);
			this->flowHistoryPanel->TabIndex = 0;
			// 
			// panelTest
			// 
			this->panelTest->Controls->Add(this->buttonStartTest);
			this->panelTest->Controls->Add(this->labelLimitWrong);
			this->panelTest->Controls->Add(this->comboBoxLimitWrong);
			this->panelTest->Controls->Add(this->labelQuestionAmount);
			this->panelTest->Controls->Add(this->comboBoxQuestionAmount);
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
			// buttonStartTest
			// 
			this->buttonStartTest->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStartTest->Location = System::Drawing::Point(202, 452);
			this->buttonStartTest->Name = L"buttonStartTest";
			this->buttonStartTest->Size = System::Drawing::Size(162, 57);
			this->buttonStartTest->TabIndex = 9;
			this->buttonStartTest->Text = L"Bắt đầu ngay";
			this->buttonStartTest->UseVisualStyleBackColor = true;
			this->buttonStartTest->Click += gcnew System::EventHandler(this, &MainMenuUI::startTestButton_Click);
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
			this->comboBoxLimitWrong->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxLimitWrong->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxLimitWrong->FormattingEnabled = true;
			this->comboBoxLimitWrong->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 câu", L"4 câu (chuẩn)", L"10 câu",
					L"15 câu"
			});
			this->comboBoxLimitWrong->Location = System::Drawing::Point(256, 352);
			this->comboBoxLimitWrong->Name = L"comboBoxLimitWrong";
			this->comboBoxLimitWrong->Size = System::Drawing::Size(156, 30);
			this->comboBoxLimitWrong->TabIndex = 7;
			// 
			// labelQuestionAmount
			// 
			this->labelQuestionAmount->AutoSize = true;
			this->labelQuestionAmount->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuestionAmount->Location = System::Drawing::Point(25, 284);
			this->labelQuestionAmount->Name = L"labelQuestionAmount";
			this->labelQuestionAmount->Size = System::Drawing::Size(99, 22);
			this->labelQuestionAmount->TabIndex = 6;
			this->labelQuestionAmount->Text = L"Số câu hỏi";
			// 
			// comboBoxQuestionAmount
			// 
			this->comboBoxQuestionAmount->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxQuestionAmount->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxQuestionAmount->FormattingEnabled = true;
			this->comboBoxQuestionAmount->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"15 câu", L"25 câu (chuẩn)", L"50 câu",
					L"Hết"
			});
			this->comboBoxQuestionAmount->Location = System::Drawing::Point(256, 276);
			this->comboBoxQuestionAmount->Name = L"comboBoxQuestionAmount";
			this->comboBoxQuestionAmount->Size = System::Drawing::Size(156, 30);
			this->comboBoxQuestionAmount->TabIndex = 5;
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
			this->comboBoxCertificate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCertificate->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCertificate->FormattingEnabled = true;
			this->comboBoxCertificate->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A1", L"A2", L"B1", L"B2" });
			this->comboBoxCertificate->Location = System::Drawing::Point(256, 202);
			this->comboBoxCertificate->Name = L"comboBoxCertificate";
			this->comboBoxCertificate->Size = System::Drawing::Size(156, 30);
			this->comboBoxCertificate->TabIndex = 3;
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
			// comboBoxTime
			// 
			this->comboBoxTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTime->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxTime->FormattingEnabled = true;
			this->comboBoxTime->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"20 phút (chuẩn)", L"15 phút", L"10 phút", L"5 phút",
					L"1 phút"
			});
			this->comboBoxTime->Location = System::Drawing::Point(256, 129);
			this->comboBoxTime->Name = L"comboBoxTime";
			this->comboBoxTime->Size = System::Drawing::Size(156, 30);
			this->comboBoxTime->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 35);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Cài đặt cho làm bài thi thử";
			// 
			// resetHistoryButton
			// 
			this->resetHistoryButton->BackColor = System::Drawing::SystemColors::Control;
			this->resetHistoryButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetHistoryButton.BackgroundImage")));
			this->resetHistoryButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetHistoryButton->Location = System::Drawing::Point(410, 30);
			this->resetHistoryButton->Name = L"resetHistoryButton";
			this->resetHistoryButton->Size = System::Drawing::Size(40, 40);
			this->resetHistoryButton->TabIndex = 2;
			this->resetHistoryButton->UseVisualStyleBackColor = false;
			this->resetHistoryButton->Click += gcnew System::EventHandler(this, &MainMenuUI::resetHistoryButton_Click);
			// 
			// MainMenuUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 750);
			this->Controls->Add(this->panelHistory);
			this->Controls->Add(this->panelData);
			this->Controls->Add(this->panelTest);
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
			this->panelHistory->ResumeLayout(false);
			this->panelHistory->PerformLayout();
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
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this, 0);
		databaseUI->Show();
	}
	private: System::Void buttonA2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this, 1);
		databaseUI->Show();
	}
	private: System::Void buttonB1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this, 2);
		databaseUI->Show();
	}
	private: System::Void buttonB2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this, 3);
		databaseUI->Show();
	}
	private: System::Void startTestButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TestExamUI^ testExamUI = gcnew TestExamUI(this, getSelectedItemInOptionalBoxes());
		testExamUI->Show();
	}
	private: System::Void resetHistoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loadHistory();
	}
	private: System::Void MainMenuUI_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBoxTime->SelectedIndex = 0;
		comboBoxCertificate->SelectedIndex = 0;
		comboBoxQuestionAmount->SelectedIndex = 1;
		comboBoxLimitWrong->SelectedIndex = 1;
		loadHistory();

		listPanel = gcnew array<System::Windows::Forms::Panel^>(4);
		listPanel[0] = panelTest;
		listPanel[1] = panelData;
		listPanel[2] = panelHistory;
		listPanel[3] = panelHelp;
		showPanel();
	}
	// Utils goes here
	private: 
		void showPanel() {
			for (int i = 0; i < 4; i++)
				if (i == curPanelIndex)
					listPanel[i]->Show();
				else listPanel[i]->Hide();
		}

		ExamSettings getSelectedItemInOptionalBoxes() {

			int index1 = this->comboBoxCertificate->SelectedIndex;
			int index2 = this->comboBoxTime->SelectedIndex;
			int index3 = this->comboBoxLimitWrong->SelectedIndex;
			int index4 = this->comboBoxQuestionAmount->SelectedIndex;

			int selectedCertificateIndex = index1;
			int selectedCountdownTime = countdownTimeArray[index2];
			int selectedMaxWrongAnswers = maxWrongAnswersArray[index3];
			int selectedQuestionAmount = questionAmountArray[index4];

			return { selectedCertificateIndex, selectedCountdownTime, selectedQuestionAmount, selectedMaxWrongAnswers};
		}

		void loadHistory() {
			std::ifstream inp(history_path);
			std::string timestamp;
			int correctAns, totalAns;
			bool isPass;
			this->flowHistoryPanel->Controls->Clear();
			std::string line;
			while (getline(inp, line)) {
				
				std::istringstream ss(line);
				
				std::vector <std::string> tokens;
				std::string token;
				while (std::getline(ss, token, ',')) {
					tokens.push_back(token);
				}

				timestamp = tokens[0];
				correctAns = std::stoi(tokens[1]);
				totalAns = std::stoi(tokens[2]);
				isPass = std::stoi(tokens[3]);

				System::Windows::Forms::Panel^ containPanel = (gcnew System::Windows::Forms::Panel());
				containPanel->BackColor = System::Drawing::SystemColors::Control;
				containPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				containPanel->Size = System::Drawing::Size(527, 80);

				System::Windows::Forms::Panel^ passState = (gcnew System::Windows::Forms::Panel());
				if (isPass)
					passState->BackColor = System::Drawing::Color::Green;
				else
					passState->BackColor = System::Drawing::Color::Red;
				passState->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				passState->Location = System::Drawing::Point(480, 25);
				passState->Size = System::Drawing::Size(30, 30);

				System::Windows::Forms::Label^ dateLabel = (gcnew System::Windows::Forms::Label());
				dateLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				dateLabel->Location = System::Drawing::Point(13, 28);
				dateLabel->Size = System::Drawing::Size(250, 22);
				dateLabel->Text = gcnew String(timestamp.data());

				System::Windows::Forms::Label^ ansLabel = (gcnew System::Windows::Forms::Label());
				ansLabel->Font = (gcnew System::Drawing::Font(L"Arial", 14.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				ansLabel->Location = System::Drawing::Point(320, 28);
				ansLabel->Size = System::Drawing::Size(150, 22);
				ansLabel->Text = L"Kết quả: " + correctAns.ToString() + L'/' + totalAns.ToString();

				containPanel->Controls->Add(dateLabel);
				containPanel->Controls->Add(ansLabel);
				containPanel->Controls->Add(passState);

				this->flowHistoryPanel->Controls->Add(containPanel);
			}

			inp.close();
		}
};
}
