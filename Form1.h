#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

struct BSTreeNode//宣告樹的結構
{ 
	struct BSTreeNode *leftchild;
	int data;
	struct BSTreeNode *rightchild;
 };

struct BSTreeNode *root;//起始節點

struct QNode//佇列節點結構
{ 
	struct BSTreeNode *treenode;
	struct QNode *next;
};

struct QNode *front, *rear;//頭尾

namespace My0413418_HW7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::ListBox^  listBox5;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->groupBox3);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(698, 376);
			this->splitContainer1->SplitterDistance = 213;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Location = System::Drawing::Point(12, 232);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(185, 132);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"隨機亂數";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(21, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"range:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(41, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"n=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(69, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(96, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(69, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(96, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(44, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"製造亂數";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(12, 116);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(185, 92);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"刪除欄";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(22, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"element:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(44, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"刪除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(185, 85);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"插入欄";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(21, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"element:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(44, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"插入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(481, 376);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(473, 350);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"元素列表";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(467, 344);
			this->listBox1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->ForeColor = System::Drawing::Color::Red;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(473, 350);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"中序走訪";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(467, 344);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(473, 350);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"前序走訪";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(3, 3);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(467, 344);
			this->listBox3->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox4);
			this->tabPage4->ForeColor = System::Drawing::Color::Blue;
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(473, 350);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"後續走訪";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox4
			// 
			this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 12;
			this->listBox4->Location = System::Drawing::Point(3, 3);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(467, 344);
			this->listBox4->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox5);
			this->tabPage5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(473, 350);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"階層走訪";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox5
			// 
			this->listBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 12;
			this->listBox5->Location = System::Drawing::Point(3, 3);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(467, 344);
			this->listBox5->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 376);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Travesal inorder/postorder/preorder/levelorder  2017/1/1 by Jack";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		struct BSTreeNode * NewBSTNode(int n)//製造新節點
		{
			struct BSTreeNode * node = new struct BSTreeNode;
			node ->data = n ;
			node ->leftchild = NULL ;
			node ->rightchild = NULL ;
			return node ;
		};

		struct BSTreeNode * InorderSucc(struct BSTreeNode * node)//刪除節點需要的函式
		{
			struct BSTreeNode * p = node ;
			while( p->leftchild = NULL)
				p = p->leftchild ;
			return p ;
		}

		struct BSTreeNode * InsertBSTree(struct BSTreeNode * node ,int n)//插入節點
		{
			if(node== NULL) return NewBSTNode(n) ;
			else if(n < node->data)
				node->leftchild =InsertBSTree(node->leftchild ,n );
			else
				node->rightchild =InsertBSTree(node->rightchild ,n );
			return node ;
		};

		struct BSTreeNode * DeleteBSTree(struct BSTreeNode * node ,int n)//刪除節點
		{
			struct BSTreeNode * temp ;
			if(node== NULL) return node ;
			else if(n < node->data)
				node->leftchild =DeleteBSTree(node->leftchild ,n );
			else if(n > node->data)
				node->rightchild =DeleteBSTree(node->rightchild ,n );
			else // n found in node
				 { 
					if ((node->leftchild == NULL) || (node->rightchild == NULL))
						{ 
							temp = node->leftchild ? node->leftchild:node->rightchild;
							if (temp == NULL) //形式: node is a leaf itself
								{ 
									temp = node;
									node = NULL;
								}
							else * node = * temp;// Copy the contents of the only/non-empty child
							free(temp);
						 }
					else // 形式:node has two children
						{ 
							temp = InorderSucc(node->rightchild);
							node->data = temp->data;
							node->rightchild=DeleteBSTree(node->rightchild, temp->data);
						}
				}
			return node ;
		};

		struct BSTreeNode *SearchBST(struct BSTreeNode *tree, int n)//搜尋節點
			{ 
				if (tree == NULL) return NULL;
				if (n == tree->data) return tree;
				if (n < tree->data)return SearchBST(tree->leftchild, n);
				return SearchBST(tree->rightchild, n);
			}

		void AddQueue(struct BSTreeNode *Tnode)//加入佇列 階層需要
			{ 
				struct QNode *node;
				node=(struct QNode *)malloc(sizeof(struct QNode));
				node->treenode = Tnode;
				node->next = NULL;
				if (front == NULL) front = node;
				else rear->next = node;
				rear = node;
			}

		struct BSTreeNode *DeleteQueue()//刪除佇列 階層需要
			{ 
				struct BSTreeNode *Tnode;
				struct QNode *old_front;
				if (rear == NULL)listBox1->Items->Add("空的");
				else
				{ 
					Tnode = front->treenode;
					old_front = front;
					front = front->next;
					free(old_front);
					return Tnode;
				}
			}

		String^traversal1 ;
		String^traversal2 ;
		String^traversal3 ;
		String^traversal4 ;

		void inorder(struct BSTreeNode *ptr)//中序
		{
			if(ptr)
			{
				inorder(ptr->leftchild);
				traversal1 += ptr->data+"-";
				inorder(ptr->rightchild);
			}
		}

		void preorder(struct BSTreeNode *ptr)//前序
		{
			if(ptr)
			{
				traversal2 += ptr->data+"-";
				preorder(ptr->leftchild);
				preorder(ptr->rightchild);
			}
		}

		void postorder(struct BSTreeNode *ptr)//後序
		{
			if(ptr)
			{
				postorder(ptr->leftchild);
				postorder(ptr->rightchild);
				traversal3 += ptr->data+"-";
			}
		}

		void levelorder (struct BSTreeNode *node)//階層
			{ 
				if (node!= NULL)
				{
					AddQueue(node);
					while (front !=NULL)
						{ 
							node = DeleteQueue();
							traversal4 += node->data+"-";
							if (node->leftchild != NULL)
								AddQueue(node->leftchild);
							if (node->rightchild != NULL)
								AddQueue(node->rightchild);
						}
				}
			}



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int n = int::Parse(textBox1->Text);
				 root = InsertBSTree(root, n);
				 traversal1 ="";
				 traversal2 ="";
				 traversal3 ="";
				 traversal4 ="";
				 inorder(root);
				 preorder(root);
				 postorder(root);
				 levelorder(root);
				 listBox1 ->Items ->Add("加入"+n);
				 traversal1 = traversal1 +"<";
				 traversal2 = traversal2 +"<";
				 traversal3 = traversal3 +"<";
				 traversal4 = traversal4 +"<";
				 listBox2 ->Items ->Add(traversal1);
				 listBox3 ->Items ->Add(traversal2);
				 listBox4 ->Items ->Add(traversal3);
				 listBox5 ->Items ->Add(traversal4);
				 listBox2 ->Items ->Add("---------------------------------------");
				 listBox3 ->Items ->Add("---------------------------------------");
				 listBox4 ->Items ->Add("---------------------------------------");
				 listBox5 ->Items ->Add("---------------------------------------");
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int n = int::Parse(textBox2->Text);
				struct BSTreeNode *p = SearchBST(root , n);
				if(p== NULL) listBox1->Items->Add(n + "找不到!!");
				else
				{
					DeleteBSTree(root , n);
					traversal1 ="";
					traversal2 ="";
					traversal3 ="";
					traversal4 ="";
					inorder(root);
					preorder(root);
					postorder(root);
					levelorder(root);
					traversal1 = traversal1 +"<";
					traversal2 = traversal2 +"<";
					traversal3 = traversal3 +"<";
					traversal4 = traversal4 +"<";
					listBox2 ->Items ->Add(traversal1);
					listBox3 ->Items ->Add(traversal2);
					listBox4 ->Items ->Add(traversal3);
					listBox5 ->Items ->Add(traversal4);
					listBox2 ->Items ->Add("---------------------------------------");
					listBox3 ->Items ->Add("---------------------------------------");
					listBox4 ->Items ->Add("---------------------------------------");
					listBox5 ->Items ->Add("---------------------------------------");
					listBox1->Items->Add(n + "已刪除!");
				}
			}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int n =int::Parse(textBox3->Text);
				int m =int::Parse(textBox4->Text);
				int x ;
				String^printn = "亂數加入";
				for(int i = 0; i<n ;i++)
				{
					x = rand()%m+1;
					printn = printn+x+"-";
					root= InsertBSTree(root , x);
				}
				printn = printn+"<";
				listBox1->Items->Add(printn);
				traversal1 ="";
				traversal2 ="";
				traversal3 ="";
				traversal4 ="";
				inorder(root);
				preorder(root);
				postorder(root);
				levelorder(root);
				traversal1 = traversal1 +"<";
				traversal2 = traversal2 +"<";
				traversal3 = traversal3 +"<";
				traversal4 = traversal4 +"<";
				listBox2 ->Items ->Add(traversal1);
				listBox3 ->Items ->Add(traversal2);
				listBox4 ->Items ->Add(traversal3);
				listBox5 ->Items ->Add(traversal4);
				listBox2 ->Items ->Add("---------------------------------------");
				listBox3 ->Items ->Add("---------------------------------------");
				listBox4 ->Items ->Add("---------------------------------------");
				listBox5 ->Items ->Add("---------------------------------------");
			}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
};
}

