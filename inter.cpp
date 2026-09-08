#include <cstdint>
#include <iostream>
#include <fstream>

const unsigned int START_ADDRESS = 0x200;
const unsigned int FONTSET_SIZE = 80;
const unsigned int FONTSET_START_ADDRESS = 0x50;

class chip{
    public:
    uint8_t registor[16]{};
    uint8_t memory[4096]{};
    uint16_t index{};
    uint16_t pc{};
    uint16_t stack[16]{};
    uint8_t sp;
    uint8_t soundtimer{};
    uint8_t displaytimer{};
    uint8_t keys[16]{};
    uint32_t video[64*32]{};
    uint16_t opcode;


    chip(uint16_t pc){
	pc = START_ADDRESS;

    for (unsigned int i = 0; i < FONTSET_SIZE; ++i)
	{
		memory[FONTSET_START_ADDRESS + i] = fontset[i];
	}

    }
    void LoadRom();

    uint8_t fontset[FONTSET_SIZE] =
        {
	0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
	0x20, 0x60, 0x20, 0x20, 0x70, // 1
	0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
	0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
	0x90, 0x90, 0xF0, 0x10, 0x10, // 4
	0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
	0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
	0xF0, 0x10, 0x20, 0x40, 0x40, // 7
	0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
	0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
	0xF0, 0x90, 0xF0, 0x90, 0x90, // A
	0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
	0xF0, 0x80, 0x80, 0x80, 0xF0, // C
	0xE0, 0x90, 0x90, 0x90, 0xE0, // D
	0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
	0xF0, 0x80, 0xF0, 0x80, 0x80  // F
    };
    
};

void chip::LoadRom(){
    std::string root = "C:\Users\Ozuss\Desktop\projects\chip8_games";
    std::ifstream file(root,std::ios::binary||std::ios::ate);
    if(file.is_open()){
        std::streampos size = file.tellg();
        char * buufer = new char[size];
        file.seekg(0, std::ios::beg);
		file.read(buufer, size);
		file.close();

        for(int i=0 ;i<size;i++){
            memory[START_ADDRESS + i] = buufer[i];
        }
        delete[]buufer;
    }
}
