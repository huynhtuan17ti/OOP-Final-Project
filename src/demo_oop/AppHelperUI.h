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
	/// Summary for AppHelperUI
	/// </summary>
	public ref class AppHelperUI : public System::Windows::Forms::Form
	{
	public:
		AppHelperUI(System::Windows::Forms::Form^ srcPrevForm, ImageHelper* srcImageHelper)
		{
			prevForm = srcPrevForm;
			imageHelper = srcImageHelper;
			visitor = new GetItemVisitor();
			curImageIndex = 0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AppHelperUI()
		{
			delete imageHelper, visitor;
			if (components)
			{
				delete components;
			}
		}
	private:
		int curImageIndex;
		ImageHelper* imageHelper;
		HelperVisitor* visitor;
		System::Windows::Forms::Form^ prevForm;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	protected:
	private: System::Windows::Forms::Button^ leftButton;
	private: System::Windows::Forms::Button^ rightButton;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Label^ helperTitle;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppHelperUI::typeid));
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->leftButton = (gcnew System::Windows::Forms::Button());
			this->rightButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->helperTitle = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox->Location = System::Drawing::Point(46, 59);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(739, 446);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// leftButton
			// 
			this->leftButton->BackColor = System::Drawing::Color::White;
			this->leftButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftButton.BackgroundImage")));
			this->leftButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->leftButton->ForeColor = System::Drawing::Color::White;
			this->leftButton->Location = System::Drawing::Point(0, 178);
			this->leftButton->Name = L"leftButton";
			this->leftButton->Size = System::Drawing::Size(40, 155);
			this->leftButton->TabIndex = 1;
			this->leftButton->UseVisualStyleBackColor = false;
			this->leftButton->Click += gcnew System::EventHandler(this, &AppHelperUI::leftButton_Click);
			// 
			// rightButton
			// 
			this->rightButton->BackColor = System::Drawing::Color::White;
			this->rightButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rightButton.BackgroundImage")));
			this->rightButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rightButton->Location = System::Drawing::Point(792, 178);
			this->rightButton->Name = L"rightButton";
			this->rightButton->Size = System::Drawing::Size(40, 155);
			this->rightButton->TabIndex = 2;
			this->rightButton->UseVisualStyleBackColor = false;
			this->rightButton->Click += gcnew System::EventHandler(this, &AppHelperUI::rightButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(0, 0);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(40, 40);
			this->backButton->TabIndex = 3;
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &AppHelperUI::backButton_Click);
			// 
			// helperTitle
			// 
			this->helperTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->helperTitle->Font = (gcnew System::Drawing::Font(L"Sitka Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helperTitle->Location = System::Drawing::Point(0, 0);
			this->helperTitle->Name = L"helperTitle";
			this->helperTitle->Size = System::Drawing::Size(832, 39);
			this->helperTitle->TabIndex = 4;
			this->helperTitle->Text = L"Tiêu đề";
			this->helperTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AppHelperUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 529);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->rightButton);
			this->Controls->Add(this->leftButton);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->helperTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AppHelperUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trợ giúp";
			this->Load += gcnew System::EventHandler(this, &AppHelperUI::AppHelperUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AppHelperUI_Load(System::Object^ sender, System::EventArgs^ e) {
		helperTitle->Text = L"Hướng dẫn sử dụng phần mềm";
		loadPicture();
	}
	private: System::Void leftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curImageIndex--;
		if (curImageIndex == -1)
			curImageIndex = imageHelper->getAmount() - 1;
		loadPicture();
	}
	private: System::Void rightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curImageIndex++;
		if (curImageIndex == imageHelper->getAmount())
			curImageIndex = 0;
		loadPicture();
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prevForm->Show();
	}
	private:
		void loadPicture() {
			std::wstring imagePath = imageHelper->accept(visitor, curImageIndex)->getImagePath();
			pictureBox->Image = nullptr;
			pictureBox->Image = Image::FromFile(gcnew String(imagePath.data()));
			pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		}
};
}
