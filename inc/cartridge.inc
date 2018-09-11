IF !DEF(CARTRIDGE_INC)
CARTRIDGE_INC SET 1

; GBC compatibility flag.
GBC_MODE_UNSUPPORTED	EQU $00
GBC_MODE_COMPATIBLE	EQU $80
GBC_MODE_EXCLUSIVE	EQU $c0

; SGB compatibility flag.
SGB_MODE_UNSUPPORTED	EQU $00
SGB_MODE_SUPPORTED	EQU $03

; Cartridge mapper type.
MAPPER_NONE		EQU $00	; 32k of internal ROM.
MAPPER_MBC1		EQU $01
MAPPER_MBC1_RAM		EQU $02
MAPPER_MBC1_RAM_BAT	EQU $03
MAPPER_MBC2		EQU $05
MAPPER_MBC2_RAM_BAT	EQU $06
; TODO: define remaining popular mappers.

; Cartridge ROM size.
ROM_32K			EQU $00 ; 2 banks (no mapper required).
ROM_64K			EQU $01 ; 4 banks.
ROM_128K		EQU $02 ; 8 banks.
ROM_256K		EQU $03 ; 16 banks.
ROM_512K		EQU $04 ; 32 banks.
ROM_1M			EQU $05 ; 64 banks.
ROM_2M			EQU $06 ; 128 banks.
ROM_4M			EQU $07 ; 256 banks.
ROM_8M			EQU $08 ; 512 banks.

; Cartridge RAM size.
RAM_NONE		EQU $00
RAM_MBC2		EQU $00 ; MBC2 has an internal RAM of 512x4 bit.
RAM_2K			EQU $01
RAM_8K			EQU $02 ; 1 bank.
RAM_32K			EQU $03 ; 4 banks of 8 KiB.
RAM_128K		EQU $04 ; 16 banks of 8 KiB.
RAM_64K			EQU $05 ; 8 banks of 8 KiB.

; Region destination code.
REG_JAPAN		EQU $00
REG_INTER		EQU $01

; Licensee code.
LIC_CODE_NEW		EQU $33 ; Uses the new licensee code instead.
				; Mandatory for SGB.

ENDC ; CARTRIDGE_INC
