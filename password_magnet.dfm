object Password_magnet_F: TPassword_magnet_F
  Left = 0
  Top = 0
  Caption = 'Password_magnet_F'
  ClientHeight = 965
  ClientWidth = 1071
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
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
    Width = 1071
    Height = 3
    Cursor = crVSplit
    Align = alTop
    ExplicitWidth = 846
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 1071
    Height = 43
    Caption = 'ToolBar1'
    TabOrder = 0
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 924
    Width = 1071
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
    object Sait_L: TLabel
      Left = 15
      Top = 15
      Width = 39
      Height = 21
      Cursor = crHandPoint
      Caption = #1057#1072#1081#1090
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = Sait_LClick
    end
    object Mobile_L: TLabel
      Left = 15
      Top = 50
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
      OnClick = Mobile_LClick
    end
    object Computer_L: TLabel
      Left = 15
      Top = 155
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
      OnClick = Computer_LClick
    end
    object ICloud_L: TLabel
      Left = 15
      Top = 85
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
      OnClick = ICloud_LClick
    end
    object PlayMarker_L: TLabel
      Left = 15
      Top = 120
      Width = 85
      Height = 21
      Cursor = crHandPoint
      Caption = 'PlayMarker'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHighlight
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      OnClick = PlayMarker_LClick
    end
    object Pay_card_L: TLabel
      Left = 15
      Top = 190
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
      OnClick = Pay_card_LClick
    end
  end
  object Client_P: TPanel
    Left = 140
    Top = 46
    Width = 931
    Height = 878
    Align = alClient
    TabOrder = 3
    object Splitter2: TSplitter
      Left = 1
      Top = 185
      Width = 929
      Height = 3
      Cursor = crVSplit
      Align = alTop
      ExplicitWidth = 705
    end
    object DBGrid_P: TPanel
      Left = 1
      Top = 1
      Width = 929
      Height = 184
      Align = alTop
      TabOrder = 0
      object DBGrid1: TDBGrid
        Left = 1
        Top = 1
        Width = 927
        Height = 182
        Align = alClient
        DataSource = DataSource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'Times New Roman'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Times New Roman'
            Font.Style = []
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -11
            Title.Font.Name = 'Times New Roman'
            Title.Font.Style = []
            Visible = True
          end
          item
            Expanded = False
            Visible = True
          end>
      end
    end
    object DBNavigator1: TDBNavigator
      Left = 1
      Top = 188
      Width = 929
      Height = 45
      Cursor = crHandPoint
      DataSource = DataSource
      Align = alTop
      TabOrder = 1
    end
    object Person_P: TPanel
      Left = 1
      Top = 233
      Width = 929
      Height = 536
      Align = alTop
      TabOrder = 2
      object Splitter4: TSplitter
        Left = 421
        Top = 1
        Width = 2
        Height = 534
        ExplicitHeight = 261
      end
      object Splitter5: TSplitter
        Left = 423
        Top = 1
        Width = 0
        Height = 534
      end
      object Gadjet_P: TPanel
        Left = 1
        Top = 1
        Width = 420
        Height = 534
        Align = alLeft
        TabOrder = 0
        object ID_L: TLabel
          Left = 20
          Top = 20
          Width = 19
          Height = 21
          Caption = 'ID'
        end
        object Login_L: TLabel
          Left = 20
          Top = 55
          Width = 43
          Height = 21
          Caption = 'Login'
        end
        object Password_L: TLabel
          Left = 20
          Top = 90
          Width = 74
          Height = 21
          Caption = 'Password'
        end
        object Mail_L: TLabel
          Left = 20
          Top = 125
          Width = 32
          Height = 21
          Caption = 'Mail'
        end
        object Registration_date_L: TLabel
          Left = 20
          Top = 155
          Width = 125
          Height = 21
          Caption = 'Registration date'
        end
        object ID_DBE: TDBEdit
          Left = 176
          Top = 15
          Width = 220
          Height = 29
          TabOrder = 0
        end
        object Login_DBE: TDBEdit
          Left = 176
          Top = 50
          Width = 220
          Height = 29
          TabOrder = 1
        end
        object Password_DBE: TDBEdit
          Left = 176
          Top = 85
          Width = 220
          Height = 29
          TabOrder = 2
        end
        object Mail_DBE: TDBEdit
          Left = 176
          Top = 120
          Width = 220
          Height = 29
          TabOrder = 3
        end
        object Registration_date_DBE: TDBEdit
          Left = 176
          Top = 155
          Width = 220
          Height = 29
          TabOrder = 4
        end
      end
      object Site_P: TPanel
        Left = 423
        Top = 1
        Width = 468
        Height = 534
        Align = alLeft
        TabOrder = 1
        object First_name_L: TLabel
          Left = 20
          Top = 20
          Width = 104
          Height = 21
          Caption = 'First_name_L'
        end
        object Last_name_L: TLabel
          Left = 20
          Top = 55
          Width = 102
          Height = 21
          Cursor = crHandPoint
          Caption = 'Last_name_L'
        end
        object Year_of_birth_L: TLabel
          Left = 20
          Top = 90
          Width = 124
          Height = 21
          Caption = 'Year_of_birth_L'
        end
        object Gender_of_person_L: TLabel
          Left = 20
          Top = 125
          Width = 163
          Height = 21
          Caption = 'Gender_of_person_L'
        end
        object Place_of_birth_L: TLabel
          Left = 20
          Top = 160
          Width = 131
          Height = 21
          Caption = 'Place_of_birth_L'
        end
        object Country_L: TLabel
          Left = 20
          Top = 195
          Width = 82
          Height = 21
          Caption = 'Country_L'
        end
        object City_L: TLabel
          Left = 20
          Top = 230
          Width = 52
          Height = 21
          Caption = 'City_L'
        end
        object Andress_registration_L: TLabel
          Left = 20
          Top = 265
          Width = 175
          Height = 21
          Caption = 'Andress_registration_L'
        end
        object Place_of_resindece_L: TLabel
          Left = 20
          Top = 300
          Width = 167
          Height = 21
          Caption = 'Place_of_resindece_L'
        end
        object Home_telephone_L: TLabel
          Left = 20
          Top = 335
          Width = 147
          Height = 21
          Caption = 'Home_telephone_L'
        end
        object Mobile_telephone_L: TLabel
          Left = 20
          Top = 370
          Width = 154
          Height = 21
          Caption = 'Mobile_telephone_L'
        end
        object First_name_DBE: TDBEdit
          Left = 220
          Top = 15
          Width = 220
          Height = 29
          TabOrder = 0
        end
        object Last_name_DBE: TDBEdit
          Left = 220
          Top = 50
          Width = 220
          Height = 29
          TabOrder = 1
        end
        object Year_of_birth_DBE: TDBEdit
          Left = 220
          Top = 85
          Width = 220
          Height = 29
          TabOrder = 2
        end
        object Gender_of_person_DBE: TDBEdit
          Left = 220
          Top = 120
          Width = 220
          Height = 29
          TabOrder = 3
        end
        object Place_of_birth_DBE: TDBEdit
          Left = 220
          Top = 155
          Width = 220
          Height = 29
          TabOrder = 4
        end
        object Country_DBE: TDBEdit
          Left = 220
          Top = 190
          Width = 220
          Height = 29
          TabOrder = 5
        end
        object City_DBE: TDBEdit
          Left = 220
          Top = 225
          Width = 220
          Height = 29
          TabOrder = 6
        end
        object Andress_registration_DBE: TDBEdit
          Left = 220
          Top = 260
          Width = 220
          Height = 29
          TabOrder = 7
        end
        object Place_of_resindece_DBE: TDBEdit
          Left = 220
          Top = 295
          Width = 220
          Height = 29
          TabOrder = 8
        end
        object Home_telephone_DBE: TDBEdit
          Left = 220
          Top = 330
          Width = 220
          Height = 29
          TabOrder = 9
        end
        object Mobile_telephone_DBE: TDBEdit
          Left = 220
          Top = 365
          Width = 220
          Height = 29
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
          OnClick = Button2Click
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
    Left = 884
    Top = 454
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
