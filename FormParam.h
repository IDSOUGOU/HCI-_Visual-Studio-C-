#pragma once
#include "../ClassesTP/BanditIHM.h"
#include "../ClassesTP/Combinaison.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TPIHM {

	/// <summary>
	/// Description résumée de FormParam
	///
	/// AVERTISSEMENT : si vous modifiez le nom de cette classe, vous devrez modifier la
	///          propriété 'Nom du fichier de ressources' de l'outil de compilation de ressource managée
	///          pour tous les fichiers .resx dont dépend cette classe. Dans le cas contraire,
	///          les concepteurs ne pourront pas interagir correctement avec les ressources
	///          localisées associées à ce formulaire.
	/// </summary>
	public ref class FormParam : public System::Windows::Forms::Form
	{
	public:
		FormParam(void)
		{
			InitializeComponent();
			//
			 symbOK = false;
			 combOK = false;
			//TODO : ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormParam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fichiersToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  choixSymbolesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  choixCombinaisonsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  initialiserToolStripMenuItem;

	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		BanditIHM* bandit2;
		/// </summary>
		System::ComponentModel::Container ^components;
		char* chaineSymb;
		char* chaineComb;
		bool symbOK;
		bool combOK;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichiersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->choixSymbolesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->choixCombinaisonsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->initialiserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Symboles";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(219, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Combinaisons gagnantes";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(39, 59);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(86, 225);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(170, 59);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(174, 225);
			this->listBox2->TabIndex = 3;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fichiersToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(368, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichiersToolStripMenuItem
			// 
			this->fichiersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->choixSymbolesToolStripMenuItem, 
				this->choixCombinaisonsToolStripMenuItem, this->initialiserToolStripMenuItem});
			this->fichiersToolStripMenuItem->Name = L"fichiersToolStripMenuItem";
			this->fichiersToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->fichiersToolStripMenuItem->Text = L"Fichiers";
			// 
			// choixSymbolesToolStripMenuItem
			// 
			this->choixSymbolesToolStripMenuItem->Name = L"choixSymbolesToolStripMenuItem";
			this->choixSymbolesToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->choixSymbolesToolStripMenuItem->Text = L"Choix symboles";
			this->choixSymbolesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormParam::choixSymbolesToolStripMenuItem_Click);
			// 
			// choixCombinaisonsToolStripMenuItem
			// 
			this->choixCombinaisonsToolStripMenuItem->Name = L"choixCombinaisonsToolStripMenuItem";
			this->choixCombinaisonsToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->choixCombinaisonsToolStripMenuItem->Text = L"Choix combinaisons";
			this->choixCombinaisonsToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormParam::choixCombinaisonsToolStripMenuItem_Click);
			// 
			// initialiserToolStripMenuItem
			// 
			this->initialiserToolStripMenuItem->Name = L"initialiserToolStripMenuItem";
			this->initialiserToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->initialiserToolStripMenuItem->Text = L"Initialiser";
			this->initialiserToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormParam::initialiserToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &FormParam::openFileDialog1_FileOk);
			// 
			// FormParam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 312);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FormParam";
			this->Text = L"FormParam";
			this->Load += gcnew System::EventHandler(this, &FormParam::FormParam_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormParam::FormParam_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormParam_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }

public:  void getBandit(BanditIHM* bandit){
			 bandit2 = bandit;
		 }

private: System::Void choixSymbolesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->Filter = "Fichiers symboles (*.smb)|*.smb";
			 openFileDialog1->ShowDialog();
			 chaineSymb = string2char(openFileDialog1->FileName);
		 }
private: System::Void choixCombinaisonsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->Filter = "Fichiers combinaisons (*.cmb)|*.cmb";
			 openFileDialog1->ShowDialog();
			 chaineComb = string2char(openFileDialog1->FileName);
		 }
private: System::Void initialiserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
         bandit2->charger(chaineSymb,chaineComb);
         const int* symb;
		 const Combinaison* comb;
		 unsigned int nbS;
		 unsigned int nbC;
		 const int* eltComb;
		 unsigned int N, gain;
		 symb = bandit2->obtenirSymboles(nbS);
		 comb = bandit2->obtenirCombinaisonsGagnantes(nbC);
         if (nbS>0)
		 {
		  symbOK = true;
		  listBox1->Items->Clear();
		  for (unsigned int i=0; i<nbS; i++)
		       listBox1->Items->Add(symb[i].ToString());
		 }
		 
		 if (nbC>0)
		 {
		  combOK = true;
		  listBox2->Items->Clear();
		  for (unsigned int i=0; i<nbC; i++)
		  {
			  eltComb = comb[i].lireElts(N);
			  String^ chaine=gcnew String(eltComb[0].ToString()); 
			  for(unsigned int j=1;j<N;j++){
				  chaine+=" ";
				chaine+=eltComb[j].ToString();
			  }
			  chaine+=" -> Gain: ";
			  gain = comb[i].lireRapport();
			  chaine += gain.ToString();
			  listBox2->Items->Add(chaine);

			  //listBox2->Items->Add(eltComb[0].ToString()+" "+eltComb[1].ToString()+" "+eltComb[2].ToString()+" Gain-> "+comb[i].lireRapport().ToString());
		  }
		 }
         delete[] chaineSymb;
		 delete[] chaineComb;
		 }

private : char* string2char(System::String^ chaineVS){
	char* chaine =new char[chaineVS->ToCharArray()->Length+1];
	int i;
	for( i=0;i<chaineVS->ToCharArray()->Length;i++)
		chaine[i]=chaineVS->ToCharArray()[i];
	chaine[i]='\0';
	return chaine;
}

private: System::Void FormParam_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (symbOK != true || combOK != true)
			 { 
				 MessageBox::Show( " Veuillez réessayer","Erreur", MessageBoxButtons::OKCancel,MessageBoxIcon::Information);
				 e->Cancel=true;
			 }
		 }
};
}
