#pragma once
#include <string>

#include "form2.h" 

#define is_function(c) (c >= 'a' && c <= 'z')
#define is_operator(c) (c == '!' || c == '*' || c == '+' || c == '^' || c == '|' || c == '#' || c == '@' || c == '=')

using namespace System;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;
using namespace System::Threading::Tasks;
using namespace System::Windows::Forms;

namespace calculator {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Windows::Controls;

	string s;
	string out;

	int left = 0, right = 0;
	int size = 0;

	/// <summary>
	/// Сводка для form
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	public:

		// Конвертация std::string в System::String^
		static System::String^ StdToSys(std::string StdStr) {
			return gcnew System::String(StdStr.c_str());
		}
		// Конвертация System::String^ в std::string
		static const std::string SysToStd(System::String^ SysStr) {
			using namespace Runtime::InteropServices;
			char *v = (char*)(Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
			std::string result = std::string(v);
			Marshal::FreeHGlobal(System::IntPtr((void*)v));
			return result;
		}

		void kon()
		{
			if (out.size() != 0)
				if (is_function(out[out.size() - 1]))
					out.push_back('*');
		}

		void in_variable(char another)
		{
			size++;
			kon();
			s.push_back(another);
			out.push_back(another);
			str = StdToSys(s);
			this->textBox1->Text = str;
			textBox1->SelectionStart = textBox1->Text->Length;
		}

		void PerformCalculations()
		{
			MessageBox::Show("Неверное количество скобок!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	
		void check_operations()
		{
			MessageBox::Show("Два оператора подряд", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		void correct_size()
		{
			MessageBox::Show("Отсутствуют переменные", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		bool chec()
		{
			if (out.size() != 0)
				return is_operator(out[out.size() - 1]);
		}

		void empty_line()
		{
			MessageBox::Show("Пустая строка!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		void end_operator()
		{
			MessageBox::Show("В конце не должно быть оператора!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		void begin_operator()
		{
			MessageBox::Show("В начале не должно быть оператора!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		void left_bracket()
		{
			MessageBox::Show("Отсутсвует левая скобка!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}



	public:

	public:

	public:

		System::String ^str = ""; //строка отвечающая за вывод в textbox

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;

	private: System::Windows::Forms::Button^  button29;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(91, 379);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 57);
			this->button1->TabIndex = 31;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(171, 379);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 57);
			this->button2->TabIndex = 32;
			this->button2->Text = L"y";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form::button_y);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(248, 379);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 57);
			this->button3->TabIndex = 33;
			this->button3->Text = L"z";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &form::button_z);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Location = System::Drawing::Point(13, 379);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 57);
			this->button4->TabIndex = 34;
			this->button4->Text = L"u";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &form::button_u);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(328, 379);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 57);
			this->button5->TabIndex = 35;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(13, 316);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 57);
			this->button6->TabIndex = 36;
			this->button6->Text = L"i";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &form::button_i);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Location = System::Drawing::Point(91, 315);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 57);
			this->button7->TabIndex = 37;
			this->button7->Text = L"j";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &form::button_j);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Location = System::Drawing::Point(171, 316);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 57);
			this->button8->TabIndex = 38;
			this->button8->Text = L"k";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &form::button_k);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Location = System::Drawing::Point(251, 316);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 57);
			this->button9->TabIndex = 39;
			this->button9->Text = L"l";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &form::button_l);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(328, 315);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 57);
			this->button10->TabIndex = 40;
			this->button10->Text = L"|";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &form::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(408, 315);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 57);
			this->button11->TabIndex = 41;
			this->button11->Text = L"↓";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &form::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(13, 251);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(72, 57);
			this->button12->TabIndex = 42;
			this->button12->Text = L"e";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &form::button_e);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->Location = System::Drawing::Point(91, 251);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 57);
			this->button13->TabIndex = 43;
			this->button13->Text = L"f";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &form::button_f);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button14->Location = System::Drawing::Point(171, 251);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 57);
			this->button14->TabIndex = 44;
			this->button14->Text = L"g";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &form::button_g);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button15->Location = System::Drawing::Point(251, 251);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 57);
			this->button15->TabIndex = 45;
			this->button15->Text = L"h";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &form::button_h);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(328, 251);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(72, 57);
			this->button16->TabIndex = 46;
			this->button16->Text = L"→";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &form::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(408, 251);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(72, 57);
			this->button17->TabIndex = 47;
			this->button17->Text = L"↔";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &form::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(13, 186);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(72, 57);
			this->button18->TabIndex = 48;
			this->button18->Text = L"a";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &form::button_a);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button19->Location = System::Drawing::Point(91, 186);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(72, 57);
			this->button19->TabIndex = 49;
			this->button19->Text = L"b";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &form::button_b);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button20->Location = System::Drawing::Point(171, 186);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(72, 57);
			this->button20->TabIndex = 50;
			this->button20->Text = L"c";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &form::button_c);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button21->Location = System::Drawing::Point(251, 186);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(72, 57);
			this->button21->TabIndex = 51;
			this->button21->Text = L"d";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &form::button_d);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(328, 188);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(72, 57);
			this->button22->TabIndex = 52;
			this->button22->Text = L"∨";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &form::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(408, 187);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 57);
			this->button23->TabIndex = 53;
			this->button23->Text = L"∧";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &form::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(11, 123);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(72, 57);
			this->button24->TabIndex = 54;
			this->button24->Text = L"(";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &form::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(91, 123);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(72, 57);
			this->button25->TabIndex = 55;
			this->button25->Text = L")";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &form::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(251, 123);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(72, 57);
			this->button26->TabIndex = 56;
			this->button26->Text = L"¬";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &form::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(328, 123);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(72, 57);
			this->button27->TabIndex = 57;
			this->button27->Text = L"CE";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &form::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(408, 123);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(72, 57);
			this->button28->TabIndex = 58;
			this->button28->Text = L"C";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &form::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(171, 123);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(72, 57);
			this->button29->TabIndex = 60;
			this->button29->Text = L"⊕";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &form::button29_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(11, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(464, 75);
			this->textBox1->TabIndex = 61;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form::textBox1_TextChanged_2);
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(487, 442);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"form";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"form";
			this->Load += gcnew System::EventHandler(this, &form::form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void form_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_a(System::Object^  sender, System::EventArgs^  e) {
	in_variable('a');
}
private: System::Void button_d(System::Object^  sender, System::EventArgs^  e) {
	in_variable('d');
}
private: System::Void button_h(System::Object^  sender, System::EventArgs^  e) {
	in_variable('h');
}
private: System::Void button_j(System::Object^  sender, System::EventArgs^  e) {
	in_variable('j');
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	left++;
	s.push_back('(');
	out.push_back('(');
	str = StdToSys(s);
	this->textBox1->Text = str;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	right++;

	if (right > left)
	{
		left_bracket();
		right--;
	}
	else
	{
		s.push_back(')');
		out.push_back(')');
		str = StdToSys(s);
		this->textBox1->Text = str;
		textBox1->SelectionStart = textBox1->Text->Length;
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	kon();
	if (out.size() != 0)
		if (out[out.size() - 1] == '!')
			out.erase(out.end() - 1);
		else
			out.push_back('!');
	else
		out.push_back('!');
	
	s.push_back('¬');
	str = StdToSys(s);
	this->textBox1->Text = str;
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button_b(System::Object^  sender, System::EventArgs^  e) {
	in_variable('b');
}
private: System::Void button_c(System::Object^  sender, System::EventArgs^  e) {
	in_variable('c');
}
private: System::Void button_e(System::Object^  sender, System::EventArgs^  e) {
	in_variable('e');
}
private: System::Void button_f(System::Object^  sender, System::EventArgs^  e) {
	in_variable('f');
}
private: System::Void button_g(System::Object^  sender, System::EventArgs^  e) {
	in_variable('g');
}
private: System::Void button_i(System::Object^  sender, System::EventArgs^  e) {
	in_variable('i');
}
private: System::Void button_k(System::Object^  sender, System::EventArgs^  e) {
	in_variable('k');
}
private: System::Void button_l(System::Object^  sender, System::EventArgs^  e) {
	in_variable('l');
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if(chec())
		check_operations();
	else
	{
		s.push_back('\\');
		s.push_back('/');
		out.push_back('+');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('/');
		s.push_back('\\');
		out.push_back('*');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('#');
		out.push_back('#');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('|');
		out.push_back('|');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('@');
		out.push_back('@');
		str = StdToSys(s);
		textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('`');
		out.push_back('=');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (chec())
		check_operations();
	else
	{
		s.push_back('+');
		out.push_back('^');
		str = StdToSys(s);
		this->textBox1->Text = str;
	}
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	kon();
	s.push_back('x');
	out.push_back('x');
	str = StdToSys(s);
	this->textBox1->Text = str;
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button_y(System::Object^  sender, System::EventArgs^  e) {
	in_variable('y');
}
private: System::Void button_z(System::Object^  sender, System::EventArgs^  e) {
	in_variable('z');
}
private: System::Void button_u(System::Object^  sender, System::EventArgs^  e) {
	in_variable('u');
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	left = 0;
	right = 0;
	s = "";
	out = "";
	str = StdToSys(s);
	this->textBox1->Text = str;
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (s.size() != 0)
	{
		if (s[s.size() - 1] == '\\' || s[s.size() - 1] == '/')
		{
			s.erase(s.end() - 1);
		}
	}

	if (s.size() != 0)
	{
		if (out[out.size() - 1] == '(')
			left--;
		if (out[out.size() - 1] == ')')
			right--;

		s.erase(s.end() - 1);
		out.erase(out.end() - 1);
	}

	if (s.size() != 0)
		if (is_function(s[s.size() - 1]) && out[out.size() - 1] == '*')
			out.erase(out.end() - 1);
	
	str = StdToSys(s);
	this->textBox1->Text = str;
	textBox1->SelectionStart = textBox1->Text->Length;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	if (out.size() == 0)
	{
		empty_line();
	}
	else if (size == 0)
	{
		correct_size();
	}
	else if (is_operator(out[0]) && out[0] != '!')
	{
		begin_operator();
	}
	else if (is_operator(out[out.size()-1]))
	{
		end_operator();
	}
	else if (left != right)
	{
		PerformCalculations();
	}
	else
	{
		form2^frm = gcnew form2(out, str);
		frm->Show();
	}
}
private: System::Void textBox1_TextChanged_2(System::Object^  sender, System::EventArgs^  e) {

}
};
}
