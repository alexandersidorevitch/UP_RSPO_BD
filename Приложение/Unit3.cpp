//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent *Owner)
        : TForm(Owner) {
}

//---------------------------------------------------------------------------
void __fastcall TForm3::ComboBox1Change(TObject *Sender) {
    Form3->ADOTable1->Active = false;
    Form3->ADOTable1->TableName = Form3->ComboBox1->Items->Strings[Form3->ComboBox1->ItemIndex];
    Form3->ADOTable1->Active = true;
}

//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender) {
	if (Form3->ComboBox1->ItemIndex == 0) {
		Form4->Show();
    } else if (Form3->ComboBox1->ItemIndex == 1) {
        Form5->Show();
    } else if (Form3->ComboBox1->ItemIndex == 2) {
        Form6->Show();
    }
}

//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender) {
    Form1->Show();
}
//---------------------------------------------------------------------------

