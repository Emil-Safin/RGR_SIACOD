#pragma once
#include "MaxHeap.h"

namespace RGRSIACOD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textMas;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::TextBox^ text_del;

	protected:

	protected:


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textMas = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->text_del = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textMas
			// 
			this->textMas->Location = System::Drawing::Point(603, 14);
			this->textMas->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textMas->Name = L"textMas";
			this->textMas->Size = System::Drawing::Size(100, 23);
			this->textMas->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(709, 12);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-4, 494);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(698, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����� ����� ���������� ��-222�\r\n�������� ��������� ������, ��������� � ����������"
				L" �� Max-Heap-������.\r\n";
			// 
			// button_del
			// 
			this->button_del->Location = System::Drawing::Point(0, 12);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(75, 23);
			this->button_del->TabIndex = 3;
			this->button_del->Text = L"�������";
			this->button_del->UseVisualStyleBackColor = true;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// text_del
			// 
			this->text_del->Location = System::Drawing::Point(82, 12);
			this->text_del->Name = L"text_del";
			this->text_del->Size = System::Drawing::Size(100, 23);
			this->text_del->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 556);
			this->Controls->Add(this->text_del);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textMas);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::vector<int>* heapTree;
		int N = 65;
		array<System::Windows::Forms::TextBox^>^ txt_box_mas = gcnew array<System::Windows::Forms::TextBox^>(N);
		array<String^>^ string_mas;
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//for (int j = 0; j < N; j++) {
		//	if (j == 0 || j == 1 || j == 3 || j == 7 || j == 15 || j == 31 || j == 63) {
		//		count = j+1;
		//		i = 1;
		//	}
		//	System::Windows::Forms::TextBox^ txt_box = (gcnew System::Windows::Forms::TextBox());
		//	txt_box->Location = System::Drawing::Point((Convert::ToInt32(this->ClientSize.Width)/(1+count))*i,13 + (50 * shir));
		//	txt_box->Name = L"txt_box" + j;
		//	txt_box->Size = System::Drawing::Size(40, 20);
		//	txt_box->TabIndex = j;
		//	txt_box->Tag = j;
		//	txt_box->Text = ((Convert::ToInt32(this->ClientSize.Width) / (1 + count))* i).ToString();
		//	txt_box->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_box_TextChanged);
		//	txt_box_mas[j] = txt_box;
		//	//txt_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		//	this->Controls->Add(txt_box);
		//	if (j == 0 || j == 2 || j == 6 || j == 14 || j == 30 || j == 62) {
		//		shir++;
		//	}
		//	i++;
		//}
		//heapTree = new std::vector<int>;
	}
	private: System::Void txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
    

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		N = 65;
		int count = 0;
		int i = 1;
		int shir = 0;
		
		for (int i = 0; i < N; i++) {
			this->Controls->Remove(txt_box_mas[i]);
		}
		string_mas = textMas->Text->Split(' ', false);
		N = string_mas->Length;
		txt_box_mas = gcnew array<System::Windows::Forms::TextBox^>(N);
		heapTree = new std::vector<int>;
		//int* MassInt = new int[100];
		for (int i = 0, a = N; i < a; i++) {
			if (string_mas[i] != "")
				insert(*heapTree, Convert::ToInt32(string_mas[i]));
			else
				N--;
				//string_mas[i] = "0";
			//	MassInt[i] = Convert::ToInt32(string_mas[i]);
		}
		for (int j = 0; j < N; j++) {
			if (j == 0 || j == 1 || j == 3 || j == 7 || j == 15 || j == 31 || j == 63) {
				count = j + 1;
				i = 1;
			}
			System::Windows::Forms::TextBox^ txt_box = (gcnew System::Windows::Forms::TextBox());
			txt_box->Location = System::Drawing::Point((Convert::ToInt32(this->ClientSize.Width) / (1 + count)) * i, 13 + (50 * shir));
			txt_box->Name = L"txt_box" + j;
			txt_box->Size = System::Drawing::Size(40, 20);
			txt_box->TabIndex = j;
			txt_box->Tag = j;
			txt_box->Text = Convert::ToInt32((*heapTree)[j]).ToString();
			txt_box->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_box_TextChanged);
			txt_box_mas[j] = txt_box;
			//txt_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Controls->Add(txt_box);
			if (j == 0 || j == 2 || j == 6 || j == 14 || j == 30 || j == 62) {
				shir++;
			}
			i++;
		}
		delete heapTree;
	

	}
		   public:   void repaint() {
			   int count = 0;
			   int i = 1;
			   int shir = 0;
			   N = (string_mas->Length) - 1;
			   for (int j = 0; j < N; j++) {
				   if (j == 0 || j == 1 || j == 3 || j == 7 || j == 15 || j == 31 || j == 63) {
					   count = j + 1;
					   i = 1;
				   }
				   System::Windows::Forms::TextBox^ txt_box = (gcnew System::Windows::Forms::TextBox());
				   txt_box->Location = System::Drawing::Point((Convert::ToInt32(this->ClientSize.Width) / (1 + count)) * i, 13 + (50 * shir));
				   txt_box->Name = L"txt_box" + j;
				   txt_box->Size = System::Drawing::Size(40, 20);
				   txt_box->TabIndex = j;
				   txt_box->Tag = j;
				   txt_box->Text = Convert::ToInt32((*heapTree)[j]).ToString();
				   txt_box->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_box_TextChanged);
				   txt_box_mas[j] = txt_box;
				   //txt_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				   this->Controls->Add(txt_box);
				   if (j == 0 || j == 2 || j == 6 || j == 14 || j == 30 || j == 62) {
					   shir++;
				   }
				   i++;
			   }
		   }

    private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) {
	    int tmp = Convert::ToInt32(text_del->Text);
	    if (search(*heapTree, tmp)) {
		    deleteNode(*heapTree, tmp);
			repaint();
	    }
    }
};
}
