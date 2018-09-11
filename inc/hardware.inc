IF !DEF(HARDWARE_INC)
HARDWARE_INC SET 1

; Naming conventions:
; r{name} - hardware register
; {name}F - register flag
; (R/W)   - read/write
; (R)     - read only
; (W)     - write only
; (DMG)   - non Gameboy Color mode only
; (CGB)   - Gameboy Color mode only

; Video controller.

SCRN0		EQU $9800
SCRN1		EQU $9c00

rLCDC		EQU $ff40 ; (R/W) LCD Control register.

; LCD Power.
LCDCF_OFF	EQU %00000000
LCDCF_ON	EQU %10000000
; Window tile map.
LCDCF_WIN9800	EQU %00000000
LCDCF_WIN9C00	EQU %01000000
; Window enable.
LCDCF_WIN_OFF	EQU %00000000
LCDCF_WIN_ON	EQU %00100000
; Background & window tileset.
LCDCF_TSET8800	EQU %00000000
LCDCF_TSET8000	EQU %00010000
; Background tile map.
LCDCF_BGD9800	EQU %00000000
LCDCF_BGD9C00	EQU %00001000
; Sprite size.
LCDCF_SPR8	EQU %00000000
LCDCF_SPR16	EQU %00000100
; Sprite enable.
LCDCF_SPR_OFF	EQU %00000000
LCDCF_SPR_ON	EQU %00000010
; Background enable.
LCDCF_BGD_OFF	EQU %00000000
LCDCF_BGD_ON	EQU %00000001

rLY		EQU $ff44 ; (R)   LCD Current Scanline register.

LYF_VB		EQU $90   ; Vertical blank mode.

rLYC		EQU $ff56 ; (R/W) LY Compare register.
rSTAT		EQU $ff41 ; (R/W) LCD Status register.

STATF_LYC	EQU %01000000
STATF_MODE2	EQU %00100000
STATF_MODE1	EQU %00010000
STATF_MODE0	EQU %00001000
STATF_LYCS	EQU %00000100 ; (R)
; Screen mode (R).
STATF_HB	EQU %00000000 ; (R) H-blank.
STATF_VB	EQU %00000001 ; (R) V-blank.
STATF_OAM	EQU %00000010 ; (R) Searching OAM.
STATF_LCD	EQU %00000011 ; (R) Transferring data to LCD.

rSCY		EQU $ff42 ; (R/W) BG Scroll Y register.
rSCX		EQU $ff43 ; (R/W) BG Scroll X register.

rWY		EQU $ff4a ; (R/W) Window Y position register.
rWX		EQU $ff4b ; (R/W) Window X position register.

rBGP		EQU $ff47 ; (DMG) (R/W) BG Palette data register.
rOBP0		EQU $ff48 ; (DMG) (R/W) OBJ Palette 0 data register.
rOBP1		EQU $ff49 ; (DMG) (R/W) OBJ Palette 1 data register.

rDMA		EQU $ff46 ; (W)   OAM DMA Transfer register.

; Joypad.

rJP1		EQU $ff00
JP1F_BUTTONS	EQU $10
JP1F_DPAD	EQU $20

JP1F_DOWN	EQU %10000000
JP1F_UP		EQU %01000000
JP1F_LEFT	EQU %00100000
JP1F_RIGHT	EQU %00010000

JP1F_START	EQU %00001000
JP1F_SELECT	EQU %00000100
JP1F_B		EQU %00000010
JP1F_A		EQU %00000001

; Interrupts.

rIF		EQU $ff0f ; (R/W) Interrupt Flag register.

IFF_VBLANK	EQU %00000001 ; INT $40.
IFF_LCDC	EQU %00000010 ; INT $48.
IFF_TIMER	EQU %00000100 ; INT $50.
IFF_SERIAL	EQU %00001000 ; INT $58.
IFF_JOYPAD	EQU %00010000 ; INT $60.

rIE		EQU $ffff ; (R/W) Interrupt Enable register.

IEF_VBLANK	EQU %00000001 ; INT $40.
IEF_LCDC	EQU %00000010 ; INT $48.
IEF_TIMER	EQU %00000100 ; INT $50.
IEF_SERIAL	EQU %00001000 ; INT $58.
IEF_JOYPAD	EQU %00010000 ; INT $60.

ENDC ; HARDWARE_INC
