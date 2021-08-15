object Password_magnet_F: TPassword_magnet_F
  Left = 0
  Top = 0
  Caption = 'Password_magnet_F'
  ClientHeight = 965
  ClientWidth = 1074
  Color = clBtnFace
  Constraints.MinHeight = 790
  Constraints.MinWidth = 1040
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 21
  object Splitter1: TSplitter
    Left = 137
    Top = 46
    Height = 878
    ExplicitTop = 44
    ExplicitHeight = 405
  end
  object Splitter3: TSplitter
    Left = 0
    Top = 43
    Width = 1074
    Height = 3
    Cursor = crVSplit
    Align = alTop
    ExplicitWidth = 846
  end
  object ToolBar: TToolBar
    Left = 0
    Top = 0
    Width = 1074
    Height = 43
    Caption = 'ToolBar'
    TabOrder = 0
  end
  object StatusBar: TStatusBar
    Left = 0
    Top = 924
    Width = 1074
    Height = 41
    Panels = <>
  end
  object Navigator_P: TPanel
    Left = 0
    Top = 46
    Width = 137
    Height = 878
    Align = alLeft
    TabOrder = 2
    object Site_NL: TLabel
      Left = 15
      Top = 15
      Width = 28
      Height = 21
      Cursor = crHandPoint
      Caption = 'Site'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Site_NLClick
    end
    object Mobile_NL: TLabel
      Left = 15
      Top = 90
      Width = 52
      Height = 21
      Cursor = crHandPoint
      Caption = 'Mobile'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Mobile_NLClick
    end
    object Computer_NL: TLabel
      Left = 15
      Top = 195
      Width = 75
      Height = 21
      Cursor = crHandPoint
      Caption = 'Computer'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Computer_NLClick
    end
    object ICloud_NL: TLabel
      Left = 15
      Top = 125
      Width = 52
      Height = 21
      Cursor = crHandPoint
      Caption = 'ICloud'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = ICloud_NLClick
    end
    object PlayMarket_NL: TLabel
      Left = 15
      Top = 160
      Width = 84
      Height = 21
      Cursor = crHandPoint
      Caption = 'PlayMarket'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = PlayMarket_NLClick
    end
    object Paycard_NL: TLabel
      Left = 15
      Top = 230
      Width = 61
      Height = 21
      Cursor = crHandPoint
      Caption = 'Paycard'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Paycard_NLClick
    end
    object Mail_NL: TLabel
      Left = 15
      Top = 55
      Width = 32
      Height = 21
      Cursor = crHandPoint
      Caption = 'Mail'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Mail_NLClick
    end
    object Docfile_NL: TLabel
      Left = 15
      Top = 265
      Width = 54
      Height = 21
      Cursor = crHandPoint
      Caption = 'Docfile'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Docfile_NLClick
    end
  end
  object Client_P: TPanel
    Left = 140
    Top = 46
    Width = 934
    Height = 878
    Align = alClient
    TabOrder = 3
    object Splitter2: TSplitter
      Left = 1
      Top = 185
      Width = 932
      Height = 3
      Cursor = crVSplit
      Align = alTop
      ExplicitWidth = 705
    end
    object DBGrid_P: TPanel
      Left = 1
      Top = 1
      Width = 932
      Height = 184
      Align = alTop
      TabOrder = 0
      object DBGrid: TDBGrid
        Left = 1
        Top = 1
        Width = 930
        Height = 182
        Align = alClient
        DataSource = DataSource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'Times New Roman'
        TitleFont.Style = []
      end
    end
    object DBNavigator: TDBNavigator
      Left = 1
      Top = 188
      Width = 932
      Height = 45
      Cursor = crHandPoint
      DataSource = DataSource
      Align = alTop
      TabOrder = 1
    end
    object Date_navigator_P: TPanel
      Left = 1
      Top = 233
      Width = 932
      Height = 644
      Align = alClient
      TabOrder = 2
      object Splitter4: TSplitter
        Left = 409
        Top = 1
        Width = 0
        Height = 642
        ExplicitLeft = 421
        ExplicitHeight = 534
      end
      object Gadjet_P: TPanel
        Left = 1
        Top = 1
        Width = 408
        Height = 642
        Align = alLeft
        TabOrder = 0
        object ID_L: TLabel
          Left = 15
          Top = 20
          Width = 33
          Height = 21
          Caption = '* ID'
        end
        object Login_L: TLabel
          Left = 15
          Top = 90
          Width = 57
          Height = 21
          Caption = '* Login'
        end
        object Password_L: TLabel
          Left = 15
          Top = 125
          Width = 88
          Height = 21
          Caption = '* Password'
        end
        object Mail_L: TLabel
          Left = 15
          Top = 160
          Width = 46
          Height = 21
          Caption = '* Mail'
        end
        object Registration_date_L: TLabel
          Left = 15
          Top = 195
          Width = 139
          Height = 21
          Caption = '* Registration date'
        end
        object Host_L: TLabel
          Left = 15
          Top = 55
          Width = 71
          Height = 21
          Caption = '* Host_L'
        end
        object ID_DBE: TDBEdit
          Left = 176
          Top = 15
          Width = 220
          Height = 29
          DataSource = DataSource
          ReadOnly = True
          TabOrder = 0
        end
        object Login_DBE: TDBEdit
          Left = 176
          Top = 85
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 1
        end
        object Password_DBE: TDBEdit
          Left = 176
          Top = 120
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 2
        end
        object Mail_DBE: TDBEdit
          Left = 176
          Top = 155
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 3
        end
        object Registration_date_DBE: TDBEdit
          Left = 176
          Top = 190
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 4
        end
        object Host_DBE: TDBEdit
          Left = 176
          Top = 50
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 5
        end
      end
      object Person_P: TPanel
        Left = 409
        Top = 1
        Width = 468
        Height = 642
        Align = alLeft
        TabOrder = 1
        object First_name_L: TLabel
          Left = 20
          Top = 20
          Width = 73
          Height = 21
          Caption = 'Firstname'
        end
        object Last_name_L: TLabel
          Left = 20
          Top = 55
          Width = 71
          Height = 21
          Cursor = crHandPoint
          Caption = 'Lastname'
        end
        object Year_of_birth_L: TLabel
          Left = 20
          Top = 90
          Width = 93
          Height = 21
          Caption = 'Year of birth'
        end
        object Gender_of_person_L: TLabel
          Left = 20
          Top = 125
          Width = 132
          Height = 21
          Caption = 'Gender of person'
        end
        object Place_of_birth_L: TLabel
          Left = 20
          Top = 160
          Width = 100
          Height = 21
          Caption = 'Place of birth'
        end
        object Country_L: TLabel
          Left = 20
          Top = 195
          Width = 61
          Height = 21
          Caption = 'Country'
        end
        object City_L: TLabel
          Left = 20
          Top = 230
          Width = 31
          Height = 21
          Caption = 'City'
        end
        object Andress_registration_L: TLabel
          Left = 20
          Top = 265
          Width = 149
          Height = 21
          Caption = 'Andress registration'
        end
        object Place_of_resindece_L: TLabel
          Left = 20
          Top = 300
          Width = 136
          Height = 21
          Caption = 'Place of resindece'
        end
        object Home_telephone_L: TLabel
          Left = 20
          Top = 335
          Width = 121
          Height = 21
          Caption = 'Home telephone'
        end
        object Mobile_telephone_L: TLabel
          Left = 20
          Top = 370
          Width = 128
          Height = 21
          Caption = 'Mobile telephone'
        end
        object First_name_DBE: TDBEdit
          Left = 220
          Top = 15
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 0
        end
        object Last_name_DBE: TDBEdit
          Left = 220
          Top = 50
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 1
        end
        object Year_of_birth_DBE: TDBEdit
          Left = 220
          Top = 85
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 2
        end
        object Gender_of_person_DBE: TDBEdit
          Left = 220
          Top = 120
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 3
        end
        object Place_of_birth_DBE: TDBEdit
          Left = 220
          Top = 155
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 4
        end
        object Country_DBE: TDBEdit
          Left = 220
          Top = 190
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 5
        end
        object City_DBE: TDBEdit
          Left = 220
          Top = 225
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 6
        end
        object Address_registration_DBE: TDBEdit
          Left = 220
          Top = 260
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 7
        end
        object Place_of_resindece_DBE: TDBEdit
          Left = 220
          Top = 295
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 8
        end
        object Home_telephone_DBE: TDBEdit
          Left = 220
          Top = 330
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 9
        end
        object Mobile_telephone_DBE: TDBEdit
          Left = 220
          Top = 365
          Width = 220
          Height = 29
          DataSource = DataSource
          TabOrder = 10
        end
        object Button1: TButton
          Left = 291
          Top = 453
          Width = 73
          Height = 41
          Caption = 'Button1'
          TabOrder = 11
          OnClick = Button1Click
        end
        object Button2: TButton
          Left = 123
          Top = 445
          Width = 105
          Height = 33
          Caption = 'Button2'
          TabOrder = 12
        end
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 232
    Top = 144
    object File1: TMenuItem
      Caption = 'File'
      object Open1: TMenuItem
        Caption = '&Open'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
  end
  object ADOConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\workshop\consol\' +
      'password_magnet\Win32\Debug\data\My_date.mdb;Persist Security In' +
      'fo=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 492
    Top = 502
  end
  object ADOQuery: TADOQuery
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select *  From TSite')
    Left = 884
    Top = 502
  end
  object DataSource: TDataSource
    DataSet = ADOQuery
    Left = 892
    Top = 278
  end
end
