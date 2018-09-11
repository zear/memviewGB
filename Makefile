AS	:= rgbasm
LD	:= rgblink
FIX	:= rgbfix
GBEMU	?= bgb
TARGET	:= memview

OUTDIR	:= output
SRCROOT	:= src
SRCDIRS	:= .
INCDIR	:= inc
OBJDIR	:= $(OUTDIR)/obj
BINDIR	:= $(OUTDIR)/bin
IGNORE	:=

SRC	:= $(filter-out $(IGNORE),$(foreach dir,$(SRCDIRS),$(sort $(wildcard $(addprefix $(SRCROOT)/,$(dir))/*.z80))))
OBJ	:= $(patsubst $(SRCROOT)/%.z80,$(OBJDIR)/%.o, $(SRC))

.PHONY: all clean run

all:	$(TARGET)

$(TARGET): $(OBJ) | $(BINDIR)
	$(LD) -m $(BINDIR)/$@.map -n $(BINDIR)/$@.sym -o $(BINDIR)/$@.gb $^
	$(FIX) -p0 -v $(BINDIR)/$@.gb

$(OBJ): $(OBJDIR)/%.o: $(SRCROOT)/%.z80 | $(OBJDIR)
	mkdir -p $(@D)
	$(AS) -i $(INCDIR)/ -o $@ $<

$(BINDIR) $(OBJDIR):
	mkdir -p $@

clean:
	rm -Rf $(OUTDIR)

run: $(BINDIR)/$(TARGET).gb
	$(GBEMU) $<

