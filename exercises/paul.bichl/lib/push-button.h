#pragma once

enum PushButtonState
{
    PUSHBUTTON_PRESSED,
    PUSHBUTTON_RELEASED,
};

class PushButton
{
    public:
        PushButton(PushButtonState state) {_state =state;};
        PushButtonState get_state() const { return _state; };
        void set_state(PushButtonState state) { _state = state; };
    private:
        PushButtonState _state;
};