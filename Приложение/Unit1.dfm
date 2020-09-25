object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1055#1086#1080#1089#1082
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 8
    Top = 8
    Width = 145
    Height = 21
    TabOrder = 0
    Text = #1058#1072#1073#1083#1080#1094#1099
    OnChange = ComboBox1Change
    Items.Strings = (
      #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
      #1050#1085#1080#1075#1080
      #1055#1088#1086#1076#1072#1078#1080)
  end
  object ComboBox2: TComboBox
    Left = 8
    Top = 50
    Width = 145
    Height = 21
    TabOrder = 1
    Text = #1055#1086#1083#1103
    OnChange = ComboBox2Change
  end
  object Edit1: TEdit
    Left = 192
    Top = 50
    Width = 121
    Height = 21
    TabOrder = 2
    OnChange = Edit1Change
  end
  object Edit2: TEdit
    Left = 344
    Top = 50
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object DBGrid1: TDBGrid
    Left = 114
    Top = 88
    Width = 481
    Height = 193
    DataSource = DataSource1
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source='#1050#1085#1080#1078#1085#1099#1081' '#1084#1072#1075#1072#1079#1080#1085'.mdb' +
      ';Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 24
    Top = 160
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 24
    Top = 104
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 24
    Top = 232
  end
end
