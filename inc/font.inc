; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

font_tile_map_size EQU $80
font_tile_map_width EQU $10
font_tile_map_height EQU $08

font_tile_data_size EQU $0800
font_tile_count EQU $80

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

font_map_data:
DB $00,$01,$02,$03,$04,$05,$06,$07,$08,$09,$0A,$0B,$0C,$0D,$0E,$0F
DB $10,$11,$12,$13,$14,$15,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$1E,$1F
DB $20,$21,$22,$23,$24,$25,$26,$27,$28,$29,$2A,$2B,$2C,$2D,$2E,$2F
DB $30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$3A,$3B,$3C,$3D,$3E,$3F
DB $40,$41,$42,$43,$44,$45,$46,$47,$48,$49,$4A,$4B,$4C,$4D,$4E,$4F
DB $50,$51,$52,$53,$54,$55,$56,$57,$58,$59,$5A,$5B,$5C,$5D,$5E,$5F
DB $60,$61,$62,$63,$64,$65,$66,$67,$68,$69,$6A,$6B,$6C,$6D,$6E,$6F
DB $70,$71,$72,$73,$74,$75,$76,$77,$78,$79,$7A,$7B,$7C,$7D,$7E,$7F

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

font_tile_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $0C,$0C,$0C,$0C,$0C,$0C,$18,$18,$18,$18,$18,$18,$00,$00,$30,$30
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $08,$08,$3E,$3E,$68,$68,$3C,$3C,$16,$16,$7C,$7C,$10,$10,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $3C,$3C,$66,$66,$6E,$6E,$7E,$7E,$76,$76,$66,$66,$3C,$3C,$00,$00
DB $38,$38,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$3C,$3C,$00,$00
DB $3C,$3C,$66,$66,$06,$06,$1C,$1C,$30,$30,$60,$60,$7E,$7E,$00,$00
DB $3C,$3C,$66,$66,$06,$06,$1C,$1C,$06,$06,$66,$66,$3C,$3C,$00,$00
DB $60,$60,$6C,$6C,$6C,$6C,$7E,$7E,$0C,$0C,$0C,$0C,$0C,$0C,$00,$00
DB $7E,$7E,$60,$60,$60,$60,$3C,$3C,$06,$06,$66,$66,$3C,$3C,$00,$00
DB $3C,$3C,$66,$66,$60,$60,$7C,$7C,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $7E,$7E,$06,$06,$06,$06,$0E,$0E,$1C,$1C,$18,$18,$18,$18,$00,$00
DB $3C,$3C,$66,$66,$66,$66,$3C,$3C,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $3C,$3C,$66,$66,$66,$66,$3E,$3E,$06,$06,$66,$66,$3C,$3C,$00,$00
DB $00,$00,$00,$00,$18,$18,$18,$18,$00,$00,$18,$18,$18,$18,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $3C,$3C,$66,$66,$06,$06,$0C,$0C,$18,$18,$18,$18,$00,$00,$18,$18
DB $3C,$3C,$42,$42,$9D,$9D,$A5,$A5,$A5,$A5,$9B,$9B,$40,$40,$3C,$3C
DB $3C,$3C,$66,$66,$66,$66,$7E,$7E,$66,$66,$66,$66,$66,$66,$00,$00
DB $7C,$7C,$66,$66,$66,$66,$7C,$7C,$66,$66,$66,$66,$7C,$7C,$00,$00
DB $3C,$3C,$66,$66,$60,$60,$60,$60,$60,$60,$66,$66,$3C,$3C,$00,$00
DB $7C,$7C,$66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$7C,$7C,$00,$00
DB $7E,$7E,$60,$60,$60,$60,$78,$78,$60,$60,$60,$60,$7E,$7E,$00,$00
DB $7E,$7E,$60,$60,$60,$60,$78,$78,$60,$60,$60,$60,$60,$60,$00,$00
DB $3C,$3C,$66,$66,$60,$60,$6E,$6E,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $66,$66,$66,$66,$66,$66,$7E,$7E,$66,$66,$66,$66,$66,$66,$00,$00
DB $3C,$3C,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$3C,$3C,$00,$00
DB $7E,$7E,$06,$06,$06,$06,$06,$06,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $66,$66,$66,$66,$6C,$6C,$78,$78,$6C,$6C,$66,$66,$66,$66,$00,$00
DB $60,$60,$60,$60,$60,$60,$60,$60,$60,$60,$60,$60,$7E,$7E,$00,$00
DB $63,$63,$77,$77,$6B,$6B,$6B,$6B,$63,$63,$63,$63,$63,$63,$00,$00
DB $63,$63,$73,$73,$6B,$6B,$6B,$6B,$67,$67,$63,$63,$63,$63,$00,$00
DB $3C,$3C,$66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $7C,$7C,$66,$66,$66,$66,$7C,$7C,$60,$60,$60,$60,$60,$60,$00,$00
DB $3C,$3C,$66,$66,$66,$66,$66,$66,$66,$66,$6E,$6E,$3C,$3C,$06,$06
DB $7C,$7C,$66,$66,$66,$66,$7C,$7C,$66,$66,$66,$66,$66,$66,$00,$00
DB $3C,$3C,$66,$66,$60,$60,$3C,$3C,$06,$06,$66,$66,$3C,$3C,$00,$00
DB $7E,$7E,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$00,$00
DB $66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$3C,$3C,$00,$00
DB $66,$66,$66,$66,$66,$66,$66,$66,$66,$66,$3C,$3C,$18,$18,$00,$00
DB $63,$63,$63,$63,$63,$63,$6B,$6B,$6B,$6B,$6B,$6B,$36,$36,$00,$00
DB $66,$66,$66,$66,$2C,$2C,$18,$18,$34,$34,$66,$66,$66,$66,$00,$00
DB $66,$66,$66,$66,$66,$66,$3C,$3C,$18,$18,$18,$18,$18,$18,$00,$00
DB $7E,$7E,$06,$06,$04,$04,$18,$18,$20,$20,$60,$60,$7E,$7E,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$3C,$3C,$64,$64,$64,$64,$64,$64,$3A,$3A,$00,$00
DB $00,$00,$60,$60,$6C,$6C,$72,$72,$62,$62,$62,$62,$7C,$7C,$00,$00
DB $00,$00,$00,$00,$3C,$3C,$62,$62,$60,$60,$62,$62,$3C,$3C,$00,$00
DB $00,$00,$06,$06,$3E,$3E,$46,$46,$46,$46,$46,$46,$3E,$3E,$00,$00
DB $00,$00,$00,$00,$3C,$3C,$62,$62,$7E,$7E,$60,$60,$3E,$3E,$00,$00
DB $00,$00,$1C,$1C,$32,$32,$30,$30,$38,$38,$30,$30,$30,$30,$00,$00
DB $00,$00,$00,$00,$3C,$3C,$66,$66,$3E,$3E,$06,$06,$46,$46,$3C,$3C
DB $00,$00,$60,$60,$6C,$6C,$72,$72,$62,$62,$62,$62,$62,$62,$00,$00
DB $00,$00,$18,$18,$00,$00,$18,$18,$18,$18,$18,$18,$18,$18,$00,$00
DB $00,$00,$18,$18,$00,$00,$18,$18,$18,$18,$18,$18,$18,$18,$30,$30
DB $00,$00,$60,$60,$66,$66,$78,$78,$64,$64,$66,$66,$66,$66,$00,$00
DB $00,$00,$18,$18,$18,$18,$18,$18,$18,$18,$18,$18,$0C,$0C,$00,$00
DB $00,$00,$00,$00,$34,$34,$6A,$6A,$6A,$6A,$6A,$6A,$6A,$6A,$00,$00
DB $00,$00,$00,$00,$18,$18,$34,$34,$34,$34,$34,$34,$34,$34,$00,$00
DB $00,$00,$00,$00,$3C,$3C,$62,$62,$62,$62,$62,$62,$3C,$3C,$00,$00
DB $00,$00,$00,$00,$6C,$6C,$72,$72,$62,$62,$7C,$7C,$60,$60,$60,$60
DB $00,$00,$00,$00,$36,$36,$4E,$4E,$46,$46,$3E,$3E,$06,$06,$07,$07
DB $00,$00,$00,$00,$6C,$6C,$72,$72,$60,$60,$60,$60,$60,$60,$00,$00
DB $00,$00,$00,$00,$3E,$3E,$60,$60,$3C,$3C,$06,$06,$7C,$7C,$00,$00
DB $00,$00,$18,$18,$18,$18,$3C,$3C,$18,$18,$18,$18,$0C,$0C,$00,$00
DB $00,$00,$00,$00,$64,$64,$64,$64,$64,$64,$64,$64,$3A,$3A,$00,$00
DB $00,$00,$00,$00,$34,$34,$34,$34,$34,$34,$34,$34,$18,$18,$00,$00
DB $00,$00,$00,$00,$62,$62,$6A,$6A,$6A,$6A,$6A,$6A,$34,$34,$00,$00
DB $00,$00,$00,$00,$66,$66,$2C,$2C,$18,$18,$34,$34,$66,$66,$00,$00
DB $00,$00,$00,$00,$46,$46,$46,$46,$3E,$3E,$06,$06,$46,$46,$3C,$3C
DB $00,$00,$00,$00,$7E,$7E,$06,$06,$3C,$3C,$60,$60,$7E,$7E,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
