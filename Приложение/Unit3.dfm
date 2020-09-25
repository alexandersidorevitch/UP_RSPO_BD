object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1050#1091#1082#1091#1089#1080#1082#1080
  ClientHeight = 533
  ClientWidth = 818
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 88
    Top = 75
    Width = 681
    Height = 310
    Color = clBtnFace
    DataSource = DataSource1
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 48
    Width = 145
    Height = 21
    TabOrder = 1
    Text = #1058#1072#1073#1083#1080#1094#1099
    OnChange = ComboBox1Change
    Items.Strings = (
      #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
      #1050#1085#1080#1075#1080
      #1055#1088#1086#1076#1072#1078#1080)
  end
  object Button1: TButton
    Left = 641
    Top = 460
    Width = 169
    Height = 65
    Caption = #1044#1086#1073#1072#1083#1077#1085#1080#1077' '#1079#1072#1087#1080#1089#1080
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 482
    Top = 460
    Width = 153
    Height = 65
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 3
    OnClick = Button2Click
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 24
    Top = 152
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
    Left = 24
    Top = 72
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source='#1050#1085#1080#1078#1085#1099#1081' '#1084#1072#1075#1072#1079#1080#1085'.mdb' +
      ';Mode=Share Deny None;Persist Security Info=False;Jet OLEDB:Syst' +
      'em database="";Jet OLEDB:Registry Path="";Jet OLEDB:Database Pas' +
      'sword="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode' +
      '=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Tra' +
      'nsactions=1;Jet OLEDB:New Database Password="";Jet OLEDB:Create ' +
      'System Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB' +
      ':Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact Without Re' +
      'plica Repair=False;Jet OLEDB:SFP=False;'
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 24
    Top = 240
  end
end
