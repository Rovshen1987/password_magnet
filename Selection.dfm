object Selection_F: TSelection_F
  Left = 0
  Top = 0
  Caption = 'Selection_F'
  ClientHeight = 553
  ClientWidth = 710
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 21
  object Selection_P: TPanel
    Left = 0
    Top = 0
    Width = 710
    Height = 553
    Align = alClient
    TabOrder = 0
    ExplicitLeft = 184
    ExplicitTop = 152
    ExplicitWidth = 281
    ExplicitHeight = 209
    object Control_TSh: TPageControl
      Left = 1
      Top = 1
      Width = 708
      Height = 551
      ActivePage = Site_TSh
      Align = alClient
      TabOrder = 0
      object Site_TSh: TTabSheet
        Caption = 'Site_TSh'
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object Mail_TSh: TTabSheet
        Caption = 'Mail_TSh'
        ImageIndex = 1
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object Mobile_TSh: TTabSheet
        Caption = 'Mobile_TSh'
        ImageIndex = 2
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object ICloud_TSh: TTabSheet
        Caption = 'ICloud_TSh'
        ImageIndex = 3
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object PlayMarket_TSh: TTabSheet
        Caption = 'PlayMarket_TSh'
        ImageIndex = 4
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object Computer_TSh: TTabSheet
        Caption = 'Computer_TSh'
        ImageIndex = 5
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object Paycard: TTabSheet
        Caption = 'Paycard'
        ImageIndex = 6
        ExplicitTop = 24
        ExplicitHeight = 523
      end
      object Docfile_TSh: TTabSheet
        Caption = 'Docfile_TSh'
        ImageIndex = 7
        ExplicitTop = 24
        ExplicitHeight = 523
      end
    end
  end
end
