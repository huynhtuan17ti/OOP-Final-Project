#pragma once
#include "DatabaseUI.h"
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelData;
	private: System::Windows::Forms::Button^ butonA1;
	private: System::Windows::Forms::Button^ buttonA2;
	private: System::Windows::Forms::Button^ buttonB1;
	private: System::Windows::Forms::Button^ buttonB2;
	private: System::Windows::Forms::Panel^ panelTest;
	private: System::Windows::Forms::Panel^ panelHelp;

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
			this->questionButton = (gcnew System::Windows::Forms::Button());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelTest = (gcnew System::Windows::Forms::Panel());
			this->panelHelp = (gcnew System::Windows::Forms::Panel());
			this->panelData = (gcnew System::Windows::Forms::Panel());
			this->buttonA2 = (gcnew System::Windows::Forms::Button());
			this->buttonB1 = (gcnew System::Windows::Forms::Button());
			this->buttonB2 = (gcnew System::Windows::Forms::Button());
			this->butonA1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panelData->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// questionButton
			// 
			this->questionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionButton->Location = System::Drawing::Point(0, 27);
			this->questionButton->Name = L"questionButton";
			this->questionButton->Size = System::Drawing::Size(300, 100);
			this->questionButton->TabIndex = 0;
			this->questionButton->Text = L"Bo cau hoi";
			this->questionButton->UseVisualStyleBackColor = true;
			this->questionButton->Click += gcnew System::EventHandler(this, &MainMenuUI::questionButton_Click);
			// 
			// testButton
			// 
			this->testButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->testButton->Location = System::Drawing::Point(0, 153);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(300, 100);
			this->testButton->TabIndex = 1;
			this->testButton->Text = L"Thi thu";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &MainMenuUI::testButton_Click);
			// 
			// helpButton
			// 
			this->helpButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helpButton->Location = System::Drawing::Point(0, 280);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(300, 100);
			this->helpButton->TabIndex = 2;
			this->helpButton->Text = L"Tro Giup";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &MainMenuUI::helpButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->panelTest);
			this->panel1->Controls->Add(this->panelHelp);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(901, 80);
			this->panel1->TabIndex = 3;
			// 
			// panelTest
			// 
			this->panelTest->Location = System::Drawing::Point(300, 80);
			this->panelTest->Name = L"panelTest";
			this->panelTest->Size = System::Drawing::Size(604, 673);
			this->panelTest->TabIndex = 6;
			// 
			// panelHelp
			// 
			this->panelHelp->Location = System::Drawing::Point(300, 80);
			this->panelHelp->Name = L"panelHelp";
			this->panelHelp->Size = System::Drawing::Size(604, 673);
			this->panelHelp->TabIndex = 7;
			// 
			// panelData
			// 
			this->panelData->Controls->Add(this->buttonA2);
			this->panelData->Controls->Add(this->buttonB1);
			this->panelData->Controls->Add(this->buttonB2);
			this->panelData->Controls->Add(this->butonA1);
			this->panelData->Location = System::Drawing::Point(300, 80);
			this->panelData->Name = L"panelData";
			this->panelData->Size = System::Drawing::Size(604, 673);
			this->panelData->TabIndex = 5;
			// 
			// buttonA2
			// 
			this->buttonA2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA2->Location = System::Drawing::Point(347, 183);
			this->buttonA2->Name = L"buttonA2";
			this->buttonA2->Size = System::Drawing::Size(142, 70);
			this->buttonA2->TabIndex = 3;
			this->buttonA2->Text = L"A2";
			this->buttonA2->UseVisualStyleBackColor = true;
			// 
			// buttonB1
			// 
			this->buttonB1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB1->Location = System::Drawing::Point(106, 360);
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
			this->buttonB2->Location = System::Drawing::Point(347, 360);
			this->buttonB2->Name = L"buttonB2";
			this->buttonB2->Size = System::Drawing::Size(142, 70);
			this->buttonB2->TabIndex = 1;
			this->buttonB2->Text = L"B2";
			this->buttonB2->UseVisualStyleBackColor = true;
			// 
			// butonA1
			// 
			this->butonA1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butonA1->Location = System::Drawing::Point(106, 183);
			this->butonA1->Name = L"butonA1";
			this->butonA1->Size = System::Drawing::Size(142, 70);
			this->butonA1->TabIndex = 0;
			this->butonA1->Text = L"A1";
			this->butonA1->UseVisualStyleBackColor = true;
			this->butonA1->Click += gcnew System::EventHandler(this, &MainMenuUI::butonA1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->questionButton);
			this->panel2->Controls->Add(this->testButton);
			this->panel2->Controls->Add(this->helpButton);
			this->panel2->Location = System::Drawing::Point(0, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 670);
			this->panel2->TabIndex = 4;
			// 
			// MainMenuUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 750);
			this->Controls->Add(this->panelData);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MainMenuUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"App thi bang lai xe (Demo)";
			this->Load += gcnew System::EventHandler(this, &MainMenuUI::MainMenuUI_Load);
			this->panel1->ResumeLayout(false);
			this->panelData->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void questionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 0;
		showPanel();
	}
	private: System::Void testButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 1;
		showPanel();
	}
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		curPanelIndex = 2;
		showPanel();
	}
	private: System::Void butonA1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DatabaseUI^ databaseUI = gcnew DatabaseUI(this);
		databaseUI->Show();
	}
	private: System::Void MainMenuUI_Load(System::Object^ sender, System::EventArgs^ e) {
		listPanel = gcnew array<System::Windows::Forms::Panel^>(3);
		listPanel[0] = panelData;
		listPanel[1] = panelTest;
		listPanel[2] = panelHelp;
		showPanel();
	}
	private: void showPanel() {
		for (int i = 0; i < 3; i++)
			if (i == curPanelIndex)
				listPanel[i]->Show();
			else listPanel[i]->Hide();
	}
};
}
