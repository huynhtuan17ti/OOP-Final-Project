#pragma once
#include "Database.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DatabaseUI
	/// </summary>
	public ref class DatabaseUI : public System::Windows::Forms::Form
	{
	public:
		DatabaseUI(System::Windows::Forms::Form^ srcPrevForm)
		{
			questionData = new QuestionData();
			curIndexQuesion = 0;
			firstLoad = true;
			prevForm = srcPrevForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DatabaseUI()
		{
			delete questionData;
			if (components)
			{
				delete components;
			}
		}

	private:
		const int maxAnsStringOnLine = 130; // maximum size of a string on a line
		const int maxQueStringOnLine = 70;
		const int maxNAnswer = 6; // maximum number of answers
		String^ noImagePath = "assets/no_image.png";

	private: 
		bool firstLoad;
		int curIndexQuesion;
		QuestionData* questionData;
		private: cli::array<System::Windows::Forms::Label^>^ answerUI;
	
	private: System::Windows::Forms::Form^ prevForm;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ rightButton;
	private: System::Windows::Forms::Button^ leftButton;
	
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ qDescription;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DatabaseUI::typeid));
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rightButton = (gcnew System::Windows::Forms::Button());
			this->leftButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->qDescription = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(0, 1);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(113, 28);
			this->backButton->TabIndex = 0;
			this->backButton->Text = L"Trang trước";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &DatabaseUI::backButton_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->rightButton);
			this->panel1->Controls->Add(this->leftButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 650);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 100);
			this->panel1->TabIndex = 1;
			// 
			// rightButton
			// 
			this->rightButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->rightButton->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rightButton->Location = System::Drawing::Point(787, 0);
			this->rightButton->Name = L"rightButton";
			this->rightButton->Size = System::Drawing::Size(113, 100);
			this->rightButton->TabIndex = 1;
			this->rightButton->Text = L"Câu hỏi tiếp theo";
			this->rightButton->UseVisualStyleBackColor = true;
			this->rightButton->Click += gcnew System::EventHandler(this, &DatabaseUI::rightButton_Click);
			// 
			// leftButton
			// 
			this->leftButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->leftButton->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftButton->Location = System::Drawing::Point(0, 0);
			this->leftButton->Name = L"leftButton";
			this->leftButton->Size = System::Drawing::Size(113, 100);
			this->leftButton->TabIndex = 0;
			this->leftButton->Text = L"Câu hỏi trước";
			this->leftButton->UseVisualStyleBackColor = true;
			this->leftButton->Click += gcnew System::EventHandler(this, &DatabaseUI::leftButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Wheat;
			this->panel2->Location = System::Drawing::Point(1, 358);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(899, 295);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Đáp án";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Câu hỏi";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// qDescription
			// 
			this->qDescription->AutoSize = true;
			this->qDescription->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qDescription->Location = System::Drawing::Point(13, 35);
			this->qDescription->Name = L"qDescription";
			this->qDescription->Size = System::Drawing::Size(90, 16);
			this->qDescription->TabIndex = 6;
			this->qDescription->Text = L"Câu hỏi ở đây";
			// 
			// pictureBox
			// 
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
			this->pictureBox->Location = System::Drawing::Point(486, 30);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(403, 294);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 7;
			this->pictureBox->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(23, 35);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(111, 56);
			this->panel3->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(23, 322);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(111, 56);
			this->panel4->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Wheat;
			this->panel5->Controls->Add(this->qDescription);
			this->panel5->Location = System::Drawing::Point(7, 70);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(479, 229);
			this->panel5->TabIndex = 10;
			// 
			// DatabaseUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(900, 750);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->backButton);
			this->Name = L"DatabaseUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"App thi bang lai xe (Demo)";
			this->Load += gcnew System::EventHandler(this, &DatabaseUI::DatabaseUI_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prevForm->Show();
	}
	private: System::Void leftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curIndexQuesion--;
		if (curIndexQuesion == -1) {
			curIndexQuesion = questionData->getNQuestion() - 1;
		}
		DatabaseUI_Load(sender, e);
	}
	
	private: System::Void DatabaseUI_Load(System::Object^ sender, System::EventArgs^ e) {
		Question q = questionData->getQuestion(curIndexQuesion);
		std::wstring dg = q.getDescription();
		this->qDescription->Text = gcnew String(fitStringLine(q.getDescription(), maxQueStringOnLine).data());
		
		if (firstLoad) {
			answerUI = gcnew array<System::Windows::Forms::Label^>(maxNAnswer);
			int xStartPoint = 10, yStartPoint = 30;
			int rowRange = 50; // size between 2 answer lines
			for (int i = 0; i < maxNAnswer; i++) {
				answerUI[i] = gcnew Label();
				answerUI[i]->AutoSize = true;
				this->panel2->Controls->Add(answerUI[i]);
				answerUI[i]->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				answerUI[i]->Location = System::Drawing::Point(xStartPoint, yStartPoint + i * rowRange);
				answerUI[i]->Name = L"text";
				answerUI[i]->Size = System::Drawing::Size(75, 21);
				answerUI[i]->TabIndex = i;
			}
		}

		std::vector <std::wstring> answers = q.getAnswers();
		for (int i = 0; i < maxNAnswer; i++) {
			if (i < q.getNumberAnswer()) {
				std::wstring curAns = std::to_wstring(i + 1) + L") " + answers[i];
				curAns = fitStringLine(curAns, maxAnsStringOnLine);
				answerUI[i]->Text = gcnew String(curAns.data());
				answerUI[i]->ForeColor = System::Drawing::Color::Red;
			}
			else {
				answerUI[i]->Text = "";
			}
		}

		std::vector <int> results = q.getResult();
		for (int id : results) {
			assert(id < q.getNumberAnswer());
			answerUI[id]->ForeColor = System::Drawing::Color::Green;
		}

		std::wstring questionPathImage = q.getImagePath();
		
		if (questionPathImage != L"None") {
			std::wstring imagePath = L"A1/image/" + questionPathImage;
			pictureBox->Image = Image::FromFile(gcnew String(imagePath.data()));
		}
		else {
			pictureBox->Image = Image::FromFile(noImagePath);
		}

		if (firstLoad)
			firstLoad = false;
	}

	private: System::Void rightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curIndexQuesion++;
		if (curIndexQuesion == questionData->getNQuestion()) {
			curIndexQuesion = 0;
		}
		DatabaseUI_Load(sender, e);
	}
	
	// Utils goes here
	private:
		std::wstring fitStringLine(std::wstring s, int lineLimit) {
			// find the nearest space symbol on the left and replace it by '\n'
			int q = (int)s.size() / lineLimit;
			for (int i = 1; i <= q; i++) {
				int pos = lineLimit * i;
				while (pos--)
					if (s[pos] == L' ') break;
				s.replace(pos, 1, L"\n");
			}
			return s;
		}
};
}
