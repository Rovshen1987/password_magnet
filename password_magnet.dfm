object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 490
  ClientWidth = 846
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 137
    Top = 46
    Height = 403
    ExplicitTop = 44
    ExplicitHeight = 405
  end
  object Splitter3: TSplitter
    Left = 0
    Top = 43
    Width = 846
    Height = 3
    Cursor = crVSplit
    Align = alTop
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 846
    Height = 43
    Caption = 'ToolBar1'
    TabOrder = 0
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 449
    Width = 846
    Height = 41
    Panels = <>
  end
  object Panel1: TPanel
    Left = 0
    Top = 46
    Width = 137
    Height = 403
    Align = alLeft
    TabOrder = 2
  end
  object Panel2: TPanel
    Left = 140
    Top = 46
    Width = 706
    Height = 403
    Align = alClient
    TabOrder = 3
    object Splitter2: TSplitter
      Left = 1
      Top = 185
      Width = 704
      Height = 3
      Cursor = crVSplit
      Align = alTop
      ExplicitWidth = 705
    end
    object Panel3: TPanel
      Left = 1
      Top = 1
      Width = 704
      Height = 184
      Align = alTop
      TabOrder = 0
      object DBGrid1: TDBGrid
        Left = 1
        Top = 1
        Width = 702
        Height = 182
        Align = alClient
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            Visible = True
          end>
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
end
