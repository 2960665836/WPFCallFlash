#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace NBControl {

	/// <summary>
	/// NBControlControl ժҪ
	/// </summary>
	public ref class NBControlControl : public System::Windows::Forms::UserControl
	{
	public:
		NBControlControl(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~NBControlControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxShockwaveFlashObjects::AxShockwaveFlash^  axShockwaveFlash1;
	protected: 

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NBControlControl::typeid));
			this->axShockwaveFlash1 = (gcnew AxShockwaveFlashObjects::AxShockwaveFlash());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axShockwaveFlash1))->BeginInit();
			this->SuspendLayout();
			// 
			// axShockwaveFlash1
			// 
			this->axShockwaveFlash1->Enabled = true;
			this->axShockwaveFlash1->Location = System::Drawing::Point(0, 0);
			this->axShockwaveFlash1->Name = L"axShockwaveFlash1";
			this->axShockwaveFlash1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axShockwaveFlash1.OcxState")));
			this->axShockwaveFlash1->Size = System::Drawing::Size(847, 625);
			this->axShockwaveFlash1->TabIndex = 0;
			// 
			// NBControlControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->axShockwaveFlash1);
			this->Name = L"NBControlControl";
			this->Size = System::Drawing::Size(850, 625);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axShockwaveFlash1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
