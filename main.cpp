/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
*/


/*
1) Delay
5 properties:
    1) time knob
    2) feedback knob
    3) repeat knob
    4) spread knob
    5) dry/wet knob
3 things it can do:
    1) repeat the signal
    2) feedback the signal
    3) spread the signal
 */


/*
2) Filter
5 properties:
    1) frequence knob
    2) resonance knob
    3) modulation knob
    4) lfo knob
    5) filter typ knob
3 things it can do:
    1) cut out frequencies 
    2) modulate frequencies
    3) color the sound 
 */


/*
3) - Synthesizer
5 properties:
    1) oscillator
    2) adsr
    3) filter
    4) midi input / output
    5) audio output
3 things it can do:
    1) create sounds
    2) send midi
    3) manipulate the sound with adsr evelopes
 */

/*
4) DrumMachine
5 properties:
    1) bassdrum
    2) snare
    3) tom
    4) hihat
    5) sequencer
3 things it can do:
    1) create drumsounds
    2) sequence grooves
    3) send midi 
 */

/*
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
