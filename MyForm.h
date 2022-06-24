#pragma once

namespace mysq {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(25, 52);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 206);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(212, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"select sort";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox2->Location = System::Drawing::Point(293, 54);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 206);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(109, 324);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(97, 20);
			this->textBox4->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(212, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Binary";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(8, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"search input";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(20, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 27);
			this->label3->TabIndex = 8;
			this->label3->Text = L"input";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(293, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 27);
			this->label4->TabIndex = 9;
			this->label4->Text = L"steps";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(131, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Bubble";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(131, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"insertion";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(383, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"no. of swap :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(383, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"no. of comp:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox3->Location = System::Drawing::Point(467, 55);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 205);
			this->textBox3->TabIndex = 14;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(467, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 27);
			this->label6->TabIndex = 15;
			this->label6->Text = L"outPut";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(212, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"merge";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(131, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 17;
			this->button6->Text = L"sequential";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(573, 54);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(205, 238);
			this->textBox5->TabIndex = 18;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(131, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Quick";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(627, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 27);
			this->label7->TabIndex = 20;
			this->label7->Text = L"process";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(790, 467);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int *num;
		int swapCounter = 0,compCounter=0;
		int size;
		void swap(int arr[], size_t i, int lowIndex) {
			int temp;
			
				temp = arr[i];
				arr[i] = arr[lowIndex];
				arr[lowIndex] = temp;
				for (int i = 0; i < size; ++i)
				{
					textBox2->Text = textBox2->Text + Convert::ToString(num[i]) + "   ";
				}
				textBox2->Text += "\r\n";
				swapCounter++;

		}

		void inPut() {
			 size = textBox1->Lines->Length;
			num = new int[size];
			size = size;
			for (int i = 0; i < size; i++) {
				num[i] = Convert::ToInt32(textBox1->Lines[i]);
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		inPut();
		for (size_t i = 0; i < size-1; i++)
		{
			int lowIndex = i;
			for (size_t j = size-1; j > i; j--)
			{
				if (num[j] < num[lowIndex])
				{
					lowIndex = j;
					
				}
			}
			swap(num, i, lowIndex);

		}

		for (int i = 0; i < size; ++i)
		{
			textBox3->Text = textBox3->Text + Convert::ToString(num[i]) + "\r\n";
		}
	}
		
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		inPut();
		int l = -1;
		int r = size;
		int value=Convert::ToInt32(textBox4->Text);
		while (l+1!=r)
		{
			int i = (l + r) / 2;
			if (value < num[i]) r = i;
			if (value == num[i]) { textBox3->Text = "Found: " + Convert::ToString(num[i]) + " : " + i; break; }
			if (value > num[i]) l = i;
		}
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	inPut();
	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j > i; j--) {
			if (num[j] < num[j - 1])
				swap(num, j, j - 1);
			compCounter++;
			
		}
	}
	for (int i = 0; i < size; ++i)
	{
		textBox3->Text = textBox3->Text + Convert::ToString(num[i]) + "\r\n";
	}

	label1->Text += Convert::ToString(swapCounter);
	label5->Text+= Convert::ToString(compCounter);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	inPut();
	for (int i = 1; i < size; i++)
	{
		for (int j = i; (j > 0) && (num[j] < num[j - 1]); j--) 
		{
			swap(num, j, j - 1);
			compCounter++;
	    }

	}

	for (int i = 0; i < size; ++i)
	{
		textBox3->Text = textBox3->Text + Convert::ToString(num[i]) + "\r\n";
	}

	label1->Text += Convert::ToString(swapCounter);
	label5->Text += Convert::ToString(compCounter);


}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   void mergeSort(int arr[], int size) {
		   int leftSize;
		   int rightSize;
		   if (size > 1) {
			   leftSize = size / 2;
			   rightSize = size - leftSize;
			   mergeSort(arr, leftSize);
			   mergeSort((arr + leftSize), rightSize);
			   merge(arr, leftSize, rightSize);
		   }
	   }
	   void merge(int ar[], int leftSize, int rightSize) {
		 
		   if (leftSize == 1) {
			   textBox5->Text = textBox5->Text + Convert::ToString(ar[0]) + " ";
			   textBox5->Text = textBox5->Text + "\r\n";

		   }
		   if (leftSize == 1) {
			   for (int i = leftSize; i > rightSize; i--)
				   textBox5->Text = textBox5->Text + Convert::ToString(ar[i]) + " , ";
			       textBox5->Text = textBox5->Text + "\r\n";
		   }
		   for (int i = 0; i < leftSize + rightSize; i++)
			   textBox5->Text = textBox5->Text + Convert::ToString(ar[i]) + " ";
		   textBox5->Text = textBox5->Text + "\r\n";
		   int* temp;
		   int index = 0;
		   int indexLeftSide = 0;
		   int indexRightSide = 0;
		   int i;
		   temp = new int[leftSize + rightSize];
		   while ((indexLeftSide < leftSize) && (indexRightSide < rightSize)) {
			   if (ar[indexLeftSide] < (ar + leftSize)[indexRightSide])
			   {
				  // textBox5->Text = textBox5->Text + Convert::ToString(temp[index]) + " ";
				   temp[index] = ar[indexLeftSide++];
				   index++;
			   }
			   else
			   {
				  
				   temp[index] = (ar + leftSize)[indexRightSide++];
			 index++;
			   }
			  
		   }
		   
		   while (indexLeftSide < leftSize)
			   temp[index++] = ar[indexLeftSide++];
		   while (indexRightSide < rightSize)
			   temp[index++] = (ar + leftSize)[indexRightSide++];
		   for (i = 0; i < leftSize + rightSize; i++)
			   ar[i] = temp[i];
		   delete[] temp;
		   for (int i = 0; i < leftSize + rightSize; i++)
			   textBox2->Text = textBox2->Text+ Convert::ToString(ar[i]) + " ";
		   textBox2->Text = textBox2->Text + "\r\n";
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	inPut();
	mergeSort(num,size);
	for (int i = 0; i < size; ++i)
	{
		textBox3->Text = textBox3->Text + Convert::ToString(num[i]) + "\r\n";
	}
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	inPut();
	bool isFound = false;
	int number=Convert::ToInt32(textBox4->Text);
	for (size_t i = 0; i < size; i++)
	{
		if (num[i] == number) {
			isFound = true;
			break;
		}
	}

	if (isFound) {
		textBox3->Text = "The value is Found";
	}else textBox3->Text = "The value is not Found";


}
		private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}

	   void quicksort(int arr[], int size) {
		   int pivot_index;
		   int n1;
		   int n2;
		   if (size > 1) {
			   partition(arr, size, pivot_index);
			   for (int i = 0; i < size; i++)
			   textBox2->Text = textBox2->Text + Convert::ToString(arr[i]) + " ";
		       textBox2->Text = textBox2->Text + "\r\n";
			   n1 = pivot_index;
			   n2 = size - n1 - 1;
			   quicksort(arr, n1);
			   quicksort((arr + pivot_index + 1), n2);
		   }
	   }
	   int countSwap = 0;
	   void partition(int arr[], int size, int& pivot_index) {
		   int pivot = arr[0];
		   int too_big = 1;
		   int too_small = size - 1;
		   int temp;

		   while (too_big <= too_small) {

			   while (arr[too_big] <= pivot)
				   too_big++;

			   while (arr[too_small] > pivot)
				   too_small--;

			   if (too_big < too_small)
			   {
				   // Swaping 
				   temp = arr[too_big];
				   arr[too_big] = arr[too_small];
				   arr[too_small] = temp;
				   countSwap++;
				   
			   }

			   

				  pivot_index = too_small;
				  if (arr[pivot_index] <= pivot) // 4 <= 5 
				  {
					  arr[0] = arr[pivot_index];

					  arr[pivot_index] = pivot;
					  countSwap++;

				  }

                 for (int i = 0; i < size; i++)
				   textBox5->Text = textBox5->Text + Convert::ToString(arr[i]) + " ";
			       textBox5->Text = textBox5->Text + "\r\n";
		   }
		   // 40           4
		  
		   

	   }

		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			inPut();
			quicksort(num, size);
			for (int i = 0; i < size; ++i)
			{
				textBox3->Text = textBox3->Text + Convert::ToString(num[i]) + "\r\n";
			}
			label1->Text += Convert::ToString(countSwap);
		}
};
}
