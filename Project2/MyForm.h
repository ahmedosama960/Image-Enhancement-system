#pragma once
#include<opencv2/opencv.hpp>
#include"iostream"
/* أحمد أسامه عبد المجيد محمود*/
/* سكشن 1*/
/*14915 رقم النظام*/
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	/*------------------------------ Get the source image ----------------------------*/
							string dest = "x2.jpg";

							Mat src = imread(dest,0);
   /*--------------------------------------------------------------------------------*/
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
	private: System::Windows::Forms::Button^ SHOW;
	private: System::Windows::Forms::Button^ equalize;
	private: System::Windows::Forms::Button^ negative;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ logtransform;
	private: System::Windows::Forms::Button^ gammatransform;
	private: System::Windows::Forms::Button^ slice;
	private: System::Windows::Forms::Button^ translate;
	private: System::Windows::Forms::Button^ rotate;
	private: System::Windows::Forms::TextBox^ xvalue;
	private: System::Windows::Forms::TextBox^ yvalue;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ gammavalue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ zoom;
	private: System::Windows::Forms::TextBox^ slicelevel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ flip;


	private: System::Windows::Forms::Button^ blinding;
	private: System::Windows::Forms::Button^ thresholding;
	private: System::Windows::Forms::TextBox^ thresholdingvalue;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ grayfrom;
	private: System::Windows::Forms::TextBox^ grayto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ avergfilter;
	private: System::Windows::Forms::Label^ LINEAR;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ circularbutton;
	private: System::Windows::Forms::Button^ conebutton;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ medianbutton;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ sobelxbutton;
	private: System::Windows::Forms::Button^ sobelybutton;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ seg1button;
	private: System::Windows::Forms::Button^ flipybutton;
	private: System::Windows::Forms::Button^ flipxybutton;
	private: System::Windows::Forms::Button^ edgebasebutton;
	private: System::Windows::Forms::Button^ savebutton;
	private: System::Windows::Forms::Button^ skewingbutton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ x1value;
	private: System::Windows::Forms::TextBox^ x2value;
	private: System::Windows::Forms::TextBox^ y2value;



	private: System::Windows::Forms::TextBox^ y1value;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;





	protected:






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->SHOW = (gcnew System::Windows::Forms::Button());
			this->equalize = (gcnew System::Windows::Forms::Button());
			this->negative = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->logtransform = (gcnew System::Windows::Forms::Button());
			this->gammatransform = (gcnew System::Windows::Forms::Button());
			this->slice = (gcnew System::Windows::Forms::Button());
			this->translate = (gcnew System::Windows::Forms::Button());
			this->rotate = (gcnew System::Windows::Forms::Button());
			this->xvalue = (gcnew System::Windows::Forms::TextBox());
			this->yvalue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gammavalue = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zoom = (gcnew System::Windows::Forms::Button());
			this->slicelevel = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flip = (gcnew System::Windows::Forms::Button());
			this->blinding = (gcnew System::Windows::Forms::Button());
			this->thresholding = (gcnew System::Windows::Forms::Button());
			this->thresholdingvalue = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->grayfrom = (gcnew System::Windows::Forms::TextBox());
			this->grayto = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->avergfilter = (gcnew System::Windows::Forms::Button());
			this->LINEAR = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->circularbutton = (gcnew System::Windows::Forms::Button());
			this->conebutton = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->medianbutton = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->sobelxbutton = (gcnew System::Windows::Forms::Button());
			this->sobelybutton = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->seg1button = (gcnew System::Windows::Forms::Button());
			this->flipybutton = (gcnew System::Windows::Forms::Button());
			this->flipxybutton = (gcnew System::Windows::Forms::Button());
			this->edgebasebutton = (gcnew System::Windows::Forms::Button());
			this->savebutton = (gcnew System::Windows::Forms::Button());
			this->skewingbutton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->x1value = (gcnew System::Windows::Forms::TextBox());
			this->x2value = (gcnew System::Windows::Forms::TextBox());
			this->y2value = (gcnew System::Windows::Forms::TextBox());
			this->y1value = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SHOW
			// 
			this->SHOW->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->SHOW->Location = System::Drawing::Point(3, 18);
			this->SHOW->Name = L"SHOW";
			this->SHOW->Size = System::Drawing::Size(80, 41);
			this->SHOW->TabIndex = 0;
			this->SHOW->Text = L"SHOW";
			this->SHOW->UseVisualStyleBackColor = true;
			this->SHOW->Click += gcnew System::EventHandler(this, &MyForm::SHOW_Click);
			// 
			// equalize
			// 
			this->equalize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->equalize->Location = System::Drawing::Point(107, 64);
			this->equalize->Name = L"equalize";
			this->equalize->Size = System::Drawing::Size(75, 39);
			this->equalize->TabIndex = 1;
			this->equalize->Text = L"equalize";
			this->equalize->UseVisualStyleBackColor = true;
			this->equalize->Click += gcnew System::EventHandler(this, &MyForm::equalize_Click);
			// 
			// negative
			// 
			this->negative->Location = System::Drawing::Point(203, 440);
			this->negative->Name = L"negative";
			this->negative->Size = System::Drawing::Size(75, 39);
			this->negative->TabIndex = 2;
			this->negative->Text = L"negative";
			this->negative->UseVisualStyleBackColor = true;
			this->negative->Click += gcnew System::EventHandler(this, &MyForm::negative_Click);
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(3, 63);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(80, 39);
			this->reset->TabIndex = 3;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// logtransform
			// 
			this->logtransform->Location = System::Drawing::Point(203, 259);
			this->logtransform->Name = L"logtransform";
			this->logtransform->Size = System::Drawing::Size(75, 39);
			this->logtransform->TabIndex = 4;
			this->logtransform->Text = L"LOG";
			this->logtransform->UseVisualStyleBackColor = true;
			this->logtransform->Click += gcnew System::EventHandler(this, &MyForm::logtransform_Click);
			// 
			// gammatransform
			// 
			this->gammatransform->Location = System::Drawing::Point(203, 356);
			this->gammatransform->Name = L"gammatransform";
			this->gammatransform->Size = System::Drawing::Size(75, 37);
			this->gammatransform->TabIndex = 5;
			this->gammatransform->Text = L"Gamma";
			this->gammatransform->UseVisualStyleBackColor = true;
			this->gammatransform->Click += gcnew System::EventHandler(this, &MyForm::gammatransform_Click);
			// 
			// slice
			// 
			this->slice->Location = System::Drawing::Point(203, 399);
			this->slice->Name = L"slice";
			this->slice->Size = System::Drawing::Size(75, 36);
			this->slice->TabIndex = 6;
			this->slice->Text = L"slicing";
			this->slice->UseVisualStyleBackColor = true;
			this->slice->Click += gcnew System::EventHandler(this, &MyForm::slice_Click);
			// 
			// translate
			// 
			this->translate->Location = System::Drawing::Point(203, 301);
			this->translate->Name = L"translate";
			this->translate->Size = System::Drawing::Size(75, 46);
			this->translate->TabIndex = 7;
			this->translate->Text = L"translate";
			this->translate->UseVisualStyleBackColor = true;
			this->translate->Click += gcnew System::EventHandler(this, &MyForm::translate_Click);
			// 
			// rotate
			// 
			this->rotate->Location = System::Drawing::Point(211, 109);
			this->rotate->Name = L"rotate";
			this->rotate->Size = System::Drawing::Size(75, 39);
			this->rotate->TabIndex = 8;
			this->rotate->Text = L"Rotate";
			this->rotate->UseVisualStyleBackColor = true;
			this->rotate->Click += gcnew System::EventHandler(this, &MyForm::rotate_Click);
			// 
			// xvalue
			// 
			this->xvalue->Location = System::Drawing::Point(162, 301);
			this->xvalue->Name = L"xvalue";
			this->xvalue->Size = System::Drawing::Size(35, 20);
			this->xvalue->TabIndex = 9;
			this->xvalue->TextChanged += gcnew System::EventHandler(this, &MyForm::xvalue_TextChanged);
			// 
			// yvalue
			// 
			this->yvalue->Location = System::Drawing::Point(162, 327);
			this->yvalue->Name = L"yvalue";
			this->yvalue->Size = System::Drawing::Size(36, 20);
			this->yvalue->TabIndex = 10;
			this->yvalue->TextChanged += gcnew System::EventHandler(this, &MyForm::yvalue_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(113, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"X-value";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 330);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Y-value";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// gammavalue
			// 
			this->gammavalue->Location = System::Drawing::Point(162, 365);
			this->gammavalue->Name = L"gammavalue";
			this->gammavalue->Size = System::Drawing::Size(36, 20);
			this->gammavalue->TabIndex = 13;
			this->gammavalue->TextChanged += gcnew System::EventHandler(this, &MyForm::gammavalue_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(88, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Gamma-value";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// zoom
			// 
			this->zoom->Location = System::Drawing::Point(211, 65);
			this->zoom->Name = L"zoom";
			this->zoom->Size = System::Drawing::Size(75, 38);
			this->zoom->TabIndex = 15;
			this->zoom->Text = L"Zoom";
			this->zoom->UseVisualStyleBackColor = true;
			this->zoom->Click += gcnew System::EventHandler(this, &MyForm::zoom_Click);
			// 
			// slicelevel
			// 
			this->slicelevel->Location = System::Drawing::Point(162, 399);
			this->slicelevel->Name = L"slicelevel";
			this->slicelevel->Size = System::Drawing::Size(35, 20);
			this->slicelevel->TabIndex = 16;
			this->slicelevel->TextChanged += gcnew System::EventHandler(this, &MyForm::slicelevel_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 402);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Slice Level";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// flip
			// 
			this->flip->Location = System::Drawing::Point(210, 155);
			this->flip->Name = L"flip";
			this->flip->Size = System::Drawing::Size(75, 34);
			this->flip->TabIndex = 18;
			this->flip->Text = L"FLIP-X";
			this->flip->UseVisualStyleBackColor = true;
			this->flip->Click += gcnew System::EventHandler(this, &MyForm::flip_Click);
			// 
			// blinding
			// 
			this->blinding->Location = System::Drawing::Point(350, 252);
			this->blinding->Name = L"blinding";
			this->blinding->Size = System::Drawing::Size(75, 46);
			this->blinding->TabIndex = 21;
			this->blinding->Text = L"blinding";
			this->blinding->UseVisualStyleBackColor = true;
			this->blinding->Click += gcnew System::EventHandler(this, &MyForm::blinding_Click);
			// 
			// thresholding
			// 
			this->thresholding->Location = System::Drawing::Point(350, 306);
			this->thresholding->Name = L"thresholding";
			this->thresholding->Size = System::Drawing::Size(94, 37);
			this->thresholding->TabIndex = 22;
			this->thresholding->Text = L"THRESHOLDING";
			this->thresholding->UseVisualStyleBackColor = true;
			this->thresholding->Click += gcnew System::EventHandler(this, &MyForm::thresholding_Click);
			// 
			// thresholdingvalue
			// 
			this->thresholdingvalue->Location = System::Drawing::Point(297, 318);
			this->thresholdingvalue->Name = L"thresholdingvalue";
			this->thresholdingvalue->Size = System::Drawing::Size(47, 20);
			this->thresholdingvalue->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(294, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"numberToCompare";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(350, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 25;
			this->button1->Text = L"gray Level";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// grayfrom
			// 
			this->grayfrom->Location = System::Drawing::Point(375, 417);
			this->grayfrom->Name = L"grayfrom";
			this->grayfrom->Size = System::Drawing::Size(40, 20);
			this->grayfrom->TabIndex = 26;
			// 
			// grayto
			// 
			this->grayto->Location = System::Drawing::Point(375, 441);
			this->grayto->Name = L"grayto";
			this->grayto->Size = System::Drawing::Size(40, 20);
			this->grayto->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(377, 401);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Range";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(338, 420);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"From";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(343, 448);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"To";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label10->Location = System::Drawing::Point(104, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(341, 28);
			this->label10->TabIndex = 31;
			this->label10->Text = L"IMGAE OPERATION";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label11->Location = System::Drawing::Point(104, 216);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(338, 28);
			this->label11->TabIndex = 32;
			this->label11->Text = L"IMGAE ENHANCMENT";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label12->Location = System::Drawing::Point(492, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(394, 28);
			this->label12->TabIndex = 33;
			this->label12->Text = L"FILTERS";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(492, 61);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(255, 23);
			this->label13->TabIndex = 34;
			this->label13->Text = L"SMOTHING";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// avergfilter
			// 
			this->avergfilter->Location = System::Drawing::Point(492, 107);
			this->avergfilter->Name = L"avergfilter";
			this->avergfilter->Size = System::Drawing::Size(75, 37);
			this->avergfilter->TabIndex = 35;
			this->avergfilter->Text = L"averaging";
			this->avergfilter->UseVisualStyleBackColor = true;
			this->avergfilter->Click += gcnew System::EventHandler(this, &MyForm::avergfilter_Click);
			// 
			// LINEAR
			// 
			this->LINEAR->Location = System::Drawing::Point(492, 90);
			this->LINEAR->Name = L"LINEAR";
			this->LINEAR->Size = System::Drawing::Size(156, 13);
			this->LINEAR->TabIndex = 36;
			this->LINEAR->Text = L"LINEAR";
			this->LINEAR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(492, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 37;
			this->button2->Text = L"PYRAMIDAL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// circularbutton
			// 
			this->circularbutton->Location = System::Drawing::Point(573, 150);
			this->circularbutton->Name = L"circularbutton";
			this->circularbutton->Size = System::Drawing::Size(75, 34);
			this->circularbutton->TabIndex = 38;
			this->circularbutton->Text = L"CIRCULAR";
			this->circularbutton->UseVisualStyleBackColor = true;
			this->circularbutton->Click += gcnew System::EventHandler(this, &MyForm::circularbutton_Click);
			// 
			// conebutton
			// 
			this->conebutton->Location = System::Drawing::Point(573, 109);
			this->conebutton->Name = L"conebutton";
			this->conebutton->Size = System::Drawing::Size(75, 35);
			this->conebutton->TabIndex = 39;
			this->conebutton->Text = L"CONE";
			this->conebutton->UseVisualStyleBackColor = true;
			this->conebutton->Click += gcnew System::EventHandler(this, &MyForm::conebutton_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(669, 90);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 13);
			this->label14->TabIndex = 40;
			this->label14->Text = L"order statistics";
			// 
			// medianbutton
			// 
			this->medianbutton->Location = System::Drawing::Point(672, 108);
			this->medianbutton->Name = L"medianbutton";
			this->medianbutton->Size = System::Drawing::Size(75, 37);
			this->medianbutton->TabIndex = 41;
			this->medianbutton->Text = L"MEDIAN";
			this->medianbutton->UseVisualStyleBackColor = true;
			this->medianbutton->Click += gcnew System::EventHandler(this, &MyForm::medianbutton_Click);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 8));
			this->label15->Location = System::Drawing::Point(765, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 23);
			this->label15->TabIndex = 42;
			this->label15->Text = L"SHARPENING";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sobelxbutton
			// 
			this->sobelxbutton->Location = System::Drawing::Point(788, 105);
			this->sobelxbutton->Name = L"sobelxbutton";
			this->sobelxbutton->Size = System::Drawing::Size(75, 37);
			this->sobelxbutton->TabIndex = 43;
			this->sobelxbutton->Text = L"SOBEL-X";
			this->sobelxbutton->UseVisualStyleBackColor = true;
			this->sobelxbutton->Click += gcnew System::EventHandler(this, &MyForm::sobelxbutton_Click);
			// 
			// sobelybutton
			// 
			this->sobelybutton->Location = System::Drawing::Point(788, 153);
			this->sobelybutton->Name = L"sobelybutton";
			this->sobelybutton->Size = System::Drawing::Size(75, 32);
			this->sobelybutton->TabIndex = 44;
			this->sobelybutton->Text = L"SOBEL-Y";
			this->sobelybutton->UseVisualStyleBackColor = true;
			this->sobelybutton->Click += gcnew System::EventHandler(this, &MyForm::sobelybutton_Click);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label16->Location = System::Drawing::Point(581, 216);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(196, 28);
			this->label16->TabIndex = 45;
			this->label16->Text = L"SEGMENTION";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// seg1button
			// 
			this->seg1button->Location = System::Drawing::Point(622, 270);
			this->seg1button->Name = L"seg1button";
			this->seg1button->Size = System::Drawing::Size(107, 35);
			this->seg1button->TabIndex = 46;
			this->seg1button->Text = L"THRESHOLD SEG.";
			this->seg1button->UseVisualStyleBackColor = true;
			this->seg1button->Click += gcnew System::EventHandler(this, &MyForm::seg1button_Click);
			// 
			// flipybutton
			// 
			this->flipybutton->Location = System::Drawing::Point(107, 155);
			this->flipybutton->Name = L"flipybutton";
			this->flipybutton->Size = System::Drawing::Size(75, 34);
			this->flipybutton->TabIndex = 47;
			this->flipybutton->Text = L"FLIP-Y";
			this->flipybutton->UseVisualStyleBackColor = true;
			this->flipybutton->Click += gcnew System::EventHandler(this, &MyForm::flipybutton_Click);
			// 
			// flipxybutton
			// 
			this->flipxybutton->Location = System::Drawing::Point(107, 111);
			this->flipxybutton->Name = L"flipxybutton";
			this->flipxybutton->Size = System::Drawing::Size(75, 38);
			this->flipxybutton->TabIndex = 48;
			this->flipxybutton->Text = L"FLIP-XY";
			this->flipxybutton->UseVisualStyleBackColor = true;
			this->flipxybutton->Click += gcnew System::EventHandler(this, &MyForm::flipxybutton_Click);
			// 
			// edgebasebutton
			// 
			this->edgebasebutton->Location = System::Drawing::Point(622, 318);
			this->edgebasebutton->Name = L"edgebasebutton";
			this->edgebasebutton->Size = System::Drawing::Size(107, 40);
			this->edgebasebutton->TabIndex = 49;
			this->edgebasebutton->Text = L"EDGE BASED";
			this->edgebasebutton->UseVisualStyleBackColor = true;
			this->edgebasebutton->Click += gcnew System::EventHandler(this, &MyForm::edgebasebutton_Click);
			// 
			// savebutton
			// 
			this->savebutton->Location = System::Drawing::Point(3, 108);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(80, 41);
			this->savebutton->TabIndex = 50;
			this->savebutton->Text = L"SAVE";
			this->savebutton->UseVisualStyleBackColor = true;
			this->savebutton->Click += gcnew System::EventHandler(this, &MyForm::savebutton_Click);
			// 
			// skewingbutton
			// 
			this->skewingbutton->Location = System::Drawing::Point(334, 61);
			this->skewingbutton->Name = L"skewingbutton";
			this->skewingbutton->Size = System::Drawing::Size(86, 37);
			this->skewingbutton->TabIndex = 51;
			this->skewingbutton->Text = L"skewing";
			this->skewingbutton->UseVisualStyleBackColor = true;
			this->skewingbutton->Click += gcnew System::EventHandler(this, &MyForm::skewingbutton_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->richTextBox1->Location = System::Drawing::Point(3, 548);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(322, 124);
			this->richTextBox1->TabIndex = 52;
			this->richTextBox1->Text = L"Notes:\nIncrease brightness: LOG\nDecrease brightness: Gamma with value>1\nB/W1: sli"
				L"cing with value:7\nB/W2: thresholding with 127\nTranslate: takes the movment on x&"
				L"y\nRotate:default to 90 degrees";
			// 
			// x1value
			// 
			this->x1value->Location = System::Drawing::Point(334, 102);
			this->x1value->Name = L"x1value";
			this->x1value->Size = System::Drawing::Size(35, 20);
			this->x1value->TabIndex = 53;
			// 
			// x2value
			// 
			this->x2value->Location = System::Drawing::Point(334, 128);
			this->x2value->Name = L"x2value";
			this->x2value->Size = System::Drawing::Size(35, 20);
			this->x2value->TabIndex = 54;
			// 
			// y2value
			// 
			this->y2value->Location = System::Drawing::Point(383, 128);
			this->y2value->Name = L"y2value";
			this->y2value->Size = System::Drawing::Size(37, 20);
			this->y2value->TabIndex = 55;
			// 
			// y1value
			// 
			this->y1value->Location = System::Drawing::Point(383, 102);
			this->y1value->Name = L"y1value";
			this->y1value->Size = System::Drawing::Size(37, 20);
			this->y1value->TabIndex = 56;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(312, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 57;
			this->label5->Text = L"x1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(426, 132);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 13);
			this->label17->TabIndex = 58;
			this->label17->Text = L"y2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(426, 105);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 13);
			this->label18->TabIndex = 59;
			this->label18->Text = L"y1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(312, 132);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 13);
			this->label19->TabIndex = 60;
			this->label19->Text = L"x2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(898, 673);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->y1value);
			this->Controls->Add(this->y2value);
			this->Controls->Add(this->x2value);
			this->Controls->Add(this->x1value);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->skewingbutton);
			this->Controls->Add(this->savebutton);
			this->Controls->Add(this->edgebasebutton);
			this->Controls->Add(this->flipxybutton);
			this->Controls->Add(this->flipybutton);
			this->Controls->Add(this->seg1button);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->sobelybutton);
			this->Controls->Add(this->sobelxbutton);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->medianbutton);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->conebutton);
			this->Controls->Add(this->circularbutton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->LINEAR);
			this->Controls->Add(this->avergfilter);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->grayto);
			this->Controls->Add(this->grayfrom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->thresholdingvalue);
			this->Controls->Add(this->thresholding);
			this->Controls->Add(this->blinding);
			this->Controls->Add(this->flip);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->slicelevel);
			this->Controls->Add(this->zoom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->gammavalue);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->yvalue);
			this->Controls->Add(this->xvalue);
			this->Controls->Add(this->rotate);
			this->Controls->Add(this->translate);
			this->Controls->Add(this->slice);
			this->Controls->Add(this->gammatransform);
			this->Controls->Add(this->logtransform);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->negative);
			this->Controls->Add(this->equalize);
			this->Controls->Add(this->SHOW);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"DIP TOOLBOX";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	/*------------ To load the source image on the window -----------------*/
	private: System::Void SHOW_Click(System::Object^ sender, System::EventArgs^ e)
	{
		namedWindow("show",0);
		imshow("show",src);
		
	}
		   /*------------------- Equalize histogram --------------------*/
		   
private: System::Void equalize_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	/*the function takes 2 parameter The source and the destintion*/
		equalizeHist(src, src);
		namedWindow("show", 0);
		imshow("show", src);
	}
	   /*-------------- Negative point processing----------------- */
private: System::Void negative_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*the function get every pixel and subtract it from 255 to get the negative image*/
		for (int r = 0; r < src.rows;r++)
		{
			for (int c = 0; c < src.cols;c++)
			{
				src.at<uchar>(r, c) = 255 - src.at<uchar>(r, c);

			}
		}
		namedWindow("show", 0);
		imshow("show", src);
	}
	   /*----------------- Reset Button -----------------*/
private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e)	
	{
			/*on the reset function we reload the source image*/
		src = imread(dest, 0);
		namedWindow("show", 0);
		imshow("show", src);
	}
	   /*-------------- log transfrom Point processing --------------*/
private: System::Void logtransform_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*log transform is the process to increase the brightness*/
		src.convertTo(src, CV_32F);
		src = src + 1;
		log(src, src);
		normalize(src, src, 0, 255, NORM_MINMAX);
		convertScaleAbs(src, src);
		namedWindow("show", 0);
		imshow("show", src);
	}
	   /*------------- Gamma transform------------------- */
private: System::Void gammatransform_Click(System::Object^ sender, System::EventArgs^ e)
	{
	/*we use the gamma function to both increase&decrease the brightness */
	/*gamma >1 to increase & gamma <1 to decrease*/
	float gamma = (float)(Convert::ToDouble(gammavalue->Text));
	src.convertTo(src, CV_32F);
	src = src;

	for (int r = 0; r < src.rows;r++) {

		for (int c = 0; c < src.cols;c++)

		{
				src.at<float>(r, c) = powf(src.at<float>(r, c), gamma);
		}
	}
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	namedWindow("show", 0);
	imshow("show", src);
	}
	   /*--------------Slicing point processing levels---------------- */
private: System::Void slice_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	/*slicing is the function we use to get the bit levels of any image */
	/*we can get until the level 7 */
	/*user enter the level he wants and it will appear to him */
	int x,y;
	x=Convert::ToInt32(slicelevel->Text);
	switch (x) 
	{
	case(1):
	{
		y = 1;
		break;
	}
	case(2):
	{
		y = 4;
		break;
	}
	case(3):
	{
		y = 8;
		break;
	}
	case(4):
	{
		y = 16;
		break;
	}
	case(5):
	{
		y = 32;
		break;
	}
	case(6):
	{
		y = 64;
		break;
	}
	case(7):
	{
		y = 128;
		break;
	}
	default:
	{
		/*level 6*/
		y = 64;

	}
	
	}

	for (int r = 0;r < src.rows;r++)
	{
		for (int c = 0;c < src.cols;c++)
		{
			if (src.at<uchar>(r, c) & uchar(y))
			{
				src.at<uchar>(r, c) = 255;
			}
			else
			{
				src.at<uchar>(r, c) = 0;
			}
		}

	}
	namedWindow("show", 0);
	imshow("show", src);
	}
	   /*------------------- Translate transformation -----------------*/
private: System::Void translate_Click(System::Object^ sender, System::EventArgs^ e)
		{	
			/*translate to move the  image along the x and y axis*/

			int x, y;
			x = Convert::ToInt32(xvalue->Text);
			y = Convert::ToInt32(yvalue->Text);
			Mat Tr = (Mat_<float>(2, 3) << 1, 0, x, 0, 1, y);
			warpAffine(src, src, Tr, src.size());
			namedWindow("show", 0);
			imshow("show", src);
		}
	   /*--------------- Rotate function------------- */
private: System::Void rotate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*in the rotate we make the default value to rotate 90degree*/
		/*but before we rotate we need to change the size of the image and makes rows=cols*/
			cv::Size size(src.rows , src.rows );
			resize(src, src, size);//resize image
			Mat R = getRotationMatrix2D(Point2f(src.rows / 2, src.cols / 2), 90, 1);
			warpAffine(src, src, R, src.size());
			namedWindow("show", 0);
			imshow("show", src);
	}
	   /*------------------- Zoom -----------*/
private: System::Void zoom_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
			/*	its name refers to it */
			/* but we have two ways of zooming and we choose the better one */
			/*you change it by change resize(imcrop,zoom, src.size(),2,2,1); */
		Mat zoom,imcrop;
		imcrop = src(Rect(50, 50, src.rows / 2, src.cols / 2));
		resize(imcrop,zoom, src.size(),2,2,0);
		src = zoom;
		namedWindow("show", 0);
		imshow("show", src);
	}

	   /*--------------------FLIP x---------------------------*/
private: System::Void flip_Click(System::Object^ sender, System::EventArgs^ e)
{ /*0=flipx // -1=flip x&y // 1=flipy */
	//	int flipval = Convert::ToInt32(flipvalue->Text);
		cv::flip(src, src,0);
		namedWindow("show", 0);
		imshow("show", src);
			
}
	   /*--------------------FLIP y---------------------------*/
private: System::Void flipybutton_Click(System::Object^ sender, System::EventArgs^ e)
	{
	cv::flip(src, src, 1);
	namedWindow("show", 0);
	imshow("show", src);
	}
	   /*--------------------FLIP x-y---------------------------*/
private: System::Void flipxybutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	cv::flip(src, src, -1);
	namedWindow("show", 0);
	imshow("show", src);
	}
	   /*-----------------------blinding--------------------*/
private: System::Void blinding_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*TO MAKE A BACKGROUND TO IMAGE OR TO HIDE DATA*/
	Mat image2 = imread("slider.jpg", 0);
	Mat image_blind(src.rows, src.cols, CV_8UC1);
	resize(image2, image2, cv::Size(src.cols, src.rows), 0, 0, 0);
	for (int r = 0; r < src.rows; r++)
	{
		for (int c = 0; c < src.cols; c++)
		{
			image_blind.at<uchar>(r, c) = src.at<uchar>(r, c) * 0.7 +
				image2.at<uchar>(r, c) * 0.3;

		}
	}
	src = image_blind;
	namedWindow("show", 0);
	imshow("show", src);
	}
	   /*---------------------------thresholding----------------------*/
private: System::Void thresholding_Click(System::Object^ sender, System::EventArgs^ e) 
	{
			/*we use it to filter the object we want */
	int x = Convert::ToInt32(thresholdingvalue->Text);
	threshold(src, src, x, 255, THRESH_BINARY); /*130 is the number to compare and 255 is the number to change*/
	namedWindow("show", 0);
	imshow("show", src);
		
		
	}
	   /*--------------Gray Level -------------------*/
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
	/*to get more than one object with his original color*/

	Mat dst10 = src;
	int x= Convert::ToInt32(grayfrom->Text);
	int y = Convert::ToInt32(grayto->Text);
	/*namedWindow("Before Gray level slicing", 0);
	imshow("Before Gray level slicing", src10);*/

	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
		{
			if (src.at<uchar>(i, j) > x && src.at<uchar>(i, j) < y)
				dst10.at<uchar>(i, j) = 255;
			else
				dst10.at<uchar>(i, j) = src.at<uchar>(i, j);
		}
		src = dst10;
		namedWindow("show", 0);
		imshow("show", src);
	}
	   /* Wrong data from here to the next comment*/
private: System::Void xvalue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void yvalue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gammavalue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void slicelevel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flipvalue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void background_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



	   /*Wrong data until here ignore it*/


			/*------------- Neirghbourhood operations*-----------------/
					/* ----- start with avergian -------------*/
private: System::Void avergfilter_Click(System::Object^ sender, System::EventArgs^ e)
{
	/* kernel  3*3  averaging filter that we need  */
	Mat kernel_T = (Mat_<float>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
	kernel_T = kernel_T / 9;
	/* if we need it*/
	//Mat kernel=(Mat_<float>(5, 5) << 1,1,1,1,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	//kernel = kernel / 25;
	filter2D(src, src, CV_8UC1, kernel_T);
	namedWindow("show", 0);
	imshow("show", src);

}

	   /*pyramidial kernel 5*5 */
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Mat kernel_p = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);
	kernel_p = kernel_p / 81;
	filter2D(src, src, CV_8UC1, kernel_p);
	namedWindow("show", 0);
	imshow("show", src);
}


	   /*----------------circular filter------------------ */
private: System::Void circularbutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Mat kernel_c = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	kernel_c = kernel_c / 21;
	filter2D(src, src, CV_8UC1, kernel_c);
	namedWindow("show", 0);
	imshow("show", src);
}
	   /*-----------------cone filter -------------------*/
private: System::Void conebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
	kernel_co = kernel_co / 25;
	filter2D(src, src, CV_8UC1, kernel_co);
	namedWindow("show", 0);
	imshow("show", src);
}
	/*-----------------median filter -----------*/
private: System::Void medianbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	medianBlur(src, src, 3); /*9 represnt krenel size so it will be 3*3 for example */
	namedWindow("show", 0);
	imshow("show", src);
}

private: System::Void sobelxbutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	destroyWindow("show");
	Sobel(src, src, CV_8UC1, 1, 0, 3); /* 3 represent kernel size*/
	/**/
	/*Sobel(srcS, dst12_6y, CV_8UC1, 0, 1, 3);*/
	namedWindow("show", 0);
	imshow("show", src);
}
	   /*sobel -y function */
private: System::Void sobelybutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	destroyWindow("show");
	Sobel(src, src, CV_8UC1, 0, 1, 3);
	namedWindow("show", 0);
	imshow("show", src);
}
		/* threshold segmentation  */
	   /*we use the trackbar to change the values of determining objects */
private: System::Void seg1button_Click(System::Object^ sender, System::EventArgs^ e)
{
	destroyWindow("show");
	int th = 80;
	Mat dst9;
	Mat src9 = imread("im1.png", 0);
	namedWindow("Image", 0);
	imshow("Image", src9);
	for (int x = 0;x < 4;x++)
	{
		threshold(src9, dst9, th, 255, THRESH_BINARY);
		namedWindow("After thresholding", 0);
		createTrackbar("threshold", "After thresholding", &th, 255);
		imshow("After thresholding", dst9);
		waitKey(0);
	}
}

	   /*------Lapalce of gaussian --------- */
		/*------Edge based --------- */
private: System::Void edgebasebutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	destroyWindow("show");
	Mat dst9, dst10;
	Mat src9 = imread("im1.png", 0);
	namedWindow("Image", 0);
	imshow("Image", src9);
	//cout << src9;
	/*------gaussian here --------*/
	GaussianBlur(src9, dst9, cv::Size(3, 3), 0);
	/*-----------------Lapalcian ------------*/
	Laplacian(dst9, dst10, CV_8UC1);
	namedWindow("lablace", 0);
	imshow("lablace", dst10);
}
	   /* save button */
private: System::Void savebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	imwrite("enhancement_image.jpg",src);
	MessageBox::Show("Saved As : enhancement_image.jpg ");
}
	   /*and the skewing one at last */
private: System::Void skewingbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int x1 = Convert::ToInt32(x1value->Text),
	    x2 = Convert::ToInt32(x2value->Text),
		y1 = Convert::ToInt32(y1value->Text),
		y2 = Convert::ToInt32(y2value->Text);
	
	Mat image1, skew;
	image1 = src;
	Point2f src_p[3];
	src_p[0] = Point2f(0, 0);
	src_p[1] = Point2f(image1.cols - x1, 0);
	src_p[2] = Point2f(y1, image1.rows - 1);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(image1.cols -x2, 0);
	dst_p[2] = Point2f(y2, image1.rows - 1);
	Mat SM = getAffineTransform(src_p, dst_p);
	warpAffine(image1, skew, SM, image1.size());
	src = skew;
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	destroyWindow("show");
}
};
}
