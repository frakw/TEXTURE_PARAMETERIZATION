#pragma once
#include "Common.h"

namespace Mesh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OpenGLPanel ���K�n
	/// </summary>
	public ref class OpenGLPanel : public System::Windows::Forms::UserControl
	{

	public: void makeContextCurrent();
	public: HGLRC getGlContext();
	public: bool createContext;
	public: HGLRC existingContext;
	private: HWND hWnd;
	private: HDC  hDC;
	private: HGLRC hRC;
	private: bool glInitialized;
	private: void initOpenGL();
	protected: System::Void OnLoad(System::EventArgs^ e) override;
	protected: System::Void OnPaint(System::Windows::Forms::PaintEventArgs^ e) override;
	protected: System::Void OnResize(System::EventArgs^ e) override;

	public:
		OpenGLPanel(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
			glInitialized = false;
			this->SetStyle(ControlStyles::Opaque, true);
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~OpenGLPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// OpenGLPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"OpenGLPanel";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
