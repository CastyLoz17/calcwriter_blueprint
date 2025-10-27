A hardware board that emulates keypresses on the keypad matrix of a Sharp EL-W531S II calculator.

## but... why tho?

So uh, once upon a bus ride home, I had a brain blast — a year before, I made math equations that mimicked computer logic ops like `AND`, `OR`, `NOT`, etc. Then I got spicy and added stuff like `SIGN`, `TO_BOOL`, and `EQUALS_TO`. I even hacked together `if` statements and pseudo-loops! but... I couldn’t store variables (tragic).

Eventually I realized I could abuse rounding errors and tangent’s cycly-ness to make storage actually *work*. Huge win. But typing those monster equations by hand? Pain. so the project died (rip scrap paper notes).

Then I wondered if a calculator could be turing complete (spoiler: no 💀), which spiraled into "what if I made it *automate itself*"? Thus, **Calcwriter** was born.

This project was mostly self-sponsored... until I found out that hackclub had blueprint ysws. Then I was like "wait why pay for chaos when I can get *sponsored* for chaos?"

# Project Overview:
This board is split into two parts, mainly for modularity and also to cut costs for prototyping:

## 1. The logic board:
\<Insert image of logic board here when the board is finished and finalized>

The logic board is the main component, where all the calculations and inputs are actually happening. It is powered by an Sparkfun Micro Pro (TENTATIVE: Might use a real SOC for this sooner or later) and a bunch of SPST Analog Switches for controlling inputs. Equations will be sent over by the main device through a serial connection, which also powers the board.

## 2. The Interface board:
| Front | Back | Schematics |
|---|---|---|
| <img width="300" src="https://github.com/user-attachments/assets/a9065863-5d68-4955-b512-303357b62265" alt="calcwriter_pins_back" /> | <img width="300" src="https://github.com/user-attachments/assets/a5a5f7cf-1e9c-49aa-88db-b21600a1ccd1" alt="calcwriter_pins" /> | <img height="378" alt="image" src="https://github.com/user-attachments/assets/66361d96-9ca8-4dc8-bd51-140f7b85d60c" /></br>Don't mind the lack of pin 21|


The interface board is the board that connects the logic board to the calculator. It has 39 pogo pins, each precisely placed such that when the board is placed onto the calculator, the pogo pins connects to the matrix vias of the calculator, and the connections are then extended up through a ribbon cable into the logic board for the actual controlling part. This part is seperated as it allows my logic board to stay as small as possible, and also to make it so that I dont have to waste a lot of money on 4 layers of mostly just empty boards and pogo pins.


# Images and Diagrams
TODO

# Bill Of Material:
TODO
