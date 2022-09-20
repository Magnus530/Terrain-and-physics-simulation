#ifndef INPUT_H
#define INPUT_H

struct Input
{
    bool I{false};
    bool J{false};
    bool K{false};
    bool L{false};
    bool UP{false};     //Arrow keys
    bool DOWN{false};
    bool LEFT{false};
    bool RIGHT{false};
    bool U{false};
    bool O{false};
    bool C{false};
    bool LSHIFT{false};
    bool LCTRL{false};
    bool SPACE{false};
    bool LMB{false};    //Mouse buttons
    bool RMB{false};
    bool MMB{false};
    float MWHEEL{0.f};  //MouseWheel
    int MOUSEX{0};
    int MOUSEY{0};
};

#endif // INPUT_H
