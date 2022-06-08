#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include "count.h"
#include "input.h"

#define is_function(c) (c >= 'a' && c <= 'z')

namespace calculator {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Windows::Controls;


	/// <summary>
	/// —водка дл€ form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		form2(string temp, String ^str)
		{
			InitializeComponent();
			
			int n = count(temp);

			int m = (int)pow(2, n);

			std::vector<std::vector<int> >a(n + 1, std::vector<int>(m + 1));

			table(a, n, m);

			dataGridView1->RowCount = m + 1;
			dataGridView1->ColumnCount = n + 2;

			for (int i = 1; i <= m; i++)
			{
				dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
			}

			string CountFunk = temp;
			sort(CountFunk.begin(), CountFunk.end());

			string one;
			if (is_function(CountFunk[0]))
				one.push_back(CountFunk[0]);

			for (int i = 1; i < CountFunk.size(); i++)
			{
				if (is_function(CountFunk[i]) && CountFunk[i]!=CountFunk[i-1])
				{
					one.push_back(CountFunk[i]);
				}
			}

			for (int i = 1; i <= n; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = (Char)(one[i - 1]);
			}

			dataGridView1->Rows[0]->Cells[n+1]->Value = str;


			for (int i = 1; i <= m;  i++)
			{
				for (int j = 1; j <= n; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = a[j][i].ToString();
				}
			}

			vector<int>perem(26);
			for (int i = 1; i <= m; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					perem[one[j - 1] - 'a'] = a[j][i];
				}
				int c = input(temp, perem);
				dataGridView1->Rows[i]->Cells[n+1]->Value = c.ToString();
			}
		}


	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(717, 482);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 47);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(800, 427);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &form2::dataGridView1_CellContentClick_1);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 523);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"form2";
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}
	private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
