#pragma once
#include "HistoryData.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HistoryUI
	/// </summary>
	public ref class HistoryUI : public System::Windows::Forms::Form
	{
	public:
		HistoryUI(HistoryStoring* srcHistoryStoring)
		{
			// don't delete this, its pointer is still used in previous form
			historyStoring = srcHistoryStoring;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HistoryUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		HistoryStoring* historyStoring;
	private: System::Windows::Forms::Label^ accountLabel;
	protected:
	private: System::Windows::Forms::Label^ userNameLabel;


	private: System::Windows::Forms::Label^ certificateIndexLabel;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ timeLabel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ timeStampLabel;



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
			this->accountLabel = (gcnew System::Windows::Forms::Label());
			this->userNameLabel = (gcnew System::Windows::Forms::Label());
			this->certificateIndexLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timeStampLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// accountLabel
			// 
			this->accountLabel->AutoSize = true;
			this->accountLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountLabel->Location = System::Drawing::Point(12, 69);
			this->accountLabel->Name = L"accountLabel";
			this->accountLabel->Size = System::Drawing::Size(94, 23);
			this->accountLabel->TabIndex = 0;
			this->accountLabel->Text = L"Tài khoản:";
			// 
			// userNameLabel
			// 
			this->userNameLabel->AutoSize = true;
			this->userNameLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->userNameLabel->Location = System::Drawing::Point(142, 69);
			this->userNameLabel->Name = L"userNameLabel";
			this->userNameLabel->Size = System::Drawing::Size(57, 23);
			this->userNameLabel->TabIndex = 1;
			this->userNameLabel->Text = L"kkura";
			// 
			// certificateIndexLabel
			// 
			this->certificateIndexLabel->AutoSize = true;
			this->certificateIndexLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->certificateIndexLabel->ForeColor = System::Drawing::Color::Black;
			this->certificateIndexLabel->Location = System::Drawing::Point(142, 126);
			this->certificateIndexLabel->Name = L"certificateIndexLabel";
			this->certificateIndexLabel->Size = System::Drawing::Size(29, 19);
			this->certificateIndexLabel->TabIndex = 5;
			this->certificateIndexLabel->Text = L"A1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Loại bằng:";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultLabel->ForeColor = System::Drawing::Color::Black;
			this->resultLabel->Location = System::Drawing::Point(142, 181);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(49, 19);
			this->resultLabel->TabIndex = 7;
			this->resultLabel->Text = L"23/25";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Kết quả:";
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLabel->ForeColor = System::Drawing::Color::Black;
			this->timeLabel->Location = System::Drawing::Point(142, 236);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(51, 19);
			this->timeLabel->TabIndex = 9;
			this->timeLabel->Text = L"00:00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Thời gian:";
			// 
			// timeStampLabel
			// 
			this->timeStampLabel->AutoSize = true;
			this->timeStampLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeStampLabel->Location = System::Drawing::Point(13, 28);
			this->timeStampLabel->Name = L"timeStampLabel";
			this->timeStampLabel->Size = System::Drawing::Size(162, 18);
			this->timeStampLabel->TabIndex = 10;
			this->timeStampLabel->Text = L"20/11/2020 - 09:00:03";
			this->timeStampLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// HistoryUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(387, 361);
			this->Controls->Add(this->timeStampLabel);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->certificateIndexLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->userNameLabel);
			this->Controls->Add(this->accountLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"HistoryUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lịch sử";
			this->Load += gcnew System::EventHandler(this, &HistoryUI::HistoryUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HistoryUI_Load(System::Object^ sender, System::EventArgs^ e) {
		this->timeStampLabel -> Text = gcnew String(historyStoring->getTimestamp()->toString().data());
		this->userNameLabel->Text = gcnew String(historyStoring->getUsername().data());
		int certificateIndex = historyStoring->getExamSettings()->getCertificateIndex();
		loadCertificateLabel(certificateIndex);
		this->resultLabel->Text = historyStoring->getCorrectAnswer().ToString() + L"/" + historyStoring->getExamSettings()->getQuestionAmount().ToString();
		
		if (historyStoring->isPass())
			this->resultLabel->ForeColor = System::Drawing::Color::Green;
		else
			this->resultLabel->ForeColor = System::Drawing::Color::Red;

		int minute = historyStoring->getDoneTime() / 60;
		int second = historyStoring->getDoneTime() % 60;
		Time* time = new Time(0, minute, second);
		this->timeLabel->Text = gcnew String(time->toString().data());
		delete time;
	}

	void loadCertificateLabel(int certificateType) {
		if (certificateType == 0)
			this->certificateIndexLabel->Text = L"A1";
		if (certificateType == 1)
				this->certificateIndexLabel->Text = L"A2";
		if (certificateType == 2)
			this->certificateIndexLabel->Text = L"B1";
		if (certificateType == 3)
			this->certificateIndexLabel->Text = L"B2";
	}
};
}
