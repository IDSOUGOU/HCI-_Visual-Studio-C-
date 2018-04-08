#pragma once
#include "../ClassesTP/BanditIHM.h"
#include "../ClassesTP/Combinaison.h"
#include "FormParam.h"

namespace TPIHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Form1
	///
	/// AVERTISSEMENT : si vous modifiez le nom de cette classe, vous devrez modifier la
	///          propriété 'Nom du fichier de ressources' de l'outil de compilation de ressource managée
	///          pour tous les fichiers .resx dont dépend cette classe. Dans le cas contraire,
	///          les concepteurs ne pourront pas interagir correctement avec les ressources
	///          localisées associées à ce formulaire.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO : ajoutez ici le code du constructeur
			cagnotte = 0;
			mise = 0;
			bandit1 = new BanditIHM("!","!");
			this->monFormParam = (gcnew FormParam());
            monFormParam->getBandit(bandit1);
			this->monFormParam->ShowDialog();
			
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete bandit1;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
	private: BanditIHM* bandit1;
			int cagnotte;
			unsigned int mise;
			int* ptrRetour;
			
	private: FormParam^ monFormParam;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	public: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  gToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ToolStripMenuItem^  modifierParametresToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierParametresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Go !!!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::ClickButton1);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(27, 70);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(132, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Votre mise (en Euros)";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->gToolStripMenuItem, 
				this->modifierParametresToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(608, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// gToolStripMenuItem
			// 
			this->gToolStripMenuItem->Name = L"gToolStripMenuItem";
			this->gToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->gToolStripMenuItem->Text = L"RAZ gains";
			this->gToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::gToolStripMenuItem_Click);
			// 
			// modifierParametresToolStripMenuItem
			// 
			this->modifierParametresToolStripMenuItem->Name = L"modifierParametresToolStripMenuItem";
			this->modifierParametresToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->modifierParametresToolStripMenuItem->Text = L"Modifier parametres";
			this->modifierParametresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::modifierParametresToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(338, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Vos gains( ou pertes) cumulés ( en Euros )";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(338, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(314, 128);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 170);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(455, 128);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 170);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(180, 128);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Maroon;
			this->imageList1->Images->SetKeyName(0, L"Schtroumpfs1.gif");
			this->imageList1->Images->SetKeyName(1, L"Schtroumpfs2.gif");
			this->imageList1->Images->SetKeyName(2, L"Schtroumpfs3.gif");
			this->imageList1->Images->SetKeyName(3, L"Schtroumpfs4.gif");
			this->imageList1->Images->SetKeyName(4, L"Schtroumpfs5.gif");
			this->imageList1->Images->SetKeyName(5, L"Schtroumpfs6.gif");
			this->imageList1->Images->SetKeyName(6, L"Schtroumpfs7.gif");
			this->imageList1->Images->SetKeyName(7, L"Schtroumpfs8.gif");
			this->imageList1->Images->SetKeyName(8, L"Schtroumpfs9.gif");
			this->imageList1->Images->SetKeyName(9, L"Schtroumpfs10.gif");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 341);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"This is Las Vegas !!!";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClickButton1(System::Object^  sender, System::EventArgs^  e) {
				Combinaison resultat;
				int retour = bandit1->jouer(mise, resultat);
				unsigned int N;
				const int* elements = resultat.lireElts(N);
				ptrRetour = &retour;
				pictureBox1->Image = imageList1->Images[elements[0]];
				pictureBox2->Image = imageList1->Images[elements[1]];
				pictureBox3->Image = imageList1->Images[elements[2]];
				if (retour != 0) {cagnotte += retour;
				boiteDialogue();} 
				else cagnotte -= mise;
				label3->Text = cagnotte.ToString();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 mise = Decimal::ToInt32((numericUpDown1->Value));
		 }
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }

//Boîte de Dialogue qui fournit l'information de gain d'un seul jeu
public:
   void boiteDialogue()
   {
      MessageBox::Show(ptrRetour->ToString() + " Euros",
         "Vous avez gagné ...", MessageBoxButtons::OKCancel,
         MessageBoxIcon::Information);
   }
private: System::Void gToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 cagnotte = 0;
			 label3->Text = cagnotte.ToString();
		 }
private: System::Void modifierParametresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->monFormParam->ShowDialog();
		 }
};
}


