#pragma once

namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblTitulo;


	private: System::Windows::Forms::DateTimePicker^ dateTimeFecha;
	private: System::Windows::Forms::Panel^ panelCola;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ numMascotas;

	private: System::Windows::Forms::Label^ horaLlegada;

	private: System::Windows::Forms::Label^ infoContacto;



	private: System::Windows::Forms::Label^ nombreDuenio;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ ocultarCola;

	private: System::Windows::Forms::Button^ limpiar;

	private: System::Windows::Forms::Button^ eliminar;
	private: System::Windows::Forms::Button^ Agregar;
	private: System::Windows::Forms::Label^ fecha;
	private: System::Windows::Forms::Label^ colaAtencionTtl;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;













	protected:






	protected:





	protected:




	protected:

	protected:

	protected:

	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->panelCola = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nombreDuenio = (gcnew System::Windows::Forms::Label());
			this->infoContacto = (gcnew System::Windows::Forms::Label());
			this->horaLlegada = (gcnew System::Windows::Forms::Label());
			this->numMascotas = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->limpiar = (gcnew System::Windows::Forms::Button());
			this->ocultarCola = (gcnew System::Windows::Forms::Button());
			this->fecha = (gcnew System::Windows::Forms::Label());
			this->colaAtencionTtl = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panelCola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 492);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->colaAtencionTtl);
			this->panel2->Controls->Add(this->panelCola);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(196, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1130, 492);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->fecha);
			this->panel3->Controls->Add(this->lblTitulo);
			this->panel3->Controls->Add(this->dateTimeFecha);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(196, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1130, 100);
			this->panel3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cola de ingreso";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 49);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Atención en consulta";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(812, 39);
			this->dateTimeFecha->Name = L"dateTimeFecha";
			this->dateTimeFecha->Size = System::Drawing::Size(200, 22);
			this->dateTimeFecha->TabIndex = 0;
			this->dateTimeFecha->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimeFecha_ValueChanged);
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(20, 22);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(110, 39);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"COLA";
			this->lblTitulo->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panelCola
			// 
			this->panelCola->Controls->Add(this->ocultarCola);
			this->panelCola->Controls->Add(this->limpiar);
			this->panelCola->Controls->Add(this->eliminar);
			this->panelCola->Controls->Add(this->Agregar);
			this->panelCola->Controls->Add(this->comboBox1);
			this->panelCola->Controls->Add(this->dateTimePicker1);
			this->panelCola->Controls->Add(this->textBox2);
			this->panelCola->Controls->Add(this->textBox1);
			this->panelCola->Controls->Add(this->numMascotas);
			this->panelCola->Controls->Add(this->horaLlegada);
			this->panelCola->Controls->Add(this->infoContacto);
			this->panelCola->Controls->Add(this->nombreDuenio);
			this->panelCola->Controls->Add(this->label1);
			this->panelCola->Location = System::Drawing::Point(38, 134);
			this->panelCola->Name = L"panelCola";
			this->panelCola->Size = System::Drawing::Size(404, 296);
			this->panelCola->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información del Dueño";
			// 
			// nombreDuenio
			// 
			this->nombreDuenio->AutoSize = true;
			this->nombreDuenio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreDuenio->Location = System::Drawing::Point(21, 64);
			this->nombreDuenio->Name = L"nombreDuenio";
			this->nombreDuenio->Size = System::Drawing::Size(135, 16);
			this->nombreDuenio->TabIndex = 1;
			this->nombreDuenio->Text = L"Nombre del dueño";
			this->nombreDuenio->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// infoContacto
			// 
			this->infoContacto->AutoSize = true;
			this->infoContacto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoContacto->Location = System::Drawing::Point(23, 120);
			this->infoContacto->Name = L"infoContacto";
			this->infoContacto->Size = System::Drawing::Size(178, 16);
			this->infoContacto->TabIndex = 2;
			this->infoContacto->Text = L"Información del Contacto";
			// 
			// horaLlegada
			// 
			this->horaLlegada->AutoSize = true;
			this->horaLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->horaLlegada->Location = System::Drawing::Point(23, 175);
			this->horaLlegada->Name = L"horaLlegada";
			this->horaLlegada->Size = System::Drawing::Size(120, 16);
			this->horaLlegada->TabIndex = 3;
			this->horaLlegada->Text = L"Hora de llegada";
			this->horaLlegada->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// numMascotas
			// 
			this->numMascotas->AutoSize = true;
			this->numMascotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMascotas->Location = System::Drawing::Point(21, 231);
			this->numMascotas->Name = L"numMascotas";
			this->numMascotas->Size = System::Drawing::Size(154, 16);
			this->numMascotas->TabIndex = 4;
			this->numMascotas->Text = L"Número de mascotas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 22);
			this->textBox2->TabIndex = 6;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"True";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(149, 175);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(76, 22);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->Value = System::DateTime(2025, 11, 11, 0, 0, 0, 0);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(22, 250);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// Agregar
			// 
			this->Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar->Location = System::Drawing::Point(263, 58);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(118, 29);
			this->Agregar->TabIndex = 10;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = true;
			// 
			// eliminar
			// 
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->Location = System::Drawing::Point(263, 114);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(118, 29);
			this->eliminar->TabIndex = 11;
			this->eliminar->Text = L"Eliminar";
			this->eliminar->UseVisualStyleBackColor = true;
			// 
			// limpiar
			// 
			this->limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limpiar->Location = System::Drawing::Point(263, 172);
			this->limpiar->Name = L"limpiar";
			this->limpiar->Size = System::Drawing::Size(118, 25);
			this->limpiar->TabIndex = 12;
			this->limpiar->Text = L"Limpiar";
			this->limpiar->UseVisualStyleBackColor = true;
			// 
			// ocultarCola
			// 
			this->ocultarCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ocultarCola->Location = System::Drawing::Point(263, 224);
			this->ocultarCola->Name = L"ocultarCola";
			this->ocultarCola->Size = System::Drawing::Size(118, 30);
			this->ocultarCola->TabIndex = 13;
			this->ocultarCola->Text = L"Ocultar la cola";
			this->ocultarCola->UseVisualStyleBackColor = true;
			this->ocultarCola->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// fecha
			// 
			this->fecha->AutoSize = true;
			this->fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fecha->Location = System::Drawing::Point(756, 39);
			this->fecha->Name = L"fecha";
			this->fecha->Size = System::Drawing::Size(50, 16);
			this->fecha->TabIndex = 2;
			this->fecha->Text = L"Fecha";
			this->fecha->Click += gcnew System::EventHandler(this, &MyForm::fecha_Click);
			// 
			// colaAtencionTtl
			// 
			this->colaAtencionTtl->AutoSize = true;
			this->colaAtencionTtl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colaAtencionTtl->Location = System::Drawing::Point(531, 123);
			this->colaAtencionTtl->Name = L"colaAtencionTtl";
			this->colaAtencionTtl->Size = System::Drawing::Size(370, 39);
			this->colaAtencionTtl->TabIndex = 1;
			this->colaAtencionTtl->Text = L"COLA DE ATENCION";
			this->colaAtencionTtl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(500, 181);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(554, 249);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Dueño";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Info Contacto";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora Llegada";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cant. Mascotas";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 492);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panelCola->ResumeLayout(false);
			this->panelCola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fecha_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimeFecha_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
