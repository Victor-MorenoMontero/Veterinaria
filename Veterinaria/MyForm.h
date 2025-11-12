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
	pila_veterinaria^ pila_clientes = gcnew(pila_veterinaria);


	public:


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Panel^ panelAtencion;
	private: System::Windows::Forms::TextBox^ txtCCantMascotas;
	private: System::Windows::Forms::TextBox^ txtCHora;


	private: System::Windows::Forms::TextBox^ txtCContacto;


	private: System::Windows::Forms::TextBox^ txtCDueño;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ horaCLlegada;

	private: System::Windows::Forms::Label^ infoCContacto;

	private: System::Windows::Forms::Label^ nombreCDueño;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col4;
	private: System::Windows::Forms::Button^ button3;





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




	private: System::Windows::Forms::Button^ btnDehacer;

	private: System::Windows::Forms::Button^ btnAtender;



	private: void clear_atencion() {
		// Tu código aquí
		// Ejemplo:
		txtCDueño->Text = "";
		txtCContacto->Text = "";
		txtCHora->Text = "";
		txtCCantMascotas->Text = "";
	}

















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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCCantMascotas = (gcnew System::Windows::Forms::TextBox());
			this->txtCHora = (gcnew System::Windows::Forms::TextBox());
			this->txtCContacto = (gcnew System::Windows::Forms::TextBox());
			this->txtCDueño = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->horaCLlegada = (gcnew System::Windows::Forms::Label());
			this->infoCContacto = (gcnew System::Windows::Forms::Label());
			this->nombreCDueño = (gcnew System::Windows::Forms::Label());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->btnDehacer = (gcnew System::Windows::Forms::Button());
			this->colaAtencionTtl = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PanelCola = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->ocultarCola = (gcnew System::Windows::Forms::Button());
			this->limpiar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDueño = (gcnew System::Windows::Forms::TextBox());
			this->horaLlegada = (gcnew System::Windows::Forms::Label());
			this->numMascotas = (gcnew System::Windows::Forms::Label());
			this->infoContacto = (gcnew System::Windows::Forms::Label());
			this->nombreDuenio = (gcnew System::Windows::Forms::Label());
			this->txtContacto = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->fecha = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelAtencion->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->PanelCola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 760);
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
			this->panel2->Controls->Add(this->panelAtencion);
			this->panel2->Controls->Add(this->btnAtender);
			this->panel2->Controls->Add(this->btnDehacer);
			this->panel2->Controls->Add(this->colaAtencionTtl);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->PanelCola);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(196, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1629, 760);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panelAtencion
			// 
			this->panelAtencion->Controls->Add(this->button7);
			this->panelAtencion->Controls->Add(this->button6);
			this->panelAtencion->Controls->Add(this->button5);
			this->panelAtencion->Controls->Add(this->button4);
			this->panelAtencion->Controls->Add(this->button3);
			this->panelAtencion->Controls->Add(this->groupBox1);
			this->panelAtencion->Controls->Add(this->textBox5);
			this->panelAtencion->Controls->Add(this->label2);
			this->panelAtencion->Controls->Add(this->txtCCantMascotas);
			this->panelAtencion->Controls->Add(this->txtCHora);
			this->panelAtencion->Controls->Add(this->txtCContacto);
			this->panelAtencion->Controls->Add(this->txtCDueño);
			this->panelAtencion->Controls->Add(this->label5);
			this->panelAtencion->Controls->Add(this->horaCLlegada);
			this->panelAtencion->Controls->Add(this->infoCContacto);
			this->panelAtencion->Controls->Add(this->nombreCDueño);
			this->panelAtencion->Location = System::Drawing::Point(27, 138);
			this->panelAtencion->Name = L"panelAtencion";
			this->panelAtencion->Size = System::Drawing::Size(527, 566);
			this->panelAtencion->TabIndex = 5;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(336, 464);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(268, 464);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(93, 465);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(301, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(189, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(329, 156);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 100);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pagado";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(37, 67);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(46, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"No";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(37, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(40, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Sí";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(340, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(337, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Total a Pagar";
			// 
			// txtCCantMascotas
			// 
			this->txtCCantMascotas->Location = System::Drawing::Point(80, 380);
			this->txtCCantMascotas->Name = L"txtCCantMascotas";
			this->txtCCantMascotas->Size = System::Drawing::Size(174, 22);
			this->txtCCantMascotas->TabIndex = 7;
			// 
			// txtCHora
			// 
			this->txtCHora->Location = System::Drawing::Point(80, 295);
			this->txtCHora->Name = L"txtCHora";
			this->txtCHora->Size = System::Drawing::Size(174, 22);
			this->txtCHora->TabIndex = 6;
			// 
			// txtCContacto
			// 
			this->txtCContacto->Location = System::Drawing::Point(80, 204);
			this->txtCContacto->Name = L"txtCContacto";
			this->txtCContacto->Size = System::Drawing::Size(171, 22);
			this->txtCContacto->TabIndex = 5;
			this->txtCContacto->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// txtCDueño
			// 
			this->txtCDueño->Location = System::Drawing::Point(80, 102);
			this->txtCDueño->Name = L"txtCDueño";
			this->txtCDueño->Size = System::Drawing::Size(174, 22);
			this->txtCDueño->TabIndex = 4;
			this->txtCDueño->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_3);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(77, 355);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 16);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Cantidad de Mascotas";
			// 
			// horaCLlegada
			// 
			this->horaCLlegada->AutoSize = true;
			this->horaCLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->horaCLlegada->Location = System::Drawing::Point(77, 273);
			this->horaCLlegada->Name = L"horaCLlegada";
			this->horaCLlegada->Size = System::Drawing::Size(124, 16);
			this->horaCLlegada->TabIndex = 2;
			this->horaCLlegada->Text = L"Hora de Llegada";
			this->horaCLlegada->Click += gcnew System::EventHandler(this, &MyForm::horaCLlegada_Click);
			// 
			// infoCContacto
			// 
			this->infoCContacto->AutoSize = true;
			this->infoCContacto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoCContacto->Location = System::Drawing::Point(77, 169);
			this->infoCContacto->Name = L"infoCContacto";
			this->infoCContacto->Size = System::Drawing::Size(174, 16);
			this->infoCContacto->TabIndex = 1;
			this->infoCContacto->Text = L"Información de Contacto";
			this->infoCContacto->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// nombreCDueño
			// 
			this->nombreCDueño->AutoSize = true;
			this->nombreCDueño->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreCDueño->Location = System::Drawing::Point(77, 73);
			this->nombreCDueño->Name = L"nombreCDueño";
			this->nombreCDueño->Size = System::Drawing::Size(137, 16);
			this->nombreCDueño->TabIndex = 0;
			this->nombreCDueño->Text = L"Nombre del Dueño";
			this->nombreCDueño->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_3);
			// 
			// btnAtender
			// 
			this->btnAtender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtender->Location = System::Drawing::Point(729, 670);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(102, 23);
			this->btnAtender->TabIndex = 3;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
			// 
			// btnDehacer
			// 
			this->btnDehacer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDehacer->Location = System::Drawing::Point(1035, 635);
			this->btnDehacer->Name = L"btnDehacer";
			this->btnDehacer->Size = System::Drawing::Size(192, 23);
			this->btnDehacer->TabIndex = 4;
			this->btnDehacer->Text = L"Deshacer Atencion";
			this->btnDehacer->UseVisualStyleBackColor = true;
			this->btnDehacer->Click += gcnew System::EventHandler(this, &MyForm::btnDehacer_Click);
			// 
			// colaAtencionTtl
			// 
			this->colaAtencionTtl->AutoSize = true;
			this->colaAtencionTtl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colaAtencionTtl->Location = System::Drawing::Point(904, 148);
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
				this->col1, this->col2,
					this->col3, this->col4
			});
			this->dataGridView1->Location = System::Drawing::Point(646, 225);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(757, 249);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// col1
			// 
			this->col1->HeaderText = L"Dueño";
			this->col1->MinimumWidth = 6;
			this->col1->Name = L"col1";
			this->col1->Width = 125;
			// 
			// col2
			// 
			this->col2->HeaderText = L"Info Contacto";
			this->col2->MinimumWidth = 6;
			this->col2->Name = L"col2";
			this->col2->Width = 125;
			// 
			// col3
			// 
			this->col3->HeaderText = L"Hora Llegada";
			this->col3->MinimumWidth = 6;
			this->col3->Name = L"col3";
			this->col3->Width = 125;
			// 
			// col4
			// 
			this->col4->HeaderText = L"Cant. Mascotas";
			this->col4->MinimumWidth = 6;
			this->col4->Name = L"col4";
			this->col4->Width = 125;
			// 
			// PanelCola
			// 
			this->PanelCola->Controls->Add(this->numericUpDown1);
			this->PanelCola->Controls->Add(this->dateTimePicker1);
			this->PanelCola->Controls->Add(this->ocultarCola);
			this->PanelCola->Controls->Add(this->limpiar);
			this->PanelCola->Controls->Add(this->eliminar);
			this->PanelCola->Controls->Add(this->Agregar);
			this->PanelCola->Controls->Add(this->label1);
			this->PanelCola->Controls->Add(this->txtDueño);
			this->PanelCola->Controls->Add(this->horaLlegada);
			this->PanelCola->Controls->Add(this->numMascotas);
			this->PanelCola->Controls->Add(this->infoContacto);
			this->PanelCola->Controls->Add(this->nombreDuenio);
			this->PanelCola->Controls->Add(this->txtContacto);
			this->PanelCola->Location = System::Drawing::Point(27, 138);
			this->PanelCola->Name = L"PanelCola";
			this->PanelCola->Size = System::Drawing::Size(527, 520);
			this->PanelCola->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(50, 415);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(201, 22);
			this->numericUpDown1->TabIndex = 17;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(175, 293);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(76, 22);
			this->dateTimePicker1->TabIndex = 16;
			this->dateTimePicker1->Value = System::DateTime(2025, 11, 12, 0, 0, 0, 0);
			// 
			// ocultarCola
			// 
			this->ocultarCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ocultarCola->Location = System::Drawing::Point(337, 354);
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
			this->limpiar->Location = System::Drawing::Point(337, 282);
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
			this->eliminar->Location = System::Drawing::Point(337, 214);
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
			this->Agregar->Location = System::Drawing::Point(337, 136);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(118, 29);
			this->Agregar->TabIndex = 10;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = true;
			this->Agregar->Click += gcnew System::EventHandler(this, &MyForm::Agregar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información del Dueño";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// txtDueño
			// 
			this->txtDueño->Location = System::Drawing::Point(50, 120);
			this->txtDueño->Name = L"txtDueño";
			this->txtDueño->Size = System::Drawing::Size(201, 22);
			this->txtDueño->TabIndex = 5;
			this->txtDueño->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDueño_TextChanged);
			// 
			// horaLlegada
			// 
			this->horaLlegada->AutoSize = true;
			this->horaLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->horaLlegada->Location = System::Drawing::Point(49, 293);
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
			this->numMascotas->Location = System::Drawing::Point(49, 386);
			this->numMascotas->Name = L"numMascotas";
			this->numMascotas->Size = System::Drawing::Size(154, 16);
			this->numMascotas->TabIndex = 4;
			this->numMascotas->Text = L"Número de mascotas";
			this->numMascotas->Click += gcnew System::EventHandler(this, &MyForm::numMascotas_Click);
			// 
			// infoContacto
			// 
			this->infoContacto->AutoSize = true;
			this->infoContacto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoContacto->Location = System::Drawing::Point(49, 185);
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
			this->nombreDuenio->Location = System::Drawing::Point(51, 92);
			this->nombreDuenio->Name = L"nombreDuenio";
			this->nombreDuenio->Size = System::Drawing::Size(135, 16);
			this->nombreDuenio->TabIndex = 1;
			this->nombreDuenio->Text = L"Nombre del dueño";
			this->nombreDuenio->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txtContacto
			// 
			this->txtContacto->Location = System::Drawing::Point(50, 213);
			this->txtContacto->Name = L"txtContacto";
			this->txtContacto->Size = System::Drawing::Size(201, 22);
			this->txtContacto->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->fecha);
			this->panel3->Controls->Add(this->lblTitulo);
			this->panel3->Controls->Add(this->dateTimeFecha);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(196, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1629, 100);
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
			this->ClientSize = System::Drawing::Size(1825, 760);
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
			this->panelAtencion->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->PanelCola->ResumeLayout(false);
			this->PanelCola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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
	datos^ primero;
	// Sacando de la cola, para atender
	primero = cola_clientes->EliminarInicio();
	//Elimina de la tabla visual
	if (dataGridView1->Rows->Count > 0) {
		pila_clientes->Agregar(primero); // agrega a la pila, el elemento eliminado de la cola
		// Accede a la primera fila del DataGgrid
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox
		txtCDueño->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtCContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		txtCHora->Text = fila->Cells[2]->Value != nullptr ? fila->Cells[2]->Value->ToString() : "";
		txtCCantMascotas->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";
		// Elimina la fila del grid
		dataGridView1->Rows->RemoveAt(0);
		// Opcional: seleccionar la nueva primera fila si existe
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
	
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnDehacer_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero;
	primero = pila_clientes->Eliminar(); //se Saca de la pila
	if (primero != nullptr) {
		cola_clientes->AgregarInicio(primero);//Se vuelve a poner a la cola
		//Ahora hay que adicionarlo al Grid
		dataGridView1->Rows->Insert(0, primero->getDuenio(), primero->getContacto(), primero->getHora_llegada(), primero->getcantmascotas());
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dataGridView1->CurrentCell = dataGridView1->Rows[0]->Cells[0];
		//clear_atencion();
	}
}
	

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtDueño_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numMascotas_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelAtencion_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void horaCLlegada_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
  };
//}
