; This header contains the Nintendo logo which appears during the Game Boy start up process.
; The Game Boy boot rom compares the following 48 bytes against a copy present in the console as a security check measure.
; This data must be located in $0104 - $0133.

; NOTE: For copyright reasons, the correct values for the logo are omitted from this repository.
; In order to run your program on a real Game Boy, replace the below template with valid data.
; Emulators are usually more forgiving.

nintendo_logo:
DB $00, $00, $00, $00, $00, $00, $00, $00
DB $00, $00, $00, $00, $00, $00, $00, $00
DB $00, $00, $00, $00, $00, $00, $00, $00
DB $00, $00, $00, $00, $00, $00, $00, $00
DB $00, $00, $00, $00, $00, $00, $00, $00
DB $00, $00, $00, $00, $00, $00, $00, $00
