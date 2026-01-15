/*
 * Header file to load buttons for Keeping Carbon Stored
 * Calico Rose
 * October 20, 2025
 * Loading and setting up the buttons associated with the tiles that are
 * stomped on for the game.
 */

#include <Arduino.h>
#include <Bounce2.h>

// Define pins for the tiles on row A.
#define A1_PIN 0
#define A2_PIN 1
/*#define A3_PIN 1
#define A4_PIN 1
#define A5_PIN 1

// Define pins for the tiles on row B.
#define B1_PIN 1
#define B2_PIN 1
#define B3_PIN 1
#define B4_PIN 1
#define B5_PIN 1

// Define pins for the tiles on row C.
#define C1_PIN 1
#define C2_PIN 1
#define C3_PIN 1
#define C4_PIN 1
#define C5_PIN 1

// Define pins for the tiles on row D.
#define D1_PIN 1
#define D2_PIN 1
#define D3_PIN 1
#define D4_PIN 1
#define D5_PIN 1

// Define pins for the tiles on row E.
#define E1_PIN 1
#define E2_PIN 1
#define E3_PIN 1
#define E4_PIN 1
#define E5_PIN 1

// Define pins for the tiles on row F (ADA row).
#define F1_PIN 1
#define F2_PIN 1
#define F3_PIN 1
#define F4_PIN 1
#define F5_PIN 1 */

// Create button object for each tile in row A.
Bounce2::Button A1_Tile = Bounce2::Button();
Bounce2::Button A2_Tile = Bounce2::Button();
/*Bounce2::Button A3_Tile = Bounce2::Button();
Bounce2::Button A4_Tile = Bounce2::Button();
Bounce2::Button A5_Tile = Bounce2::Button();

// Create button object for each tile in row B.
Bounce2::Button B1_Tile = Bounce2::Button();
Bounce2::Button B2_Tile = Bounce2::Button();
Bounce2::Button B3_Tile = Bounce2::Button();
Bounce2::Button B4_Tile = Bounce2::Button();
Bounce2::Button B5_Tile = Bounce2::Button();

// Create button object for each tile in row C.
Bounce2::Button C1_Tile = Bounce2::Button();
Bounce2::Button C2_Tile = Bounce2::Button();
Bounce2::Button C3_Tile = Bounce2::Button();
Bounce2::Button C4_Tile = Bounce2::Button();
Bounce2::Button C5_Tile = Bounce2::Button();

// Create button object for each tile in row D.
Bounce2::Button D1_Tile = Bounce2::Button();
Bounce2::Button D2_Tile = Bounce2::Button();
Bounce2::Button D3_Tile = Bounce2::Button();
Bounce2::Button D4_Tile = Bounce2::Button();
Bounce2::Button D5_Tile = Bounce2::Button();

// Create button object for each tile in row E.
Bounce2::Button E1_Tile = Bounce2::Button();
Bounce2::Button E2_Tile = Bounce2::Button();
Bounce2::Button E3_Tile = Bounce2::Button();
Bounce2::Button E4_Tile = Bounce2::Button();
Bounce2::Button E5_Tile = Bounce2::Button();

// Create button object for each tile in row F (ADA row).
Bounce2::Button F1_Tile = Bounce2::Button();
Bounce2::Button F2_Tile = Bounce2::Button();
Bounce2::Button F3_Tile = Bounce2::Button();
Bounce2::Button F4_Tile = Bounce2::Button();
Bounce2::Button F5_Tile = Bounce2::Button(); */

// Set up each button (tile) in each row, attach to correct pin, set interval, set state.
bool setupButtons()
{
    // Attach each tile in row A to the correct pin.
    A1_Tile.attach(A1_PIN, INPUT_PULLUP);
    A2_Tile.attach(A2_PIN, INPUT_PULLUP);
    /*A3_Tile.attach(A3_PIN, INPUT_PULLUP);
    A4_Tile.attach(A4_PIN, INPUT_PULLUP);
    A5_Tile.attach(A5_PIN, INPUT_PULLUP);

    // Attach each tile in row B to the correct pin.
    B1_Tile.attach(B1_PIN, INPUT_PULLUP);
    B2_Tile.attach(B2_PIN, INPUT_PULLUP);
    B3_Tile.attach(B3_PIN, INPUT_PULLUP);
    B4_Tile.attach(B4_PIN, INPUT_PULLUP);
    B5_Tile.attach(B5_PIN, INPUT_PULLUP);

    // Attach each tile in row C to the correct pin.
    C1_Tile.attach(C1_PIN, INPUT_PULLUP);
    C2_Tile.attach(C2_PIN, INPUT_PULLUP);
    C3_Tile.attach(C3_PIN, INPUT_PULLUP);
    C4_Tile.attach(C4_PIN, INPUT_PULLUP);
    C5_Tile.attach(C5_PIN, INPUT_PULLUP);

    // Attach each tile in row D to the correct pin.
    D1_Tile.attach(D1_PIN, INPUT_PULLUP);
    D2_Tile.attach(D2_PIN, INPUT_PULLUP);
    D3_Tile.attach(D3_PIN, INPUT_PULLUP);
    D4_Tile.attach(D4_PIN, INPUT_PULLUP);
    D5_Tile.attach(D5_PIN, INPUT_PULLUP);

    // Attach each tile in row E to the correct pin.
    E1_Tile.attach(E1_PIN, INPUT_PULLUP);
    E2_Tile.attach(E2_PIN, INPUT_PULLUP);
    E3_Tile.attach(E3_PIN, INPUT_PULLUP);
    E4_Tile.attach(E4_PIN, INPUT_PULLUP);
    E5_Tile.attach(E5_PIN, INPUT_PULLUP);

    // Attach each tile in row F (ADA row) to the correct pin.
    F1_Tile.attach(F1_PIN, INPUT_PULLUP);
    F2_Tile.attach(F2_PIN, INPUT_PULLUP);
    F3_Tile.attach(F3_PIN, INPUT_PULLUP);
    F4_Tile.attach(F4_PIN, INPUT_PULLUP);
    F5_Tile.attach(F5_PIN, INPUT_PULLUP);
    */

    // Debounce the button interval in milliseconds.
    A1_Tile.interval(5);
    A2_Tile.interval(5);
    /*A3_Tile.interval(5);
    A4_Tile.interval(5);
    A5_Tile.interval(5);
    B1_Tile.interval(5);
    B2_Tile.interval(5);
    B3_Tile.interval(5);
    B4_Tile.interval(5);
    B5_Tile.interval(5);
    C1_Tile.interval(5);
    C2_Tile.interval(5);
    C3_Tile.interval(5);
    C4_Tile.interval(5);
    C5_Tile.interval(5);
    D1_Tile.interval(5);
    D2_Tile.interval(5);
    D3_Tile.interval(5);
    D4_Tile.interval(5);
    D5_Tile.interval(5);
    E1_Tile.interval(5);
    E2_Tile.interval(5);
    E3_Tile.interval(5);
    E4_Tile.interval(5);
    E5_Tile.interval(5);
    F1_Tile.interval(5);
    F2_Tile.interval(5);
    F3_Tile.interval(5);
    F4_Tile.interval(5);
    F5_Tile.interval(5); */

    // Indicate that the low state corresponds when the button is physically pressed.
    A1_Tile.setPressedState(LOW);
    A2_Tile.setPressedState(LOW);
    /*A3_Tile.setPressedState(LOW);
    A4_Tile.setPressedState(LOW);
    A5_Tile.setPressedState(LOW);
    B1_Tile.setPressedState(LOW);
    B2_Tile.setPressedState(LOW);
    B3_Tile.setPressedState(LOW);
    B4_Tile.setPressedState(LOW);
    B5_Tile.setPressedState(LOW);
    C1_Tile.setPressedState(LOW);
    C2_Tile.setPressedState(LOW);
    C3_Tile.setPressedState(LOW);
    C4_Tile.setPressedState(LOW);
    C5_Tile.setPressedState(LOW);
    D1_Tile.setPressedState(LOW);
    D2_Tile.setPressedState(LOW);
    D3_Tile.setPressedState(LOW);
    D4_Tile.setPressedState(LOW);
    D5_Tile.setPressedState(LOW);
    E1_Tile.setPressedState(LOW);
    E2_Tile.setPressedState(LOW);
    E3_Tile.setPressedState(LOW);
    E4_Tile.setPressedState(LOW);
    E5_Tile.setPressedState(LOW);
    F1_Tile.setPressedState(LOW);
    F2_Tile.setPressedState(LOW);
    F3_Tile.setPressedState(LOW);
    F4_Tile.setPressedState(LOW);
    F5_Tile.setPressedState(LOW); */

    // Check a few tiles to verify that they were correctly set, return true if correct.
    if (A1_Tile.getPin() == A1_PIN)
    // B1_Tile.getPin() == B1_PIN &&
    // C1_Tile.getPin() == C1_PIN &&
    // D1_Tile.getPin() == D1_PIN &&
    // E1_Tile.getPin() == E1_PIN &&
    // F1_Tile.getPin() == F1_PIN
    {
        return true;
    }

    return false;
}

// Update the buttons. Should be called at the beginning of the main loop.
void updateButtons()
{
    // Update each button in row A.
    A1_Tile.update();
    A2_Tile.update();
    /*A3_Tile.update();
    A4_Tile.update();
    A5_Tile.update();

    // Update each button in row B.
    B1_Tile.update();
    B2_Tile.update();
    B3_Tile.update();
    B4_Tile.update();
    B5_Tile.update();

    // Update each button in row C.
    C1_Tile.update();
    C2_Tile.update();
    C3_Tile.update();
    C4_Tile.update();
    C5_Tile.update();

    // Update each button in row D.
    D1_Tile.update();
    D2_Tile.update();
    D3_Tile.update();
    D4_Tile.update();
    D5_Tile.update();

    // Update each button in row E.
    E1_Tile.update();
    E2_Tile.update();
    E3_Tile.update();
    E4_Tile.update();
    E5_Tile.update();

    // Update each button in row F (ADA row).
    F1_Tile.update();
    F2_Tile.update();
    F3_Tile.update();
    F4_Tile.update();
    F5_Tile.update(); */
}