//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit5.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent *Owner)
        : TForm(Owner) {
}

//---------------------------------------------------------------------------
void __fastcall TForm5::Edit4KeyPress(TObject *Sender, System::WideChar &Key) {
    if (isdigit(Key) || (Key == VK_BACK)) { return; }
        //��������� ����� � BackSace
    else if (Key == 13) { //��� ������ �� ������� Enter, ����� ������ ���������
        ShowMessage(Form5->Edit4->Text);
    }
    if (Key == '.') {
        if (Form5->Edit4->Text.Pos(Key) != 0 || Form5->Edit4->Text.Length() == 0)
            Key = 0; //��� ���� ����������� - ������ �������
        else return;
    }
    Key = 0; //�� ��������� ������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action) {
    Form3->ADOTable1->Active = false;
    Form3->ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender) {
    Form5->ADOQuery1->Active = false;
    Form5->ADOQuery1->SQL->Text = "SELECT `�������� �����` FROM `�����`";
    Form5->ADOQuery1->Active = true;
    while (!Form5->ADOQuery1->Eof) {
        if (Form5->ADOQuery1->FieldByName("�������� �����")->Text == Form5->Edit1->Text) {
            ShowMessage("����� �������� ��� ����������");
            return;
        }
        Form5->ADOQuery1->Next();
    }
    Form5->ADOQuery1->SQL->Text =
            "INSERT INTO `�����` VALUES ('" + Form5->Edit1->Text + "','" + Form5->Edit2->Text + "','" +
            Form5->Edit6->Text + "'," + Form5->Edit3->Text + "," + Form5->Edit4->Text + "," + Form5->Edit5->Text + ");";
    Form5->ADOQuery1->ExecSQL();
    ShowMessage("������ ���������");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender) {
    Form5->ComboBox1->Items->Clear();
    Form5->ADOQuery1->Active = false;
    Form5->ADOQuery1->SQL->Text = "SELECT `�������� �����` FROM `�����`";
    Form5->ADOQuery1->Active = true;
    while (!Form5->ADOQuery1->Eof) {
        Form5->ComboBox1->Items->Add(Form5->ADOQuery1->FieldByName("�������� �����")->Text);
        Form5->ADOQuery1->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender) {
    Form5->ADOQuery1->SQL->Text = "DELETE * FROM ����� WHERE `�������� �����` = '" +
                                  Form5->ComboBox1->Items->Strings[Form5->ComboBox1->ItemIndex] + "';";
    Form5->ADOQuery1->ExecSQL();
    ShowMessage("������ �������");
}
//---------------------------------------------------------------------------

