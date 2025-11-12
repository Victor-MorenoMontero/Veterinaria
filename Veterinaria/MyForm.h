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
		lista_Atencion_veterinaria^ lista_atencion = gcnew(lista_Atencion_veterinaria);

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
	private: System::Windows::Forms::TextBox^ textTotal;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButtonNO;

	private: System::Windows::Forms::RadioButton^ radioButtonSI;

	private: System::Windows::Forms::Button^ btnSiguientel;

	private: System::Windows::Forms::Button^ btnAnteriorL;

	private: System::Windows::Forms::Button^ btnPrimeroL;

	private: System::Windows::Forms::Button^ btnInsertarL;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col4;
	private: System::Windows::Forms::Button^ btnUltimoL;

	private: System::Windows::Forms::Button^ btnEliminarL;






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


	private: void clear_ventana() {
		txtCDueño->Text = "";
		textTotal->Text = "";
		txtCCantMascotas->Text = "";
		txtCContacto->Text = "";
		txtCHora->Text = "";
		radioButtonSI->Checked = false;
		radioButtonNO->Checked = false;
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
			this->btnUltimoL = (gcnew System::Windows::Forms::Button());
			this->btnSiguientel = (gcnew System::Windows::Forms::Button());
			this->btnAnteriorL = (gcnew System::Windows::Forms::Button());
			this->btnPrimeroL = (gcnew System::Windows::Forms::Button());
			this->btnInsertarL = (gcnew System::Windows::Forms::Button());
			this->btnEliminarL = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonNO = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSI = (gcnew System::Windows::Forms::RadioButton());
			this->textTotal = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
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
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Location = System::Drawing::Point(26, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cola de ingreso";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Menu;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button2->Location = System::Drawing::Point(26, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 49);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Atención en consulta";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
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
			this->panelAtencion->BackColor = System::Drawing::SystemColors::Info;
			this->panelAtencion->Controls->Add(this->btnUltimoL);
			this->panelAtencion->Controls->Add(this->btnSiguientel);
			this->panelAtencion->Controls->Add(this->btnAnteriorL);
			this->panelAtencion->Controls->Add(this->btnPrimeroL);
			this->panelAtencion->Controls->Add(this->btnInsertarL);
			this->panelAtencion->Controls->Add(this->btnEliminarL);
			this->panelAtencion->Controls->Add(this->groupBox1);
			this->panelAtencion->Controls->Add(this->textTotal);
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
			this->panelAtencion->Size = System::Drawing::Size(537, 566);
			this->panelAtencion->TabIndex = 5;
			// 
			// btnUltimoL
			// 
			this->btnUltimoL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnUltimoL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUltimoL->Location = System::Drawing::Point(364, 497);
			this->btnUltimoL->Name = L"btnUltimoL";
			this->btnUltimoL->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->btnUltimoL->Size = System::Drawing::Size(75, 23);
			this->btnUltimoL->TabIndex = 16;
			this->btnUltimoL->Text = L"Ultimo";
			this->btnUltimoL->UseVisualStyleBackColor = false;
			this->btnUltimoL->Click += gcnew System::EventHandler(this, &MyForm::btnUltimoL_Click);
			// 
			// btnSiguientel
			// 
			this->btnSiguientel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnSiguientel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSiguientel->Location = System::Drawing::Point(271, 496);
			this->btnSiguientel->Name = L"btnSiguientel";
			this->btnSiguientel->Size = System::Drawing::Size(92, 24);
			this->btnSiguientel->TabIndex = 15;
			this->btnSiguientel->Text = L"Siguiente";
			this->btnSiguientel->UseVisualStyleBackColor = false;
			this->btnSiguientel->Click += gcnew System::EventHandler(this, &MyForm::btnSiguientel_Click);
			// 
			// btnAnteriorL
			// 
			this->btnAnteriorL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnAnteriorL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnteriorL->Location = System::Drawing::Point(181, 496);
			this->btnAnteriorL->Name = L"btnAnteriorL";
			this->btnAnteriorL->Size = System::Drawing::Size(88, 23);
			this->btnAnteriorL->TabIndex = 14;
			this->btnAnteriorL->Text = L"Anterior";
			this->btnAnteriorL->UseVisualStyleBackColor = false;
			this->btnAnteriorL->Click += gcnew System::EventHandler(this, &MyForm::btnAnteriorL_Click);
			// 
			// btnPrimeroL
			// 
			this->btnPrimeroL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnPrimeroL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrimeroL->Location = System::Drawing::Point(91, 495);
			this->btnPrimeroL->Name = L"btnPrimeroL";
			this->btnPrimeroL->Size = System::Drawing::Size(88, 24);
			this->btnPrimeroL->TabIndex = 13;
			this->btnPrimeroL->Text = L"Primero";
			this->btnPrimeroL->UseVisualStyleBackColor = false;
			this->btnPrimeroL->Click += gcnew System::EventHandler(this, &MyForm::btnPrimeroL_Click);
			// 
			// btnInsertarL
			// 
			this->btnInsertarL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnInsertarL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInsertarL->Location = System::Drawing::Point(257, 457);
			this->btnInsertarL->Name = L"btnInsertarL";
			this->btnInsertarL->Size = System::Drawing::Size(182, 33);
			this->btnInsertarL->TabIndex = 12;
			this->btnInsertarL->Text = L"Insertar";
			this->btnInsertarL->UseVisualStyleBackColor = false;
			this->btnInsertarL->Click += gcnew System::EventHandler(this, &MyForm::btnInsertarL_Click);
			// 
			// btnEliminarL
			// 
			this->btnEliminarL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnEliminarL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminarL->Location = System::Drawing::Point(93, 456);
			this->btnEliminarL->Name = L"btnEliminarL";
			this->btnEliminarL->Size = System::Drawing::Size(161, 34);
			this->btnEliminarL->TabIndex = 11;
			this->btnEliminarL->Text = L"Eliminar";
			this->btnEliminarL->UseVisualStyleBackColor = false;
			this->btnEliminarL->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarL_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonNO);
			this->groupBox1->Controls->Add(this->radioButtonSI);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(329, 156);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 100);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pagado";
			// 
			// radioButtonNO
			// 
			this->radioButtonNO->AutoSize = true;
			this->radioButtonNO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonNO->Location = System::Drawing::Point(37, 67);
			this->radioButtonNO->Name = L"radioButtonNO";
			this->radioButtonNO->Size = System::Drawing::Size(46, 20);
			this->radioButtonNO->TabIndex = 1;
			this->radioButtonNO->TabStop = true;
			this->radioButtonNO->Text = L"No";
			this->radioButtonNO->UseVisualStyleBackColor = true;
			// 
			// radioButtonSI
			// 
			this->radioButtonSI->AutoSize = true;
			this->radioButtonSI->BackColor = System::Drawing::SystemColors::Info;
			this->radioButtonSI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonSI->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->radioButtonSI->Location = System::Drawing::Point(37, 31);
			this->radioButtonSI->Name = L"radioButtonSI";
			this->radioButtonSI->Size = System::Drawing::Size(40, 20);
			this->radioButtonSI->TabIndex = 0;
			this->radioButtonSI->TabStop = true;
			this->radioButtonSI->Text = L"Sí";
			this->radioButtonSI->UseVisualStyleBackColor = false;
			this->radioButtonSI->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textTotal
			// 
			this->textTotal->Location = System::Drawing::Point(340, 102);
			this->textTotal->Name = L"textTotal";
			this->textTotal->Size = System::Drawing::Size(100, 22);
			this->textTotal->TabIndex = 9;
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
			this->btnAtender->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnAtender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtender->Location = System::Drawing::Point(912, 518);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(141, 37);
			this->btnAtender->TabIndex = 3;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = false;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
			// 
			// btnDehacer
			// 
			this->btnDehacer->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnDehacer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDehacer->Location = System::Drawing::Point(1141, 518);
			this->btnDehacer->Name = L"btnDehacer";
			this->btnDehacer->Size = System::Drawing::Size(191, 37);
			this->btnDehacer->TabIndex = 4;
			this->btnDehacer->Text = L"Deshacer Atencion";
			this->btnDehacer->UseVisualStyleBackColor = false;
			this->btnDehacer->Click += gcnew System::EventHandler(this, &MyForm::btnDehacer_Click);
			// 
			// colaAtencionTtl
			// 
			this->colaAtencionTtl->AutoSize = true;
			this->colaAtencionTtl->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colaAtencionTtl->Location = System::Drawing::Point(904, 148);
			this->colaAtencionTtl->Name = L"colaAtencionTtl";
			this->colaAtencionTtl->Size = System::Drawing::Size(428, 43);
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
			this->dataGridView1->Location = System::Drawing::Point(768, 230);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(718, 249);
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
			this->dateTimePicker1->TabIndex = 6;
			this->dateTimePicker1->Value = System::DateTime(2025, 11, 12, 12, 0, 0, 0);
			// 
			// ocultarCola
			// 
			this->ocultarCola->BackColor = System::Drawing::SystemColors::Control;
			this->ocultarCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ocultarCola->Location = System::Drawing::Point(329, 355);
			this->ocultarCola->Name = L"ocultarCola";
			this->ocultarCola->Size = System::Drawing::Size(142, 31);
			this->ocultarCola->TabIndex = 13;
			this->ocultarCola->Text = L"Ocultar la cola";
			this->ocultarCola->UseVisualStyleBackColor = false;
			this->ocultarCola->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// limpiar
			// 
			this->limpiar->BackColor = System::Drawing::SystemColors::Control;
			this->limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limpiar->Location = System::Drawing::Point(337, 282);
			this->limpiar->Name = L"limpiar";
			this->limpiar->Size = System::Drawing::Size(118, 25);
			this->limpiar->TabIndex = 12;
			this->limpiar->Text = L"Limpiar";
			this->limpiar->UseVisualStyleBackColor = false;
			this->limpiar->Click += gcnew System::EventHandler(this, &MyForm::limpiar_Click);
			// 
			// eliminar
			// 
			this->eliminar->BackColor = System::Drawing::SystemColors::Control;
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->Location = System::Drawing::Point(337, 214);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(118, 29);
			this->eliminar->TabIndex = 11;
			this->eliminar->Text = L"Eliminar";
			this->eliminar->UseVisualStyleBackColor = false;
			this->eliminar->Click += gcnew System::EventHandler(this, &MyForm::eliminar_Click);
			// 
			// Agregar
			// 
			this->Agregar->BackColor = System::Drawing::SystemColors::Control;
			this->Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar->Location = System::Drawing::Point(337, 136);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(118, 29);
			this->Agregar->TabIndex = 10;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = false;
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
			this->panel3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
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
			this->fecha->Location = System::Drawing::Point(1108, 41);
			this->fecha->Name = L"fecha";
			this->fecha->Size = System::Drawing::Size(50, 16);
			this->fecha->TabIndex = 2;
			this->fecha->Text = L"Fecha";
			this->fecha->Click += gcnew System::EventHandler(this, &MyForm::fecha_Click);
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(97, 25);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(591, 55);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"ATENCION A CLIENTE";
			this->lblTitulo->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(1164, 39);
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
	if (dataGridView1->Visible) {
		dataGridView1->Visible = false;
		ocultarCola->Text = "Mostrar la cola";
	}
	else {
		dataGridView1->Visible = true;
		ocultarCola->Text = "Ocultar la cola";
	}
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

	clear_atencion();

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
		clear_atencion();
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
private: System::Void btnEliminarL_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lista_atencion->Eliminar(txtCDueño->Text)) {
		MessageBox::Show("Se eliminó con éxito", "Éxito", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No se encontró ese nombre", "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btnPrimeroL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ primero;
	primero = lista_atencion->Primero(); //Devuelve el primero de la lista
	if (primero != nullptr) {
		txtCDueño->Text = primero->getdueno()->getDuenio();
		txtCContacto->Text = primero->getdueno()->getContacto();
		txtCHora->Text = primero->getdueno()->getHora_llegada();
		textTotal->Text = primero->getcosto().ToString();
		txtCCantMascotas->Text = primero->getdueno()->getcantmascotas().ToString();
		if (primero->getpagado()) {
			radioButtonSI->Checked = true;
			radioButtonNO->Checked = false;
		}
		else {
			radioButtonSI->Checked = false;
			radioButtonNO->Checked = true;
		}
	}
}
private: System::Void btnInsertarL_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtCDueño->Text != "") {
		bool atendido;
		bool pagado;
		double pago = Double::Parse(textTotal->Text);
		String^ texto = txtCCantMascotas->Text;
		int numero = Int32::Parse(texto);
		if (radioButtonSI->Checked == true) pagado = true;
		if (radioButtonNO->Checked == true) pagado = false;
		datos^ nuevo = gcnew datos(txtCDueño->Text, txtCContacto->Text, txtCHora->Text, numero);
		datos_atencion^ nueva = gcnew datos_atencion(dateTimePicker1->Value, pago, pagado, nuevo);
		lista_atencion->Agregar(nueva);//_1?????
		clear_ventana();
		atendido = true;
	}

}
private: System::Void btnUltimoL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ ultimo;
	ultimo = lista_atencion->Ultimo(); //Devuelve el primero de la lista
	if (ultimo != nullptr) {
		txtCDueño->Text = ultimo->getdueno()->getDuenio();
		txtCContacto->Text = ultimo->getdueno()->getContacto();
		txtCHora->Text = ultimo->getdueno()->getHora_llegada();
		textTotal->Text = ultimo->getcosto().ToString();
		if (ultimo->getpagado()) {
			radioButtonSI->Checked = true;
			radioButtonNO->Checked = false;
		}
		else {
			radioButtonSI->Checked = false;
			radioButtonNO->Checked = true;
		}
	}
}
private: System::Void btnAnteriorL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ anterior;
	anterior = lista_atencion->Anterior(txtCDueño->Text); //Devuelve el anterior a uno de la lista
	if (anterior != nullptr) {
		txtCDueño->Text = anterior->getdueno()->getDuenio();
		txtContacto->Text = anterior->getdueno()->getContacto();
		txtCHora->Text = anterior->getdueno()->getHora_llegada();
		textTotal->Text = anterior->getcosto().ToString();
		if (anterior->getpagado()) {
			radioButtonSI->Checked = true;
			radioButtonNO->Checked = false;
		}
		else {
			radioButtonSI->Checked = false;
			radioButtonNO->Checked = true;
		}
	}

}
private: System::Void btnSiguientel_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ siguiente;
	siguiente = lista_atencion->Siguiente(txtCDueño->Text); //Devuelve el anterior a uno de la lista
	if (siguiente != nullptr) {
		txtCDueño->Text = siguiente->getdueno()->getDuenio();
		txtCContacto->Text = siguiente->getdueno()->getContacto();
		txtCHora->Text = siguiente->getdueno()->getHora_llegada();
		textTotal->Text = siguiente->getcosto().ToString();
		if (siguiente->getpagado()) {
			radioButtonSI->Checked = true;
			radioButtonNO->Checked = false;
		}
		else {
			radioButtonSI->Checked = false;
			radioButtonNO->Checked = true;
		}
	}
}
private: System::Void limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->txtDueño->Text = "";           // Asigna una cadena vacía al TextBox del Dueño
	this->txtContacto->Text = "";
	this->numericUpDown1->Value = this->numericUpDown1->Minimum;
	this->dateTimePicker1->Value = System::DateTime::Now;
	MessageBox::Show("Todos los campos han sido limpiados.", "Limpiar");
	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();
	// Limpiar la cola de clientes
	cola_clientes = gcnew cola_veterinaria();
}
};
  };

