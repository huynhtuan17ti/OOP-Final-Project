#pragma once
#include "DatabaseUI.h"
#include "TestExamUI.h"
#include "HistoryUI.h"
#include "VideoHelperUI.h"
#include "LocateHelperUI.h"
#include "AppHelperUI.h"
#include <list>
#include <tuple>
#include "Constants.h"
#include "User.h"

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
		MainMenuUI(User* srcCurUser, System::Windows::Forms::Form^ srcPrevForm)
		{
			prevForm = srcPrevForm;
			curUser = srcCurUser;
			historyStoringList = new HistoryStoringList();
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
			if (historyStoringList != nullptr) {
				delete historyStoringList;
				historyStoringList = nullptr;
			}
			if (curUser != nullptr) {
				delete curUser;
				curUser = nullptr;
			}

			if (components)
			{
				delete components;
			}
		}
	private:
		User* curUser;
		HistoryStoringList* historyStoringList;
		BaseHelperCreator* helperCreator;
		System::Windows::Forms::Form^ prevForm;
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
	private: System::Windows::Forms::Label^ nameShowingLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ appButton;
	private: System::Windows::Forms::Button^ locateButton;
	private: System::Windows::Forms::Button^ praticeButton;
	private: System::Windows::Forms::Button^ theoryButton;
	private: System::Windows::Forms::Button^ registerHelper;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;

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
			this->nameShowingLabel = (gcnew System::Windows::Forms::Label());
			this->panelHelp = (gcnew System::Windows::Forms::Panel());
			this->registerHelper = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->appButton = (gcnew System::Windows::Forms::Button());
			this->locateButton = (gcnew System::Windows::Forms::Button());
			this->praticeButton = (gcnew System::Windows::Forms::Button());
			this->theoryButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonA2 = (gcnew System::Windows::Forms::Button());
			this->buttonB1 = (gcnew System::Windows::Forms::Button());
			this->buttonB2 = (gcnew System::Windows::Forms::Button());
			this->butonA1 = (gcnew System::Windows::Forms::Button());
			this->panelData = (gcnew System::Windows::Forms::Panel());
			this->panelHistory = (gcnew System::Windows::Forms::Panel());
			this->resetHistoryButton = (gcnew System::Windows::Forms::Button());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panelHelp->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelData->SuspendLayout();
			this->panelHistory->SuspendLayout();
			this->panelTest->SuspendLayout();
			this->SuspendLayout();
			// 
			// questionButton
			// 
			this->questionButton->BackColor = System::Drawing::Color::White;
			this->questionButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionButton->Location = System::Drawing::Point(10, 109);
			this->questionButton->Name = L"questionButton";
			this->questionButton->Size = System::Drawing::Size(240, 70);
			this->questionButton->TabIndex = 2;
			this->questionButton->Text = L"Bộ câu hỏi\n";
			this->questionButton->UseVisualStyleBackColor = false;
			this->questionButton->Click += gcnew System::EventHandler(this, &MainMenuUI::questionButton_Click);
			// 
			// testButton
			// 
			this->testButton->BackColor = System::Drawing::Color::White;
			this->testButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->testButton->Location = System::Drawing::Point(10, 20);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(240, 70);
			this->testButton->TabIndex = 0;
			this->testButton->Text = L"Thi thử";
			this->testButton->UseVisualStyleBackColor = false;
			this->testButton->Click += gcnew System::EventHandler(this, &MainMenuUI::testButton_Click);
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::Color::White;
			this->helpButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helpButton->Location = System::Drawing::Point(10, 289);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(240, 70);
			this->helpButton->TabIndex = 4;
			this->helpButton->Text = L"Trợ giúp";
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &MainMenuUI::helpButton_Click);
			// 
			// historyButton
			// 
			this->historyButton->BackColor = System::Drawing::Color::White;
			this->historyButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyButton->Location = System::Drawing::Point(10, 197);
			this->historyButton->Name = L"historyButton";
			this->historyButton->Size = System::Drawing::Size(240, 70);
			this->historyButton->TabIndex = 3;
			this->historyButton->Text = L" Lịch sử";
			this->historyButton->UseVisualStyleBackColor = false;
			this->historyButton->Click += gcnew System::EventHandler(this, &MainMenuUI::historyButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::White;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->Location = System::Drawing::Point(10, 375);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(240, 70);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"Đăng xuất";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainMenuUI::exitButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->panel1->Controls->Add(this->nameShowingLabel);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(874, 80);
			this->panel1->TabIndex = 3;
			// 
			// nameShowingLabel
			// 
			this->nameShowingLabel->AutoSize = true;
			this->nameShowingLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameShowingLabel->ForeColor = System::Drawing::Color::White;
			this->nameShowingLabel->Location = System::Drawing::Point(12, 45);
			this->nameShowingLabel->Name = L"nameShowingLabel";
			this->nameShowingLabel->Size = System::Drawing::Size(58, 23);
			this->nameShowingLabel->TabIndex = 0;
			this->nameShowingLabel->Text = L"Chào, ";
			// 
			// panelHelp
			// 
			this->panelHelp->BackColor = System::Drawing::Color::White;
			this->panelHelp->Controls->Add(this->registerHelper);
			this->panelHelp->Controls->Add(this->label3);
			this->panelHelp->Controls->Add(this->appButton);
			this->panelHelp->Controls->Add(this->locateButton);
			this->panelHelp->Controls->Add(this->praticeButton);
			this->panelHelp->Controls->Add(this->theoryButton);
			this->panelHelp->Location = System::Drawing::Point(270, 80);
			this->panelHelp->Name = L"panelHelp";
			this->panelHelp->Size = System::Drawing::Size(604, 511);
			this->panelHelp->TabIndex = 1;
			// 
			// registerHelper
			// 
			this->registerHelper->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerHelper->Location = System::Drawing::Point(183, 225);
			this->registerHelper->Name = L"registerHelper";
			this->registerHelper->Size = System::Drawing::Size(213, 57);
			this->registerHelper->TabIndex = 5;
			this->registerHelper->Text = L"Đăng kí thi";
			this->registerHelper->UseVisualStyleBackColor = true;
			this->registerHelper->Click += gcnew System::EventHandler(this, &MainMenuUI::registerHelper_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(159, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 28);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hãy chọn mục cần trợ giúp";
			// 
			// appButton
			// 
			this->appButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->appButton->Location = System::Drawing::Point(183, 375);
			this->appButton->Name = L"appButton";
			this->appButton->Size = System::Drawing::Size(213, 57);
			this->appButton->TabIndex = 3;
			this->appButton->Text = L"Cách sử dụng";
			this->appButton->UseVisualStyleBackColor = true;
			this->appButton->Click += gcnew System::EventHandler(this, &MainMenuUI::appButton_Click);
			// 
			// locateButton
			// 
			this->locateButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locateButton->Location = System::Drawing::Point(183, 300);
			this->locateButton->Name = L"locateButton";
			this->locateButton->Size = System::Drawing::Size(213, 57);
			this->locateButton->TabIndex = 2;
			this->locateButton->Text = L"Địa điểm thi";
			this->locateButton->UseVisualStyleBackColor = true;
			this->locateButton->Click += gcnew System::EventHandler(this, &MainMenuUI::locateButton_Click);
			// 
			// praticeButton
			// 
			this->praticeButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->praticeButton->Location = System::Drawing::Point(183, 150);
			this->praticeButton->Name = L"praticeButton";
			this->praticeButton->Size = System::Drawing::Size(213, 57);
			this->praticeButton->TabIndex = 1;
			this->praticeButton->Text = L"Thi thực hành";
			this->praticeButton->UseVisualStyleBackColor = true;
			this->praticeButton->Click += gcnew System::EventHandler(this, &MainMenuUI::praticeButton_Click);
			// 
			// theoryButton
			// 
			this->theoryButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->theoryButton->Location = System::Drawing::Point(183, 75);
			this->theoryButton->Name = L"theoryButton";
			this->theoryButton->Size = System::Drawing::Size(213, 57);
			this->theoryButton->TabIndex = 0;
			this->theoryButton->Text = L"Thi lý thuyết";
			this->theoryButton->UseVisualStyleBackColor = true;
			this->theoryButton->Click += gcnew System::EventHandler(this, &MainMenuUI::theoryButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->historyButton);
			this->panel2->Controls->Add(this->exitButton);
			this->panel2->Controls->Add(this->questionButton);
			this->panel2->Controls->Add(this->testButton);
			this->panel2->Controls->Add(this->helpButton);
			this->panel2->Location = System::Drawing::Point(0, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(270, 511);
			this->panel2->TabIndex = 2;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(25, 393);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 38);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(25, 305);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 38);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(25, 212);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(25, 124);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(103, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hãy chọn loại bằng lái xe tương ứng";
			// 
			// buttonA2
			// 
			this->buttonA2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA2->Location = System::Drawing::Point(349, 109);
			this->buttonA2->Name = L"buttonA2";
			this->buttonA2->Size = System::Drawing::Size(142, 70);
			this->buttonA2->TabIndex = 1;
			this->buttonA2->Text = L"A2";
			this->buttonA2->UseVisualStyleBackColor = true;
			this->buttonA2->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonA2_Click);
			// 
			// buttonB1
			// 
			this->buttonB1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB1->Location = System::Drawing::Point(108, 243);
			this->buttonB1->Name = L"buttonB1";
			this->buttonB1->Size = System::Drawing::Size(142, 70);
			this->buttonB1->TabIndex = 2;
			this->buttonB1->Text = L"B1";
			this->buttonB1->UseVisualStyleBackColor = true;
			this->buttonB1->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonB1_Click);
			// 
			// buttonB2
			// 
			this->buttonB2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB2->Location = System::Drawing::Point(349, 243);
			this->buttonB2->Name = L"buttonB2";
			this->buttonB2->Size = System::Drawing::Size(142, 70);
			this->buttonB2->TabIndex = 3;
			this->buttonB2->Text = L"B2";
			this->buttonB2->UseVisualStyleBackColor = true;
			this->buttonB2->Click += gcnew System::EventHandler(this, &MainMenuUI::buttonB2_Click);
			// 
			// butonA1
			// 
			this->butonA1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butonA1->Location = System::Drawing::Point(108, 109);
			this->butonA1->Name = L"butonA1";
			this->butonA1->Size = System::Drawing::Size(142, 70);
			this->butonA1->TabIndex = 4;
			this->butonA1->Text = L"A1";
			this->butonA1->UseVisualStyleBackColor = true;
			this->butonA1->Click += gcnew System::EventHandler(this, &MainMenuUI::butonA1_Click);
			// 
			// panelData
			// 
			this->panelData->BackColor = System::Drawing::Color::White;
			this->panelData->Controls->Add(this->label1);
			this->panelData->Controls->Add(this->buttonA2);
			this->panelData->Controls->Add(this->buttonB1);
			this->panelData->Controls->Add(this->buttonB2);
			this->panelData->Controls->Add(this->butonA1);
			this->panelData->Location = System::Drawing::Point(270, 80);
			this->panelData->Name = L"panelData";
			this->panelData->Size = System::Drawing::Size(604, 511);
			this->panelData->TabIndex = 0;
			// 
			// panelHistory
			// 
			this->panelHistory->BackColor = System::Drawing::Color::White;
			this->panelHistory->Controls->Add(this->button1);
			this->panelHistory->Controls->Add(this->resetHistoryButton);
			this->panelHistory->Controls->Add(this->historyLabel);
			this->panelHistory->Controls->Add(this->flowHistoryPanel);
			this->panelHistory->Location = System::Drawing::Point(270, 80);
			this->panelHistory->Name = L"panelHistory";
			this->panelHistory->Size = System::Drawing::Size(604, 511);
			this->panelHistory->TabIndex = 1;
			// 
			// resetHistoryButton
			// 
			this->resetHistoryButton->BackColor = System::Drawing::Color::White;
			this->resetHistoryButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetHistoryButton.BackgroundImage")));
			this->resetHistoryButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resetHistoryButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->resetHistoryButton->Location = System::Drawing::Point(374, 15);
			this->resetHistoryButton->Name = L"resetHistoryButton";
			this->resetHistoryButton->Size = System::Drawing::Size(40, 40);
			this->resetHistoryButton->TabIndex = 2;
			this->resetHistoryButton->UseVisualStyleBackColor = false;
			this->resetHistoryButton->Click += gcnew System::EventHandler(this, &MainMenuUI::resetHistoryButton_Click);
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(211, 22);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(157, 28);
			this->historyLabel->TabIndex = 1;
			this->historyLabel->Text = L"Lịch sử làm bài";
			// 
			// flowHistoryPanel
			// 
			this->flowHistoryPanel->AutoScroll = true;
			this->flowHistoryPanel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->flowHistoryPanel->Location = System::Drawing::Point(24, 68);
			this->flowHistoryPanel->Margin = System::Windows::Forms::Padding(10);
			this->flowHistoryPanel->Name = L"flowHistoryPanel";
			this->flowHistoryPanel->Padding = System::Windows::Forms::Padding(10);
			this->flowHistoryPanel->Size = System::Drawing::Size(556, 406);
			this->flowHistoryPanel->TabIndex = 0;
			// 
			// panelTest
			// 
			this->panelTest->BackColor = System::Drawing::Color::White;
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
			this->panelTest->Location = System::Drawing::Point(270, 80);
			this->panelTest->Name = L"panelTest";
			this->panelTest->Size = System::Drawing::Size(604, 511);
			this->panelTest->TabIndex = 5;
			// 
			// buttonStartTest
			// 
			this->buttonStartTest->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStartTest->Location = System::Drawing::Point(216, 375);
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
			this->labelLimitWrong->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLimitWrong->Location = System::Drawing::Point(104, 316);
			this->labelLimitWrong->Name = L"labelLimitWrong";
			this->labelLimitWrong->Size = System::Drawing::Size(160, 19);
			this->labelLimitWrong->TabIndex = 8;
			this->labelLimitWrong->Text = L"Số câu sai cho phép";
			// 
			// comboBoxLimitWrong
			// 
			this->comboBoxLimitWrong->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxLimitWrong->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxLimitWrong->FormattingEnabled = true;
			this->comboBoxLimitWrong->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 câu", L"4 câu (chuẩn)", L"10 câu",
					L"15 câu"
			});
			this->comboBoxLimitWrong->Location = System::Drawing::Point(335, 308);
			this->comboBoxLimitWrong->Name = L"comboBoxLimitWrong";
			this->comboBoxLimitWrong->Size = System::Drawing::Size(156, 27);
			this->comboBoxLimitWrong->TabIndex = 7;
			// 
			// labelQuestionAmount
			// 
			this->labelQuestionAmount->AutoSize = true;
			this->labelQuestionAmount->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuestionAmount->Location = System::Drawing::Point(104, 240);
			this->labelQuestionAmount->Name = L"labelQuestionAmount";
			this->labelQuestionAmount->Size = System::Drawing::Size(88, 19);
			this->labelQuestionAmount->TabIndex = 6;
			this->labelQuestionAmount->Text = L"Số câu hỏi";
			// 
			// comboBoxQuestionAmount
			// 
			this->comboBoxQuestionAmount->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxQuestionAmount->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxQuestionAmount->FormattingEnabled = true;
			this->comboBoxQuestionAmount->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"15 câu", L"25 câu (chuẩn)", L"50 câu",
					L"Hết"
			});
			this->comboBoxQuestionAmount->Location = System::Drawing::Point(335, 232);
			this->comboBoxQuestionAmount->Name = L"comboBoxQuestionAmount";
			this->comboBoxQuestionAmount->Size = System::Drawing::Size(156, 27);
			this->comboBoxQuestionAmount->TabIndex = 5;
			// 
			// labelCertificate
			// 
			this->labelCertificate->AutoSize = true;
			this->labelCertificate->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCertificate->Location = System::Drawing::Point(104, 166);
			this->labelCertificate->Name = L"labelCertificate";
			this->labelCertificate->Size = System::Drawing::Size(81, 19);
			this->labelCertificate->TabIndex = 4;
			this->labelCertificate->Text = L"Loại bằng";
			// 
			// comboBoxCertificate
			// 
			this->comboBoxCertificate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCertificate->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCertificate->FormattingEnabled = true;
			this->comboBoxCertificate->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A1", L"A2", L"B1", L"B2" });
			this->comboBoxCertificate->Location = System::Drawing::Point(335, 158);
			this->comboBoxCertificate->Name = L"comboBoxCertificate";
			this->comboBoxCertificate->Size = System::Drawing::Size(156, 27);
			this->comboBoxCertificate->TabIndex = 3;
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->Location = System::Drawing::Point(104, 93);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(78, 19);
			this->labelTime->TabIndex = 2;
			this->labelTime->Text = L"Thời gian";
			// 
			// comboBoxTime
			// 
			this->comboBoxTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTime->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxTime->FormattingEnabled = true;
			this->comboBoxTime->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"20 phút (chuẩn)", L"15 phút", L"10 phút",
					L"5 phút", L"1 phút"
			});
			this->comboBoxTime->Location = System::Drawing::Point(335, 85);
			this->comboBoxTime->Name = L"comboBoxTime";
			this->comboBoxTime->Size = System::Drawing::Size(156, 27);
			this->comboBoxTime->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(159, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 28);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Cài đặt cho làm bài thi thử";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(427, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// MainMenuUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(873, 590);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelHistory);
			this->Controls->Add(this->panelData);
			this->Controls->Add(this->panelHelp);
			this->Controls->Add(this->panelTest);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainMenuUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Phần mềm thi bằng lái xe v0.1.2";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainMenuUI::MainMenuUI_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainMenuUI::MainMenuUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelHelp->ResumeLayout(false);
			this->panelHelp->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		ExamSettings curExamSettings = getSelectedItemInOptionalBoxes();
		System::Windows::Forms::DialogResult dialogResult;
		if(curExamSettings.isSaveHistory())
			dialogResult = MessageBox::Show(L"Bài làm của bạn sẽ được lưu lại lịch sử!\nĐể tiếp tục vào làm bài, ấn Yes", 
							L"Thông báo", MessageBoxButtons::YesNo);
		else
			dialogResult = MessageBox::Show(L"Bài làm của bạn sẽ không được lưu lại lịch sử, do nó không phải tiêu chuẩn của một bài thi thật!\nĐể tiếp tục vào làm bài, nhấn Yes",
							L"Thông báo", MessageBoxButtons::YesNo);

		if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
			this->Hide();
			TestExamUI^ testExamUI = gcnew TestExamUI(this, curExamSettings, curUser);
			testExamUI->Show();
		}
	}
	private: System::Void resetHistoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loadHistory();
	}
	private: System::Void containDetailButton_OnClick(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
		int curHistoryIndex = Convert::ToInt32(button->Tag) - 1;
		HistoryUI^ historyUI = gcnew HistoryUI(historyStoringList->getAtIndex(curHistoryIndex));
		historyUI->Show();
	}
	private: System::Void theoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		helperCreator = new TheoryHelperCreator();
		//helper->setNameHelper(L"Trợ giúp lý thuyết");
		VideoHelperUI^ videoHelperUI = gcnew VideoHelperUI(this, helperCreator);
		videoHelperUI->Show();
	}
	private: System::Void praticeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		helperCreator = new PracticeHelperCreator();
		//helper->setNameHelper(L"Trợ giúp thực hành");
		VideoHelperUI^ videoHelperUI = gcnew VideoHelperUI(this, helperCreator);
		videoHelperUI->Show();
	}
	private: System::Void registerHelper_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		helperCreator = new RegisterHelperCreator();
		//helper->setNameHelper(L"Trợ giúp đăng kí thi");
		VideoHelperUI^ videoHelperUI = gcnew VideoHelperUI(this, helperCreator);
		videoHelperUI->Show();
	}
	private: System::Void locateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		helperCreator = new LocateHelperCreator();
		LocateHelperUI^ locateHelperUI = gcnew LocateHelperUI(this, helperCreator);
		locateHelperUI->Show();
	}
	private: System::Void appButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		helperCreator = new AppHelperCreator();
		AppHelperUI^ appHelperUI = gcnew AppHelperUI(this, helperCreator);
		appHelperUI->Show();
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//Application::Run(prevForm);
		prevForm->Show();
		this->Hide();
	}
	private: System::Void MainMenuUI_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Environment::Exit(1);
	}
	private: System::Void MainMenuUI_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBoxTime->SelectedIndex = 0;
		comboBoxCertificate->SelectedIndex = 0;
		comboBoxQuestionAmount->SelectedIndex = 1;
		comboBoxLimitWrong->SelectedIndex = 1;
		loadHistory();

		// load user's name
		nameShowingLabel->Text = L"Chào, " + gcnew String(curUser->getUsername().data());

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
			std::ifstream inp(history_path, std::ios::in);
			
			this->flowHistoryPanel->Controls->Clear();
			HistoryStoring* historyStoringItem;
			std::string line;
			while (getline(inp, line)) {
				historyStoringItem = new HistoryStoring(line);

				std::string username = historyStoringItem->getUsername();
				std::string date = historyStoringItem->getTimestamp()->getDate()->toString();
				int correctAnswer = historyStoringItem->getCorrectAnswer();
				int totalQuestion = historyStoringItem->getExamSettings()->getQuestionAmount();
				bool isPass = historyStoringItem->isPass();
				

				historyStoringList->add(historyStoringItem);

				System::Windows::Forms::Panel^ containPanel = (gcnew System::Windows::Forms::Panel());
				containPanel->BackColor = System::Drawing::SystemColors::Control;
				containPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				containPanel->Size = System::Drawing::Size(527, 80);

				System::Windows::Forms::Button^ detailButton = (gcnew System::Windows::Forms::Button());
				detailButton->BackColor = System::Drawing::Color::White;
				detailButton->Text = L"...";
				//passState->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				detailButton->Location = System::Drawing::Point(490, 23);
				detailButton->Size = System::Drawing::Size(25, 25);
				detailButton->Tag = historyStoringList->getAmount().ToString();

				System::Windows::Forms::Label^ dateLabel = (gcnew System::Windows::Forms::Label());
				dateLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				dateLabel->Location = System::Drawing::Point(13, 28);
				dateLabel->Size = System::Drawing::Size(130, 22);
				dateLabel->Text = gcnew String(date.data());

				System::Windows::Forms::Label^ usernameLabel = (gcnew System::Windows::Forms::Label());
				usernameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				usernameLabel->Location = System::Drawing::Point(180, 28);
				usernameLabel->Size = System::Drawing::Size(130, 22);
				usernameLabel->Text = gcnew String(username.data());

				System::Windows::Forms::Label^ ansLabel = (gcnew System::Windows::Forms::Label());
				ansLabel->Font = (gcnew System::Drawing::Font(L"Arial", 11.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				ansLabel->Location = System::Drawing::Point(310, 28);
				ansLabel->Size = System::Drawing::Size(130, 22);
				ansLabel->Text = L"Kết quả: " + correctAnswer.ToString() + L'/' + totalQuestion.ToString();
				if(isPass)
					ansLabel->ForeColor = System::Drawing::Color::Green;
				else ansLabel->ForeColor = System::Drawing::Color::Red;

				containPanel->Controls->Add(dateLabel);
				containPanel->Controls->Add(usernameLabel);
				containPanel->Controls->Add(ansLabel);
				containPanel->Controls->Add(detailButton);

				this->flowHistoryPanel->Controls->Add(containPanel);
				detailButton->Click += gcnew System::EventHandler(this, &MainMenuUI::containDetailButton_OnClick);
			}

			inp.close();
		}
};
}
