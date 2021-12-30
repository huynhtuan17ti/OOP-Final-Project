#pragma once
#include "Database.h"
#include "ExamData.h"
#include "HistoryData.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestExamUI
	/// </summary>
	public ref class TestExamUI : public System::Windows::Forms::Form
	{
	public:
		TestExamUI(System::Windows::Forms::Form^ srcPrevForm, ExamSettings srcExamSettings, User* srcCurUser)
		{
			curUser = srcCurUser;
			examSettings = new ExamSettings(srcExamSettings);
			questionData = new ExamData(examSettings->getCertificateIndex(), 
										examSettings->getQuestionAmount(), 
										examSettings->getMaxWrongAnswer());
			
			examResult = new ExamResult(questionData, examSettings);
			std::vector <AnswerState*> answerState = AnswerState::createAnswerStateList(questionData);
			examResult->addAnswerStateList(answerState);
			countdownSecond = examSettings->getCountdownSeconds();

			isExamFinish = false;
			curIndexQuestion = 0;
			prevForm = srcPrevForm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TestExamUI()
		{
			delete curUser;
			delete questionData;
			delete examSettings;
			delete examResult;
			if (components)
			{
				delete components;
			}
		}

	private:
		const int maxAnsStringOnLine = 100; // maximum size of a string on a line
		const int maxQueStringOnLine = 80;
		const int maxNAnswer = 6; // maximum number of answers
		String^ noImagePath = "assets/no_image.png";

	private:
		int curIndexQuestion;
		int countdownSecond;
		bool isExamFinish;
		User* curUser;
		ExamSettings* examSettings;
		ExamData* questionData;
		ExamResult* examResult;
		

	private: cli::array<System::Windows::Forms::Label^>^ answerUI;

	private: System::Windows::Forms::Form^ prevForm;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ rightButton;
	private: System::Windows::Forms::Button^ leftButton;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ questionNumberLabel;

	private: System::Windows::Forms::Label^ qDescription;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;


	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::CheckedListBox^ checkedListAnswer;


	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ examPanel;
	private: System::Windows::Forms::Label^ timer;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ questionAmountLabel;

	private: System::Windows::Forms::Label^ certificateTypeLabel;
	private: System::Windows::Forms::Label^ userNameLabel;
	private: System::Windows::Forms::Timer^ timerCountdown;
	private: System::Windows::Forms::FlowLayoutPanel^ questionStateFlowPanel;

	private: System::Windows::Forms::Button^ submitButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TestExamUI::typeid));
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rightButton = (gcnew System::Windows::Forms::Button());
			this->leftButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->questionNumberLabel = (gcnew System::Windows::Forms::Label());
			this->qDescription = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->checkedListAnswer = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->examPanel = (gcnew System::Windows::Forms::Panel());
			this->questionStateFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->questionAmountLabel = (gcnew System::Windows::Forms::Label());
			this->certificateTypeLabel = (gcnew System::Windows::Forms::Label());
			this->userNameLabel = (gcnew System::Windows::Forms::Label());
			this->timerCountdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->examPanel->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(0, 0);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(55, 54);
			this->backButton->TabIndex = 0;
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &TestExamUI::backButton_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->rightButton);
			this->panel1->Controls->Add(this->leftButton);
			this->panel1->Location = System::Drawing::Point(274, 693);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1110, 110);
			this->panel1->TabIndex = 1;
			// 
			// rightButton
			// 
			this->rightButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->rightButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rightButton->Location = System::Drawing::Point(997, 0);
			this->rightButton->Name = L"rightButton";
			this->rightButton->Size = System::Drawing::Size(113, 110);
			this->rightButton->TabIndex = 1;
			this->rightButton->Text = L"Câu hỏi tiếp theo";
			this->rightButton->UseVisualStyleBackColor = true;
			this->rightButton->Click += gcnew System::EventHandler(this, &TestExamUI::rightButton_Click);
			// 
			// leftButton
			// 
			this->leftButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->leftButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftButton->Location = System::Drawing::Point(0, 0);
			this->leftButton->Name = L"leftButton";
			this->leftButton->Size = System::Drawing::Size(113, 110);
			this->leftButton->TabIndex = 0;
			this->leftButton->Text = L"Câu hỏi trước";
			this->leftButton->UseVisualStyleBackColor = true;
			this->leftButton->Click += gcnew System::EventHandler(this, &TestExamUI::leftButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Location = System::Drawing::Point(274, 391);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(841, 303);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 30);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Trắc nghiệm";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// questionNumberLabel
			// 
			this->questionNumberLabel->AutoSize = true;
			this->questionNumberLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionNumberLabel->Location = System::Drawing::Point(3, 9);
			this->questionNumberLabel->Name = L"questionNumberLabel";
			this->questionNumberLabel->Size = System::Drawing::Size(90, 30);
			this->questionNumberLabel->TabIndex = 5;
			this->questionNumberLabel->Text = L"Câu hỏi";
			this->questionNumberLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// qDescription
			// 
			this->qDescription->AutoSize = true;
			this->qDescription->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qDescription->Location = System::Drawing::Point(13, 35);
			this->qDescription->Name = L"qDescription";
			this->qDescription->Size = System::Drawing::Size(115, 23);
			this->qDescription->TabIndex = 6;
			this->qDescription->Text = L"Câu hỏi ở đây";
			// 
			// pictureBox
			// 
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox->Location = System::Drawing::Point(957, 1);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(427, 308);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 7;
			this->pictureBox->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->questionNumberLabel);
			this->panel3->Location = System::Drawing::Point(303, 29);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(133, 50);
			this->panel3->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(303, 366);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(145, 47);
			this->panel4->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->qDescription);
			this->panel5->Location = System::Drawing::Point(277, 56);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(682, 229);
			this->panel5->TabIndex = 10;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::MintCream;
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->checkedListAnswer);
			this->panel8->Location = System::Drawing::Point(1115, 391);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(269, 303);
			this->panel8->TabIndex = 11;
			// 
			// checkedListAnswer
			// 
			this->checkedListAnswer->BackColor = System::Drawing::Color::MintCream;
			this->checkedListAnswer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListAnswer->CheckOnClick = true;
			this->checkedListAnswer->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListAnswer->FormattingEnabled = true;
			this->checkedListAnswer->Location = System::Drawing::Point(21, 37);
			this->checkedListAnswer->Name = L"checkedListAnswer";
			this->checkedListAnswer->Size = System::Drawing::Size(236, 184);
			this->checkedListAnswer->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label4);
			this->panel9->Location = System::Drawing::Point(1139, 366);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(91, 47);
			this->panel9->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Trả lời";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// examPanel
			// 
			this->examPanel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->examPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->examPanel->Controls->Add(this->questionStateFlowPanel);
			this->examPanel->Controls->Add(this->submitButton);
			this->examPanel->Controls->Add(this->timer);
			this->examPanel->Controls->Add(this->panel7);
			this->examPanel->Controls->Add(this->backButton);
			this->examPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->examPanel->Location = System::Drawing::Point(0, 0);
			this->examPanel->Name = L"examPanel";
			this->examPanel->Size = System::Drawing::Size(268, 803);
			this->examPanel->TabIndex = 12;
			// 
			// questionStateFlowPanel
			// 
			this->questionStateFlowPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->questionStateFlowPanel->AutoScroll = true;
			this->questionStateFlowPanel->Location = System::Drawing::Point(10, 246);
			this->questionStateFlowPanel->Name = L"questionStateFlowPanel";
			this->questionStateFlowPanel->Size = System::Drawing::Size(243, 446);
			this->questionStateFlowPanel->TabIndex = 4;
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(42, 707);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(183, 72);
			this->submitButton->TabIndex = 3;
			this->submitButton->Text = L"Nộp bài";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &TestExamUI::submitButton_Click);
			// 
			// timer
			// 
			this->timer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timer->Location = System::Drawing::Point(57, 187);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(149, 56);
			this->timer->TabIndex = 2;
			this->timer->Text = L"00:00";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->questionAmountLabel);
			this->panel7->Controls->Add(this->certificateTypeLabel);
			this->panel7->Controls->Add(this->userNameLabel);
			this->panel7->Location = System::Drawing::Point(10, 60);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(243, 109);
			this->panel7->TabIndex = 1;
			// 
			// questionAmountLabel
			// 
			this->questionAmountLabel->AutoSize = true;
			this->questionAmountLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionAmountLabel->Location = System::Drawing::Point(3, 77);
			this->questionAmountLabel->Name = L"questionAmountLabel";
			this->questionAmountLabel->Size = System::Drawing::Size(120, 23);
			this->questionAmountLabel->TabIndex = 4;
			this->questionAmountLabel->Text = L"Số câu hỏi: 25";
			// 
			// certificateTypeLabel
			// 
			this->certificateTypeLabel->AutoSize = true;
			this->certificateTypeLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->certificateTypeLabel->Location = System::Drawing::Point(3, 42);
			this->certificateTypeLabel->Name = L"certificateTypeLabel";
			this->certificateTypeLabel->Size = System::Drawing::Size(116, 23);
			this->certificateTypeLabel->TabIndex = 3;
			this->certificateTypeLabel->Text = L"Loại bằng: A1";
			// 
			// userNameLabel
			// 
			this->userNameLabel->AutoSize = true;
			this->userNameLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameLabel->Location = System::Drawing::Point(3, 9);
			this->userNameLabel->Name = L"userNameLabel";
			this->userNameLabel->Size = System::Drawing::Size(193, 23);
			this->userNameLabel->TabIndex = 2;
			this->userNameLabel->Text = L"Tên: Huynh Minh Tuan";
			// 
			// timerCountdown
			// 
			this->timerCountdown->Interval = 1000;
			this->timerCountdown->Tick += gcnew System::EventHandler(this, &TestExamUI::timerCountdown_Tick);
			// 
			// TestExamUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1385, 803);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->examPanel);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"TestExamUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"App thi bang lai xe (Demo)";
			this->Load += gcnew System::EventHandler(this, &TestExamUI::TestExamUI_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->examPanel->ResumeLayout(false);
			this->examPanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		prevForm->Refresh();
		prevForm->Show();
		this->Hide();
	}

	private: System::Void leftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		updateAnswerStateInExam();
		curIndexQuestion--;
		if (curIndexQuestion == -1) {
			curIndexQuestion = questionData->getQuestionAmount() - 1;
		}
		updateUI();
		//TestExamUI_Load(sender, e);
	}

	private: System::Void rightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		updateAnswerStateInExam();
		curIndexQuestion++;
		if (curIndexQuestion == questionData->getQuestionAmount()) {
			curIndexQuestion = 0;
		}
		updateUI();
		//TestExamUI_Load(sender, e);
	}

	private: System::Void questionStateButton_OnClick(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^)sender;
		updateAnswerStateInExam();
		int curIndex = Convert::ToInt32(button->Text) - 1;
		curIndexQuestion = curIndex;
		updateUI();
		//TestExamUI_Load(sender, e);
	}

	private: System::Void TestExamUI_Load(System::Object^ sender, System::EventArgs^ e) {
		// start countdown
		this->timerCountdown->Enabled = true;
		
		// load exam information
		loadCertificateLabel();
		loadQuestionAmount();
		loadQuestionStateFlow();

		// if firstLoad, initialize UI features
		answerUI = gcnew array<System::Windows::Forms::Label^>(maxNAnswer);
		int xStartPoint = 10, yStartPoint = 30;
		int rowRange = 65; // size between 2 answer lines
		for (int i = 0; i < maxNAnswer; i++) {
			answerUI[i] = gcnew Label();
			answerUI[i]->AutoSize = true;
			this->panel2->Controls->Add(answerUI[i]);
			answerUI[i]->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			answerUI[i]->Location = System::Drawing::Point(xStartPoint, yStartPoint + i * rowRange);
			answerUI[i]->Name = L"text";
			answerUI[i]->Size = System::Drawing::Size(75, 21);
			answerUI[i]->TabIndex = i;
		}

		updateUI();
	}

	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timerCountdown->Stop();
		isExamFinish = true;
		bool isPass = (questionData->getQuestionAmount() - examResult->getScore() <= examSettings->getMaxWrongAnswer());
		MessageBox::Show(L"Bạn đã nộp bài, điểm số " + examResult->getScore().ToString() + " / " + questionData->getQuestionAmount().ToString()
						 + L"\n" + (isPass? L"Bạn đã đậu!" : L"Bạn đã trượt"),
						 L"Thông báo");
		HistoryStoring* historyStoring = new HistoryStoring(curUser->getUsername(), 
															examSettings, 
															examSettings->getCountdownSeconds() - countdownSecond,
															examResult->getScore());
		historyStoring->storing();
		delete historyStoring;
		disableActiveAndShowResult();
	}

	private: System::Void timerCountdown_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (countdownSecond > 0) {
			countdownSecond--;
			int minutes = countdownSecond / 60;
			int seconds = countdownSecond % 60;
			this->timer->Text = ((minutes < 10)? L"0" : L"") + minutes.ToString() + L":" + ((seconds < 10) ? L"0" : L"") + seconds.ToString();
		}
		else {
			this->timerCountdown->Stop();
			isExamFinish = true;
			bool isPass = (questionData->getQuestionAmount() - examResult->getScore() <= examSettings->getMaxWrongAnswer());
			MessageBox::Show(L"Hết giờ làm bài, điểm số " + examResult->getScore().ToString() + "/" + questionData->getQuestionAmount().ToString()
							 + L"\n" + (isPass? L"Bạn đã đậu!": L"Bạn đã trượt"),
							 L"Thông báo");
			HistoryStoring* historyStoring = new HistoryStoring(curUser->getUsername(),
																examSettings,
																examSettings->getCountdownSeconds() - countdownSecond,
																examResult->getScore());
			historyStoring->storing();
			delete historyStoring;
			disableActiveAndShowResult();
		}
	}

	// Utils goes here
	private:
		std::wstring fitStringLine(std::wstring s, int lineLimit) {
			// find the nearest space symbol on the right and replace it by '\n'
			int q = (int)s.size() / lineLimit;
			for (int i = 1; i <= q; i++) {
				int pos = lineLimit * i;
				while (pos--)
					if (s[pos] == L' ') break;
				s.replace(pos, 1, L"\n");
			}
			return s;
		}

		void loadCertificateLabel() {
			int certificateType = examSettings->getCertificateIndex();
			if (certificateType == 0)
				this->certificateTypeLabel->Text = L"Loại bằng: A1";
			if (certificateType == 1)
				this->certificateTypeLabel->Text = L"Loại bằng: A2";
			if (certificateType == 2)
				this->certificateTypeLabel->Text = L"Loại bằng: B1";
			if (certificateType == 3)
				this->certificateTypeLabel->Text = L"Loại bằng: B2";
		}

		void loadQuestionAmount() {
			this->questionAmountLabel->Text = L"Số câu hỏi: " + examSettings->getQuestionAmount();
		}

		int getStateFromCheckedList() {
			int state = 0;
			for (int i = 0; i < this->checkedListAnswer->CheckedIndices->Count; i++)
				state += (1 << this->checkedListAnswer->CheckedIndices[i]);
			return state;
		}

		void fillCheckedListFromState(int state) {
			for (int i = 0; i < this->checkedListAnswer->Items->Count; i++)
				if ((state >> i) & 1)
					this->checkedListAnswer->SetItemChecked(i, true);
		}

		void loadQuestionStateFlow() {
			for (int i = 0; i < questionData->getQuestionAmount(); i++) {
				System::Windows::Forms::Button^ questionStateButton = (gcnew System::Windows::Forms::Button());
				questionStateButton->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
					
				questionStateButton->Size = System::Drawing::Size(66, 66);
				questionStateButton->Text = (i + 1).ToString();
				questionStateButton->UseVisualStyleBackColor = false;
				questionStateButton->ForeColor = System::Drawing::Color::Black;
				questionStateButton->BackColor = System::Drawing::Color::Gainsboro;

				this->questionStateFlowPanel->Controls->Add(questionStateButton);
				questionStateButton->Click += gcnew System::EventHandler(this, &TestExamUI::questionStateButton_OnClick);
			}
		}

		void updateAnswerStateInExam() {
			if (isExamFinish)
				return;
			examResult->updateAnswerStateAtIndex(curIndexQuestion, getStateFromCheckedList());
			updateQuestionStateFlow(curIndexQuestion);
		}

		void updateQuestionStateFlow(int index) {
			int curQuestionState = examResult->getAnswerStateAtIndex(index);
			if (curQuestionState > 0) {
				this->questionStateFlowPanel->Controls[index]->ForeColor = System::Drawing::Color::White;
				this->questionStateFlowPanel->Controls[index]->BackColor = System::Drawing::Color::MediumPurple;
			}
			else {
				this->questionStateFlowPanel->Controls[index]->ForeColor = System::Drawing::Color::Black;
				this->questionStateFlowPanel->Controls[index]->BackColor = System::Drawing::Color::Gainsboro;
			}
		}

		void updateUI() {
			// load question description
			questionNumberLabel->Text = L"Câu hỏi " + (curIndexQuestion + 1).ToString();
			Question q = questionData->getQuestion(curIndexQuestion);
			std::wstring dg = q.getDescription();
			this->qDescription->Text = gcnew String(fitStringLine(q.getDescription(), maxQueStringOnLine).data());

			// load multi-answers
			std::vector <std::wstring> answers = q.getAnswers();
			for (int i = 0; i < maxNAnswer; i++) {
				if (i < q.getNumberAnswer()) {
					std::wstring curAns = std::to_wstring(i + 1) + L") " + answers[i];
					curAns = fitStringLine(curAns, maxAnsStringOnLine);
					answerUI[i]->Text = gcnew String(curAns.data());
					answerUI[i]->ForeColor = System::Drawing::Color::Black;
				}
				else {
					answerUI[i]->Text = "";
				}
			}

			if (isExamFinish) {
				int state = examResult->getAnswerStateAtIndex(curIndexQuestion);
				for(int id = 0; id < q.getNumberAnswer(); id++)
					if((state>>id)&1)
						answerUI[id]->ForeColor = System::Drawing::Color::Red;

				std::vector <int> results = q.getResult();
				for (int id : results) {
					assert(id < q.getNumberAnswer());
					answerUI[id]->ForeColor = System::Drawing::Color::Green;
				}
			}

			// load checked list answer
			checkedListAnswer->Items->Clear();
			for (int i = 1; i <= q.getNumberAnswer(); i++) {
				std::wstring text = L"Đáp án " + std::to_wstring(i);
				checkedListAnswer->Items->Add(gcnew String(text.data()));
			}

			// fill checkedList by state
			fillCheckedListFromState(examResult->getAnswerStateAtIndex(curIndexQuestion));

			// load image
			std::wstring questionPathImage = q.getImagePath();
			if (questionPathImage != L"None") {
				std::wstring imagePath = questionData->getImagePath() + questionPathImage;
				pictureBox->Image = Image::FromFile(gcnew String(imagePath.data()));
			}
			else {
				pictureBox->Image = Image::FromFile(noImagePath);
			}
		}

		void disableActiveAndShowResult() {
			checkedListAnswer->Enabled = false;
			for (int index = 0; index < questionData->getQuestionAmount(); index++) {
				int s = examResult->getSingleScoreAtIndex(index);
				if (s == 1) {
					this->questionStateFlowPanel->Controls[index]->ForeColor = System::Drawing::Color::White;
					this->questionStateFlowPanel->Controls[index]->BackColor = System::Drawing::Color::Green;
				}
				else {
					this->questionStateFlowPanel->Controls[index]->ForeColor = System::Drawing::Color::White;
					this->questionStateFlowPanel->Controls[index]->BackColor = System::Drawing::Color::Red;
				}
			}
		}
};
}
