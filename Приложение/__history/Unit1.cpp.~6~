//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
WideString izd[3] = {"Название издательства", "Телефон", "Сроки поставки (кол-во дней)"};
WideString books[6] = {"Название книги", "Автор", "Издательство", "Год выпуска", "Цена", "Кол-во на складе"};
WideString sales[4] = {"Название книги", "Скидка", "Дата продажи", "Кол-во"};

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner)
        : TForm(Owner) {
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender) {
	Form1->ComboBox2->Clear();
	if (Form1->ComboBox1->ItemIndex == 0) {
		for (int i = 0; i < 3; i++) {
			Form1->ComboBox2->Items->Add(izd[i]);
		}
	} else if (Form1->ComboBox1->ItemIndex == 1) {
		for (int i = 0; i < 6; i++) {
			Form1->ComboBox2->Items->Add(books[i]);
		}
	} else if (Form1->ComboBox1->ItemIndex == 2) {
		for (int i = 0; i < 4; i++) {
			Form1->ComboBox2->Items->Add(sales[i]);
		}
	}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox2Change(TObject *Sender) {
Form1->Edit1->Visible = true;
Form1->DateTimePicker1->Visible = false;
    if (Form1->ComboBox1->ItemIndex == 0) {
        if (Form1->ComboBox2->ItemIndex == 2) {
            Form1->Edit2->Enabled = true;
        } else {
            Form1->Edit2->Enabled = false;
        }

    } else if (Form1->ComboBox1->ItemIndex == 1) {
        if (Form1->ComboBox2->ItemIndex >= 3) {
            Form1->Edit2->Enabled = true;
        } else {
            Form1->Edit2->Enabled = false;
        }
	} else if (Form1->ComboBox1->ItemIndex == 2) {
		if (Form1->ComboBox2->ItemIndex >= 1 && Form1->ComboBox2->ItemIndex != 2) {
            Form1->Edit2->Enabled = true;
		} else if (Form1->ComboBox2->ItemIndex == 2){
			Form1->Edit1->Visible = false;
			Form1->DateTimePicker1->Visible = true;
		}
		else {
			Form1->Edit2->Enabled = false;
        }
    }


    Form1->Edit1->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit1Change(TObject *Sender) {

	if (Form1->Edit1->Text == "" || (Form1->Edit1->Text != "" && Form1->Edit2->Text == "" && Form1->Edit2->Enabled)) {
		return;
	}

	Form1->ADOQuery1->Active = false;
	if (Form1->ComboBox1->ItemIndex == 0) {
		if (Form1->ComboBox2->ItemIndex == 2) {

			Form1->ADOQuery1->SQL->Text = "SELECT * FROM `Издательства` WHERE `" +
										  Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] + "` BETWEEN " +
										  Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";
        } else {

			Form1->ADOQuery1->SQL->Text = "SELECT * FROM `Издательства` WHERE `" +
										  Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] + "` LIKE '%" +
										  Form1->Edit1->Text + "%'";
        }

    } else if (Form1->ComboBox1->ItemIndex == 1) {
        if (Form1->ComboBox2->ItemIndex >= 3) {
            Form1->ADOQuery1->SQL->Text =
                    "SELECT * FROM `Книги` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` BETWEEN " + Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";

        } else {
            Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Книги` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` LIKE '%" + Form1->Edit1->Text + "%'";

        }
	} else if (Form1->ComboBox1->ItemIndex == 2) {
		if (Form1->ComboBox2->ItemIndex >= 1 && Form1->ComboBox2->ItemIndex != 2) {
            Form1->ADOQuery1->SQL->Text =
                    "SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` BETWEEN " + Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";

		} else {
			Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` LIKE '%" + Form1->Edit1->Text + "%'";
		}
	}

	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
	Form1->ComboBox1->ItemIndex = Form3->ComboBox1->ItemIndex;
    Form1->ComboBox2->Clear();
	if (Form1->ComboBox1->ItemIndex == 0) {
		for (int i = 0; i < 3; i++) {
			Form1->ComboBox2->Items->Add(izd[i]);
		}
	} else if (Form1->ComboBox1->ItemIndex == 1) {
		for (int i = 0; i < 6; i++) {
			Form1->ComboBox2->Items->Add(books[i]);
		}
	} else if (Form1->ComboBox1->ItemIndex == 2) {
		for (int i = 0; i < 4; i++) {
			Form1->ComboBox2->Items->Add(sales[i]);
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{

if (Form1->Edit1->Text == "" || (Form1->Edit1->Text != "" && Form1->Edit2->Text == "" && Form1->Edit2->Enabled)) {
		return;
	}

	Form1->ADOQuery1->Active = false;
	if (Form1->ComboBox1->ItemIndex == 0) {
		if (Form1->ComboBox2->ItemIndex == 2) {

			Form1->ADOQuery1->SQL->Text = "SELECT * FROM `Издательства` WHERE `" +
										  Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] + "` BETWEEN " +
										  Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";
        } else {

			Form1->ADOQuery1->SQL->Text = "SELECT * FROM `Издательства` WHERE `" +
										  Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] + "` LIKE '" +
										  Form1->Edit1->Text + "%'";
        }

    } else if (Form1->ComboBox1->ItemIndex == 1) {
        if (Form1->ComboBox2->ItemIndex >= 3) {
            Form1->ADOQuery1->SQL->Text =
                    "SELECT * FROM `Книги` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` BETWEEN " + Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";

        } else {
            Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Книги` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
                    "` = '" + Form1->Edit1->Text + "'";

        }
	} else if (Form1->ComboBox1->ItemIndex == 2) {
		if (Form1->ComboBox2->ItemIndex >= 1 && Form1->ComboBox2->ItemIndex != 2) {
            Form1->ADOQuery1->SQL->Text =
                    "SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
                    "` BETWEEN " + Form1->Edit1->Text + " AND " + Form1->Edit2->Text + ";";

		} else if (Form1->ComboBox2->ItemIndex == 2)
		{
			Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` = '" + Form1->DateTimePicker1->Date + "'";
		}
		else {
			Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` = '" + Form1->Edit1->Text + "'";
		}
	}

	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DateTimePicker1Change(TObject *Sender)
{
	 Form1->ADOQuery1->Active = false;
	 Form1->ADOQuery1->SQL->Text =
					"SELECT * FROM `Продажи` WHERE `" + Form1->ComboBox2->Items->Strings[Form1->ComboBox2->ItemIndex] +
					"` LIKE '%" + Form1->DateTimePicker1->Date + "%'";
	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

