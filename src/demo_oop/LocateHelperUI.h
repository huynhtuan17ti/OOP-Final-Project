#pragma once
#include "Helper.h"

namespace demooop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LocateHelperUI
	/// </summary>
	public ref class LocateHelperUI : public System::Windows::Forms::Form
	{
	public:
		LocateHelperUI(System::Windows::Forms::Form^ srcPrevForm)
		{
			prevForm = srcPrevForm;
			helperDatabase = new LocateHelper();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LocateHelperUI()
		{
			delete helperDatabase;
			if (components)
			{
				delete components;
			}
		}
	private:
		LocateHelper* helperDatabase;
		System::Windows::Forms::Form^ prevForm;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Label^ helperTitle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ locateLabel;
	private: System::Windows::Forms::LinkLabel^ urlLinkLabel;
	private: System::Windows::Forms::Label^ activeTimeLabel;
	private: System::Windows::Forms::Button^ getInfoButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LocateHelperUI::typeid));
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->helperTitle = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->urlLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->activeTimeLabel = (gcnew System::Windows::Forms::Label());
			this->locateLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->getInfoButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(-2, -1);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(40, 40);
			this->backButton->TabIndex = 2;
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &LocateHelperUI::backButton_Click);
			// 
			// helperTitle
			// 
			this->helperTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->helperTitle->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helperTitle->Location = System::Drawing::Point(0, 0);
			this->helperTitle->Name = L"helperTitle";
			this->helperTitle->Size = System::Drawing::Size(634, 39);
			this->helperTitle->TabIndex = 3;
			this->helperTitle->Text = L"Tiêu đề";
			this->helperTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Các địa điểm thi trên thành phố Hồ Chí Minh";
			// 
			// comboBox
			// 
			this->comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(28, 104);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(510, 24);
			this->comboBox->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->urlLinkLabel);
			this->panel1->Controls->Add(this->activeTimeLabel);
			this->panel1->Controls->Add(this->locateLabel);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(28, 169);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(587, 238);
			this->panel1->TabIndex = 6;
			// 
			// urlLinkLabel
			// 
			this->urlLinkLabel->AutoSize = true;
			this->urlLinkLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->urlLinkLabel->Location = System::Drawing::Point(75, 100);
			this->urlLinkLabel->Name = L"urlLinkLabel";
			this->urlLinkLabel->Size = System::Drawing::Size(66, 16);
			this->urlLinkLabel->TabIndex = 12;
			this->urlLinkLabel->TabStop = true;
			this->urlLinkLabel->Text = L"linkLabel1";
			this->urlLinkLabel->Click += gcnew System::EventHandler(this, &LocateHelperUI::urlLinkLabel_Click);
			// 
			// activeTimeLabel
			// 
			this->activeTimeLabel->AutoSize = true;
			this->activeTimeLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->activeTimeLabel->Location = System::Drawing::Point(176, 59);
			this->activeTimeLabel->Name = L"activeTimeLabel";
			this->activeTimeLabel->Size = System::Drawing::Size(42, 16);
			this->activeTimeLabel->TabIndex = 11;
			this->activeTimeLabel->Text = L"label5";
			// 
			// locateLabel
			// 
			this->locateLabel->AutoSize = true;
			this->locateLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locateLabel->Location = System::Drawing::Point(75, 20);
			this->locateLabel->Name = L"locateLabel";
			this->locateLabel->Size = System::Drawing::Size(42, 16);
			this->locateLabel->TabIndex = 10;
			this->locateLabel->Text = L"label5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 21);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Bản đồ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Thời gian hoạt động:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Địa chỉ: ";
			// 
			// getInfoButton
			// 
			this->getInfoButton->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->getInfoButton->Location = System::Drawing::Point(544, 96);
			this->getInfoButton->Name = L"getInfoButton";
			this->getInfoButton->Size = System::Drawing::Size(71, 37);
			this->getInfoButton->TabIndex = 7;
			this->getInfoButton->Text = L"Lọc";
			this->getInfoButton->UseVisualStyleBackColor = true;
			this->getInfoButton->Click += gcnew System::EventHandler(this, &LocateHelperUI::getInfoButton_Click);
			// 
			// LocateHelperUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 440);
			this->Controls->Add(this->getInfoButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->helperTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LocateHelperUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trợ giúp";
			this->Load += gcnew System::EventHandler(this, &LocateHelperUI::LocateHelperUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LocateHelperUI_Load(System::Object^ sender, System::EventArgs^ e) {
		helperDatabase->readData();
		helperTitle->Text = L"Địa điểm sát hạch bằng lái";

		for (int index = 0; index < helperDatabase->getLength(); index++) {
			std::wstring curTitle = helperDatabase->getTitleAtIndex(index);
			comboBox->Items->Add(gcnew String(curTitle.data()));
		}
		comboBox->SelectedIndex = 0;
		loadUI(0);
	}
	private: System::Void getInfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = comboBox->SelectedIndex;
		loadUI(index);
	}
	private: System::Void urlLinkLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = Convert::ToInt32(urlLinkLabel->Tag);
		std::wstring url = helperDatabase->getUrlAtIndex(index);
		System::Diagnostics::Process::Start(gcnew String(url.data()));
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prevForm->Show();
	}
	private:
		void loadUI(int index) {
			locateLabel->Text = gcnew String(helperDatabase->getLocateAtIndex(index).data());
			activeTimeLabel->Text = gcnew String(helperDatabase->getActiveTimeAtIndex(index).data());
			urlLinkLabel->Text = gcnew String(helperDatabase->getUrlAtIndex(index).data());
			urlLinkLabel->Tag = index;
		}
};
}
