#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
RIDLEY GAMEBOY EMULATOR
VERSION 0.0.0

Contains:
- GUI that loads on startup of the GC
- Recompiler that takes the selected ROM and changes it from SHARP assembly to some sort of assembly
- GameBoy Runtime that will play the recompiled ROM
- Clock modifier that will control the chip's clock speed to match that of the GB's exactly.

DISCLAIMER:
- This program does will not emulate all of the original GameBoy's properties exactly. All it needs is a clock speed modifier
    to match the speed of the original GB. Certain things like ROM bank switching do not need to be recreated and can be looked
    over, as the code that will activate them still technically point to the correct area in the ROM. Things like TASs and any%
    SpeedRuns should still work on this emulator. ACE may not work and will have to be modified as the processor will not read
    code in Sharp ASM (No on-the-spot recompiler).
*/
int main()
{
    char bios_rom[256];
    char game_rom[256];

    gets(bios_rom);

    gets(game_rom);

    return 0;
}

