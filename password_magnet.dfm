object Password_magnet_F: TPassword_magnet_F
  Left = 0
  Top = 0
  Caption = 'Password_magnet_F'
  ClientHeight = 510
  ClientWidth = 829
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 137
    Top = 46
    Height = 423
    ExplicitTop = 44
    ExplicitHeight = 405
  end
  object Splitter3: TSplitter
    Left = 0
    Top = 43
    Width = 829
    Height = 3
    Cursor = crVSplit
    Align = alTop
    ExplicitWidth = 846
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 829
    Height = 43
    Caption = 'ToolBar1'
    TabOrder = 0
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 469
    Width = 829
    Height = 41
    Panels = <>
  end
  object Panel1: TPanel
    Left = 0
    Top = 46
    Width = 137
    Height = 423
    Align = alLeft
    TabOrder = 2
  end
  object Panel2: TPanel
    Left = 140
    Top = 46
    Width = 689
    Height = 423
    Align = alClient
    TabOrder = 3
    object Splitter2: TSplitter
      Left = 1
      Top = 185
      Width = 687
      Height = 3
      Cursor = crVSplit
      Align = alTop
      ExplicitWidth = 705
    end
    object Panel3: TPanel
      Left = 1
      Top = 1
      Width = 687
      Height = 184
      Align = alTop
      TabOrder = 0
      object DBGrid1: TDBGrid
        Left = 1
        Top = 1
        Width = 685
        Height = 182
        Align = alClient
        DataSource = DataSource1
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
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
      Left = 176
      Top = 192
      Width = 210
      Height = 49
      DataSource = DataSource1
      TabOrder = 1
    end
    object Button1: TButton
      Left = 440
      Top = 256
      Width = 73
      Height = 41
      Caption = 'Button1'
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 248
      Top = 320
      Width = 105
      Height = 33
      Caption = 'Button2'
      TabOrder = 3
      OnClick = Button2Click
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
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\workshop\consol\' +
      'password_magnet\Win32\Debug\data\My_date.mdb;Persist Security In' +
      'fo=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 220
    Top = 302
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select *  From TSite')
    Left = 324
    Top = 302
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 500
    Top = 310
  end
end
