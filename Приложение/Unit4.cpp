//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit1Change(TObject *Sender)
{
	if (Form4->Edit1->Text == "" || Form4->MaskEdit1->Text == "" || Form4->Edit3->Text == "") {
		Form4->Button1->Enabled = false;
	}
	else {
		Form4->Button1->Enabled = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->SQL->Text = "SELECT `�������� ������������` FROM `������������`";
	Form4->ADOQuery1->Active = true;
	while (!Form4->ADOQuery1->Eof){
			if (Form4->ADOQuery1->FieldByName("�������� ������������")->Text == Form4->Edit1->Text) {
				ShowMessage("����� �������� ��� ����������");
				return;
			}
			Form4->ADOQuery1->Next();
		}
	Form4->ADOQuery1->SQL->Text = "INSERT INTO `������������` VALUES ('" + Form4->Edit1->Text + "','" + Form4->MaskEdit1->Text +"'," + Form4->Edit3->Text + ");";
	Form4->ADOQuery1->ExecSQL();
	ShowMessage("������ ���������");

}
//---------------------------------------------------------------------------

void __fastcall TForm4::MaskEdit1Change(TObject *Sender)
{
if (Form4->Edit1->Text == "" || Form4->MaskEdit1->Text == "" || Form4->Edit3->Text == "") {
		Form4->Button1->Enabled = false;
	}
	else {
		Form4->Button1->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit3Change(TObject *Sender)
{
if (Form4->Edit1->Text == "" || Form4->MaskEdit1->Text == "" || Form4->Edit3->Text == "") {
		Form4->Button1->Enabled = false;
	}
	else {
		Form4->Button1->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form3->ADOTable1->Active = false;
	Form3->ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormActivate(TObject *Sender)
{

	Form4->ComboBox1->Items->Clear();
	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->SQL->Text = "SELECT `�������� ������������` FROM `������������`";
	Form4->ADOQuery1->Active = true;
	while (!Form4->ADOQuery1->Eof){
			Form4->ComboBox1->Items->Add(Form4->ADOQuery1->FieldByName("�������� ������������")->Text);
			Form4->ADOQuery1->Next();
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Form4->ADOQuery1->SQL->Text = "DELETE * FROM `������������` WHERE `�������� ������������` = '" + Form4->ComboBox1->Items->Strings[Form4->ComboBox1->ItemIndex] + "';";
	Form4->ADOQuery1->ExecSQL();
	ShowMessage("������ �������");
}
//---------------------------------------------------------------------------

