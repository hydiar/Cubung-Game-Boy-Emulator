#ifndef CUBUNG_GBEMU_CPUREGISTERS_H
#define CUBUNG_GBEMU_CPUREGISTERS_H
struct registers {  //80-Bit Register Structure
    union { //Accumulator & Flags
        struct {
            unsigned char A;
            unsigned char F;
        };
        unsigned short AF;
    };

    union {
        struct {
            unsigned char B;
            unsigned char C;
        };
        unsigned short BC;
    };

    union {
        struct {
            unsigned char D;
            unsigned char E;
        };
        unsigned short DE;
    };

    union {
        struct {
            unsigned char H;
            unsigned char L;
        };
        unsigned short HL;
    };
    unsigned short SP; //Stack pointer
    unsigned short PC; //Program counter
} extern registers;


#endif //CUBUNG_GBEMU_CPUREGISTERS_H
