object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1080' '#1091#1076#1072#1083#1077#1085#1080#1077' ('#1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072')'
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
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 80
    Top = 136
    Width = 137
    Height = 21
    TabOrder = 0
    Text = #1053#1072#1079#1074#1072#1085#1080#1077' '#1080#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
    OnChange = Edit1Change
  end
  object Edit3: TEdit
    Left = 408
    Top = 136
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 1
    Text = #1057#1088#1086#1082#1080' '#1087#1086#1089#1090#1072#1074#1082#1080
    OnChange = Edit3Change
  end
  object Button1: TButton
    Left = 474
    Top = 240
    Width = 153
    Height = 51
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1085#1072#1095#1077#1085#1080#1077
    Enabled = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object MaskEdit1: TMaskEdit
    Left = 256
    Top = 136
    Width = 119
    Height = 21
    EditMask = '\+\3\7\5\(00\)000\-00\-00;0;_'
    MaxLength = 17
    TabOrder = 3
    Text = ''
    OnChange = MaskEdit1Change
  end
  object ComboBox1: TComboBox
    Left = 80
    Top = 192
    Width = 137
    Height = 21
    TabOrder = 4
    Text = #1053#1072#1079#1074#1072#1085#1080#1103' '#1080#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
  end
  object Button2: TButton
    Left = 256
    Top = 177
    Width = 153
    Height = 51
    Caption = #1059#1076#1072#1083#1077#1085#1080#1077
    TabOrder = 5
    OnClick = Button2Click
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    TableName = #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1072
    Left = 8
    Top = 16
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
    Left = 8
    Top = 136
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 16
    Top = 88
  end
end
