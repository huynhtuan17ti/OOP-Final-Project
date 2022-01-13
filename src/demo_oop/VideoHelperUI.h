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
	/// Summary for HelperVideoUI
	/// </summary>
	public ref class VideoHelperUI : public System::Windows::Forms::Form
	{
	public:
		VideoHelperUI(System::Windows::Forms::Form^ srcPrevForm, BaseHelperCreator* creator)
		{
			prevForm = srcPrevForm;
			itemList = creator->createHelper();
			tempHelperTitle = gcnew String(creator->getHelperTitle().data());
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VideoHelperUI()
		{
			delete itemList;
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Form^ prevForm;
	private:
		String^ tempHelperTitle;
		BaseList* itemList;
	private: System::Windows::Forms::Label^ helperTitle;
	private: System::Windows::Forms::Button^ backButton;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VideoHelperUI::typeid));
			this->helperTitle = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// helperTitle
			// 
			this->helperTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->helperTitle->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helperTitle->Location = System::Drawing::Point(0, 0);
			this->helperTitle->Name = L"helperTitle";
			this->helperTitle->Size = System::Drawing::Size(551, 39);
			this->helperTitle->TabIndex = 0;
			this->helperTitle->Text = L"Tiêu đề";
			this->helperTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(-2, -2);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(40, 40);
			this->backButton->TabIndex = 1;
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &VideoHelperUI::backButton_Click);
			// 
			// VideoHelperUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(551, 431);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->helperTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"VideoHelperUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trợ giúp";
			this->Load += gcnew System::EventHandler(this, &VideoHelperUI::HelperVideoUI_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ClickLink(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::LinkLabel^ label = (System::Windows::Forms::LinkLabel^)sender;
		int index = Convert::ToInt32(label->Tag);
		std::wstring url = itemList->getWebItem(index)->getUrl();
		System::Diagnostics::Process::Start(gcnew String(url.data()));
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prevForm->Show();
	}
	private: System::Void HelperVideoUI_Load(System::Object^ sender, System::EventArgs^ e) {
		helperTitle->Text = tempHelperTitle;
		int spaceDist = 35;
		for (int i = 0; i < itemList->getAmount(); i++) {
			std::wstring title = itemList->getWebItem(i)->getTitle();
			System::Windows::Forms::LinkLabel^ linkLabel = (gcnew System::Windows::Forms::LinkLabel());

			linkLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			linkLabel->LinkColor = System::Drawing::Color::Blue;
			linkLabel->Location = System::Drawing::Point(70, 80 + spaceDist * i);
			linkLabel->AutoSize = true;
			linkLabel->Text = gcnew String(title.data());
			linkLabel->Tag = i.ToString();

			linkLabel->Click += gcnew System::EventHandler(this, &VideoHelperUI::ClickLink);

			this->Controls->Add(linkLabel);
		}
	}
	};
}