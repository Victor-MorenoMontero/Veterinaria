#pragma once
using namespace Classveterinaria;
using namespace std;


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

	cola_veterinaria^ cola_clientes = gcnew(cola_veterinaria);
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
	private: System::Windows::Forms::Panel^ PanelCola;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ numMascotas;

	private: System::Windows::Forms::Label^ horaLlegada;

	private: System::Windows::Forms::Label^ infoContacto;



	private: System::Windows::Forms::Label^ nombreDuenio;
	private: System::Windows::Forms::TextBox^ txtContacto;

	private: System::Windows::Forms::TextBox^ txtDueño;



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
	private: System::Windows::Forms::Button^ btnDehacer;

	private: System::Windows::Forms::Button^ btnAtender;
	private: System::Windows::Forms::TextBox^ numericUpDown1;

	private: System::Windows::Forms::TextBox^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panelAtencion;

















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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelAtencion = (gcnew System::Windows::Forms::Panel());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->colaAtencionTtl = (gcnew System::Windows::Forms::Label());
			this->btnDehacer = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PanelCola = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::TextBox());
			this->ocultarCola = (gcnew System::Windows::Forms::Button());
			this->limpiar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->txtContacto = (gcnew System::Windows::Forms::TextBox());
			this->txtDueño = (gcnew System::Windows::Forms::TextBox());
			this->numMascotas = (gcnew System::Windows::Forms::Label());
			this->horaLlegada = (gcnew System::Windows::Forms::Label());
			this->infoContacto = (gcnew System::Windows::Forms::Label());
			this->nombreDuenio = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->fecha = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelAtencion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->PanelCola->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 641);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
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
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->colaAtencionTtl);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->panelAtencion);
			this->panel2->Controls->Add(this->PanelCola);
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->txtDueño);
			this->panel2->Controls->Add(this->numMascotas);
			this->panel2->Controls->Add(this->nombreDuenio);
			this->panel2->Controls->Add(this->txtContacto);
			this->panel2->Controls->Add(this->infoContacto);
			this->panel2->Controls->Add(this->horaLlegada);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(196, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1393, 641);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panelAtencion
			// 
			this->panelAtencion->Controls->Add(this->btnAtender);
			this->panelAtencion->Controls->Add(this->btnDehacer);
			this->panelAtencion->Location = System::Drawing::Point(441, 465);
			this->panelAtencion->Name = L"panelAtencion";
			this->panelAtencion->Size = System::Drawing::Size(842, 72);
			this->panelAtencion->TabIndex = 5;
			// 
			// btnAtender
			// 
			this->btnAtender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtender->Location = System::Drawing::Point(134, 29);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(102, 23);
			this->btnAtender->TabIndex = 3;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
			// 
			// colaAtencionTtl
			// 
			this->colaAtencionTtl->AutoSize = true;
			this->colaAtencionTtl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colaAtencionTtl->Location = System::Drawing::Point(716, 121);
			this->colaAtencionTtl->Name = L"colaAtencionTtl";
			this->colaAtencionTtl->Size = System::Drawing::Size(370, 39);
			this->colaAtencionTtl->TabIndex = 1;
			this->colaAtencionTtl->Text = L"COLA DE ATENCION";
			this->colaAtencionTtl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// btnDehacer
			// 
			this->btnDehacer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDehacer->Location = System::Drawing::Point(435, 29);
			this->btnDehacer->Name = L"btnDehacer";
			this->btnDehacer->Size = System::Drawing::Size(192, 23);
			this->btnDehacer->TabIndex = 4;
			this->btnDehacer->Text = L"Deshacer Atencion";
			this->btnDehacer->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(458, 198);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(757, 249);
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
			// PanelCola
			// 
			this->PanelCola->Controls->Add(this->ocultarCola);
			this->PanelCola->Controls->Add(this->limpiar);
			this->PanelCola->Controls->Add(this->eliminar);
			this->PanelCola->Controls->Add(this->Agregar);
			this->PanelCola->Location = System::Drawing::Point(234, 133);
			this->PanelCola->Name = L"PanelCola";
			this->PanelCola->Size = System::Drawing::Size(200, 296);
			this->PanelCola->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(27, 384);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(201, 22);
			this->numericUpDown1->TabIndex = 15;
			this->numericUpDown1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(152, 312);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(76, 22);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// ocultarCola
			// 
			this->ocultarCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ocultarCola->Location = System::Drawing::Point(61, 229);
			this->ocultarCola->Name = L"ocultarCola";
			this->ocultarCola->Size = System::Drawing::Size(118, 30);
			this->ocultarCola->TabIndex = 13;
			this->ocultarCola->Text = L"Ocultar la cola";
			this->ocultarCola->UseVisualStyleBackColor = true;
			this->ocultarCola->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// limpiar
			// 
			this->limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limpiar->Location = System::Drawing::Point(61, 179);
			this->limpiar->Name = L"limpiar";
			this->limpiar->Size = System::Drawing::Size(118, 25);
			this->limpiar->TabIndex = 12;
			this->limpiar->Text = L"Limpiar";
			this->limpiar->UseVisualStyleBackColor = true;
			// 
			// eliminar
			// 
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->Location = System::Drawing::Point(61, 117);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(118, 29);
			this->eliminar->TabIndex = 11;
			this->eliminar->Text = L"Eliminar";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &MyForm::eliminar_Click);
			// 
			// Agregar
			// 
			this->Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar->Location = System::Drawing::Point(61, 61);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(118, 29);
			this->Agregar->TabIndex = 10;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = true;
			this->Agregar->Click += gcnew System::EventHandler(this, &MyForm::Agregar_Click);
			// 
			// txtContacto
			// 
			this->txtContacto->Location = System::Drawing::Point(27, 273);
			this->txtContacto->Name = L"txtContacto";
			this->txtContacto->Size = System::Drawing::Size(201, 22);
			this->txtContacto->TabIndex = 6;
			// 
			// txtDueño
			// 
			this->txtDueño->Location = System::Drawing::Point(27, 217);
			this->txtDueño->Name = L"txtDueño";
			this->txtDueño->Size = System::Drawing::Size(201, 22);
			this->txtDueño->TabIndex = 5;
			// 
			// numMascotas
			// 
			this->numMascotas->AutoSize = true;
			this->numMascotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMascotas->Location = System::Drawing::Point(24, 365);
			this->numMascotas->Name = L"numMascotas";
			this->numMascotas->Size = System::Drawing::Size(154, 16);
			this->numMascotas->TabIndex = 4;
			this->numMascotas->Text = L"Número de mascotas";
			// 
			// horaLlegada
			// 
			this->horaLlegada->AutoSize = true;
			this->horaLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->horaLlegada->Location = System::Drawing::Point(26, 315);
			this->horaLlegada->Name = L"horaLlegada";
			this->horaLlegada->Size = System::Drawing::Size(120, 16);
			this->horaLlegada->TabIndex = 3;
			this->horaLlegada->Text = L"Hora de llegada";
			this->horaLlegada->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// infoContacto
			// 
			this->infoContacto->AutoSize = true;
			this->infoContacto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoContacto->Location = System::Drawing::Point(26, 254);
			this->infoContacto->Name = L"infoContacto";
			this->infoContacto->Size = System::Drawing::Size(178, 16);
			this->infoContacto->TabIndex = 2;
			this->infoContacto->Text = L"Información del Contacto";
			// 
			// nombreDuenio
			// 
			this->nombreDuenio->AutoSize = true;
			this->nombreDuenio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreDuenio->Location = System::Drawing::Point(24, 198);
			this->nombreDuenio->Name = L"nombreDuenio";
			this->nombreDuenio->Size = System::Drawing::Size(135, 16);
			this->nombreDuenio->TabIndex = 1;
			this->nombreDuenio->Text = L"Nombre del dueño";
			this->nombreDuenio->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información del Dueño";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->fecha);
			this->panel3->Controls->Add(this->lblTitulo);
			this->panel3->Controls->Add(this->dateTimeFecha);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(196, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1393, 100);
			this->panel3->TabIndex = 0;
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
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(20, 22);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(382, 39);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"ATENCION A CLIENTE";
			this->lblTitulo->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1589, 641);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelAtencion->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->PanelCola->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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
	PanelCola->Visible = true;
	panelAtencion->Visible = false;
	lblTitulo->Text = "COLA";
	btnAtender->Visible = false;
	btnDehacer->Visible = false;
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
private: System::Void Agregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ texto = numericUpDown1->Text;
	int numero = Int32::Parse(texto);
	datos^ nueva = gcnew datos(txtDueño->Text, txtContacto->Text, dateTimePicker1->Text, numero);
	cola_clientes->AgregarFinal(nueva); //se adiciona en la cola
	//utilizando grid, se adiciona una fila con los datos
	array<String^>^ fila = gcnew array<String^>{ txtDueño->Text, txtContacto->Text, dateTimePicker1->Text, texto };
	dataGridView1->Rows->Add(fila);
	dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero;
	primero = cola_clientes->EliminarInicio();
	if (dataGridView1->Rows->Count > 0) {
		//Accede a la primera fila
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox
		txtDueño->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		numericUpDown1->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";
		// Elimina la fila del grid
		dataGridView1->Rows->RemoveAt(0);
		// Opcional: seleccionar la nueva primera fila si existe
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCola->Visible = false;
	panelAtencion->Visible = true;
	lblTitulo->Text = "ATENCION A CLIENTE";
	btnAtender->Visible = true;
	btnDehacer->Visible = true;
}
private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
