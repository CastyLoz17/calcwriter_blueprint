A hardware board that emulates keypresses on the keypad matrix of a Sharp EL-W531S II calculator.

## but... why tho?

So uh, once upon a bus ride home, I had a brain blast — a year before, I made math equations that mimicked computer logic ops like `AND`, `OR`, `NOT`, etc. Then I got spicy and added stuff like `SIGN`, `TO_BOOL`, and `EQUALS_TO`. I even hacked together `if` statements and pseudo-loops! but... I couldn’t store variables (tragic).

Eventually I realized I could abuse rounding errors and tangent’s cycly-ness to make storage actually *work*. Huge win. But typing those monster equations by hand? Pain. so the project died (rip scrap paper notes).

Then I wondered if a calculator could be turing complete (spoiler: no 💀), which spiraled into "what if I made it *automate itself*"? Thus, **Calcwriter** was born.

This project was mostly self-sponsored... until I found out that hackclub had blueprint ysws. Then I was like "wait why pay for chaos when I can get *sponsored* for chaos?"

# Project Overview:
This board is split into two parts, mainly for modularity and also to cut costs for prototyping:

## 1. The logic board:
| Front | Back | Schematics |
|---|---|---|
|<img width="1187" height="1491" alt="calcwriter_logic" src="https://github.com/user-attachments/assets/d0eb3e91-f031-4b1c-8d9f-3972e1d73fb6" /> | <img width="1187" height="1491" alt="calcwriter_logic_back" src="https://github.com/user-attachments/assets/c9dc7cee-a0e7-493a-be37-0089435759f4" /> | <img width="2496" height="1724" alt="image" src="https://github.com/user-attachments/assets/27de68be-ff62-4af3-b1aa-fa2882da88ed" />|



The logic board is the main component, where all the calculations and inputs are actually happening. It is powered by an ATmega32U4 and a bunch of SPST Analog Switches for controlling inputs. Equations will be sent over by the main device through a serial connection, which also powers the board.

## 2. The Interface board:
| Front | Back | Schematics |
|---|---|---|
|<img width="1187" height="1491" alt="calcwriter_pins" src="https://github.com/user-attachments/assets/6a45d1f6-7d71-4151-a713-afa36926857f" /> | <img width="1187" height="1491" alt="calcwriter_pins_back" src="https://github.com/user-attachments/assets/02ed678b-f0c6-4021-b716-a472f0748bd4" /> | <img width="1016" height="1773" alt="2025-11-03-220838_hyprshot" src="https://github.com/user-attachments/assets/2adb711a-a12c-4e13-90b1-4fa91785c997" />|



The interface board is the board that connects the logic board to the calculator. It has 39 pogo pins, each precisely placed such that when the board is placed onto the calculator, the pogo pins connects to the matrix vias of the calculator, and the connections are then extended up through a ribbon cable into the logic board for the actual controlling part. The interface board provides power to the calculator, and also provides an ISP interface to program the ATmega32U4. This part is seperated as it allows my logic board to stay as small as possible, and also to make it so that I dont have to waste a lot of money on 4 layers of mostly just empty boards and pogo pins.

# Bill Of Material:
TODO

TODO: add BOM, create a folder for each board. previews folder contain schematics .pdf, top and bottom images of both boards. remember to write basic firmware for the board. remember to print out both boards for scale. remember to make a case for the calculator, and the board.
