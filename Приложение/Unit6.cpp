//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit6.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent *Owner)
        : TForm(Owner) {
}

//---------------------------------------------------------------------------
void __fastcall TForm6::FormActivate(TObject *Sender) {
    Form6->ComboBox1->Items->Clear();
    Form6->ADOQuery1->Active = false;
    Form6->ADOQuery1->SQL->Text = "SELECT `�������� �����` FROM `�����`";
    Form6->ADOQuery1->Active = true;
    while (!Form6->ADOQuery1->Eof) {
        Form6->ComboBox1->Items->Add(Form6->ADOQuery1->FieldByName("�������� �����")->Text);
        Form6->ADOQuery1->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit1KeyPress(TObject *Sender, System::WideChar &Key) {
    if (isdigit(Key) || (Key == VK_BACK)) { return; }
        //��������� ����� � BackSace
    else if (Key == 13) { //��� ������ �� ������� Enter, ����� ������ ���������
        ShowMessage(Form6->Edit1->Text);
    }
    if (Key == '.') {
        if (Form6->Edit1->Text.Pos(Key) != 0 || Form6->Edit1->Text.Length() == 0)
            Key = 0; //��� ���� ����������� - ������ �������
        else return;
    }
    Key = 0; //�� ��������� ������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button1Click(TObject *Sender) {
    Form6->ADOQuery1->SQL->Text =
            "INSERT INTO `�������` (`�������� �����`,`������`,`���� �������`,`���-��`) VALUES ('" +
            Form6->ComboBox1->Items->Strings[Form6->ComboBox1->ItemIndex] + "'," + Form6->Edit1->Text + ",'" +
            Form6->DateTimePicker1->Date + "'," + Form6->Edit3->Text + ");";
    Form6->ADOQuery1->ExecSQL();
    ShowMessage("������ ����������");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button2Click(TObject *Sender) {
    ShowMessage(Form6->DateTimePicker2->Date);
    Form6->ADOQuery1->SQL->Text =
            "DELETE * FROM ������� WHERE `���� �������` = '" + Form6->DateTimePicker2->Date + "';";
    Form6->ADOQuery1->ExecSQL();
    ShowMessage("������ �������");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action) {
    Form3->ADOTable1->Active = false;
    Form3->ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

