#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Example : public olc::PixelGameEngine {
    public:
        Example() {
            sAppName = "Example";
        }

    public:
        bool OnUserCreate() override {
            // Called once at the start, so create things here
            return true;
        }

        bool OnUserUpdate(float fElapsedTime) override {
            Clear(olc::BLACK);
            
            if(GetKey(olc::Key::A).bHeld) {
                 DrawString(0,0,"A",olc::WHITE,1);
            }
            if(GetKey(olc::Key::B).bHeld) {
                 DrawString(0,0,"B",olc::WHITE,1);
            }
            if(GetKey(olc::Key::C).bHeld) {
                 DrawString(0,0,"C",olc::WHITE,1);
            }
            if(GetKey(olc::Key::D).bHeld) {
                 DrawString(0,0,"D",olc::WHITE,1);
            }
            if(GetKey(olc::Key::E).bHeld) {
                 DrawString(0,0,"E",olc::WHITE,1);
            }
            if(GetKey(olc::Key::F).bHeld) {
                 DrawString(0,0,"F",olc::WHITE,1);
            }
            if(GetKey(olc::Key::G).bHeld) {
                 DrawString(0,0,"G",olc::WHITE,1);
            }
            if(GetKey(olc::Key::H).bHeld) {
                 DrawString(0,0,"H",olc::WHITE,1);
            }
            if(GetKey(olc::Key::I).bHeld) {
                 DrawString(0,0,"I",olc::WHITE,1);
            }
            if(GetKey(olc::Key::J).bHeld) {
                 DrawString(0,0,"K",olc::WHITE,1);
            }
            if(GetKey(olc::Key::L).bHeld) {
                 DrawString(0,0,"L",olc::WHITE,1);
            }
            if(GetKey(olc::Key::M).bHeld) {
                 DrawString(0,0,"M",olc::WHITE,1);
            }
            if(GetKey(olc::Key::N).bHeld) {
                 DrawString(0,0,"N",olc::WHITE,1);
            }
            if(GetKey(olc::Key::O).bHeld) {
                 DrawString(0,0,"O",olc::WHITE,1);
            }
            if(GetKey(olc::Key::P).bHeld) {
                 DrawString(0,0,"P",olc::WHITE,1);
            }
            if(GetKey(olc::Key::Q).bHeld) {
                 DrawString(0,0,"Q",olc::WHITE,1);
            }
            if(GetKey(olc::Key::R).bHeld) {
                 DrawString(0,0,"R",olc::WHITE,1);
            }
            if(GetKey(olc::Key::S).bHeld) {
                 DrawString(0,0,"S",olc::WHITE,1);
            }
            if(GetKey(olc::Key::T).bHeld) {
                 DrawString(0,0,"T",olc::WHITE,1);
            }
            if(GetKey(olc::Key::U).bHeld) {
                 DrawString(0,0,"U",olc::WHITE,1);
            }
            if(GetKey(olc::Key::V).bHeld) {
                 DrawString(0,0,"W",olc::WHITE,1);
            }
            if(GetKey(olc::Key::X).bHeld) {
                 DrawString(0,0,"X",olc::WHITE,1);
            }
            if(GetKey(olc::Key::Y).bHeld) {
                 DrawString(0,0,"Y",olc::WHITE,1);
            }
            if(GetKey(olc::Key::Z).bHeld) {
                 DrawString(0,0,"Z",olc::WHITE,1);
            }
            if(GetKey(olc::Key::UP).bHeld) {
                 DrawString(0,0,"UP",olc::WHITE,1);
            }
            if(GetKey(olc::Key::DOWN).bHeld) {
                 DrawString(0,0,"DOWN",olc::WHITE,1);
            }
            if(GetKey(olc::Key::LEFT).bHeld) {
                 DrawString(0,0,"LEFT",olc::WHITE,1);
            }
            if(GetKey(olc::Key::RIGHT).bHeld) {
                 DrawString(0,0,"RIGHT",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K0).bHeld) {
                 DrawString(0,0,"0",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K1).bHeld) {
                 DrawString(0,0,"1",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K2).bHeld) {
                 DrawString(0,0,"2",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K3).bHeld) {
                 DrawString(0,0,"3",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K4).bHeld) {
                 DrawString(0,0,"4",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K5).bHeld) {
                 DrawString(0,0,"5",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K6).bHeld) {
                 DrawString(0,0,"6",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K7).bHeld) {
                 DrawString(0,0,"7",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K8).bHeld) {
                 DrawString(0,0,"8",olc::WHITE,1);
            }
            if(GetKey(olc::Key::K9).bHeld) {
                 DrawString(0,0,"9",olc::WHITE,1);
            }
            
            return true;
        }
};


int main(int argc, char const *argv[]) {
	Example demo;
	if (demo.Construct(50, 10, 4, 4))
		demo.Start();

	return 0;
}
