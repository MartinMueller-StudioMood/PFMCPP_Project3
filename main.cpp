/*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
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

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  



 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

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

struct Delay       
{
    //has time knob
    int timeKnob = 63; //3) member variables with relevant data types.
    //has feedback knob
    float feedback = 127.0f; //3) member variables with relevant data types.
    //has repeat knob
    int repeat = 10; //3) member variables with relevant data types.
    //has spread knob
    int spread = 50; //3) member variables with relevant data types.
    //has dry/wet knob
    int dryWet = 100; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Echo   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAnabled = false;
        float echoTime = 20.0f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void repeatSignal(double echoSpeed = 3.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) repeat signal
    void repeatSignal( Echo echo );
    //2) feedback the signal
    float feedbackSignal();
    //2) spread the signal
    void spreadSignal( Echo echo );
    
               
    //5) a member variable whose type is a UDT.
    Echo echoRunning;  
};

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

struct Filter       
{
    //has frequence knob
    float frequenceKnob = 12456.58f; //3) member variables with relevant data types.
    //has resonance knob
    float resonanceKnob = 127.0f; //3) member variables with relevant data types.
    //has modulation knob
    int modulationKnob = 127; //3) member variables with relevant data types.
    //has lfo knob
    int lfoKnob = 127; //3) member variables with relevant data types.
    //has filter typ knob
    int filterTypKnob = 100; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Bandpass   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAnabled = false;
        float bandFrequency = 10.0f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void filterSignal(double resonanceAmount = 3.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) cut out frequencies
    void cutSignal( Filter filter );
    //2) modulate frequencies
    float modulateFrequencies();
    //2) color the sound
    void colorSound( Filter filter );
    
               
    //5) a member variable whose type is a UDT.
    Bandpass bandpassRunning;  
};


/*
3) Phaser
5 properties:
    1) poles
    2) color
    3) envelope
    4) lfo
    5) feedback
3 things it can do:
    1) phasing sounds
    2) make stereo effects
    3) manipulate the sound with lfo
 */

struct Phaser       
{
    //has poles knob
    int polesKnob = 5; //3) member variables with relevant data types.
    //has color knob
    float colorKnob = 127.0f; //3) member variables with relevant data types.
    //has modulation knob
    int envelopeKnob = 127; //3) member variables with relevant data types.
    //has lfo knob
    int lfoKnob = 127; //3) member variables with relevant data types.
    //has feedback knob
    int feedbackKnob = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) phasing sounds
    void phasingSound();
    //2) make stereo effects
    void stereoEffects();
    //2) manipulate the sound with lfo
    void lfo();

};



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

struct DrumMachine       
{
    //has bassdrum
    int bassdrum = 12; //3) member variables with relevant data types.
    //has snare
    int snare = 8; //3) member variables with relevant data types.
    //has tom
    int tom = 4; //3) member variables with relevant data types.
    //has hihat
    int hihat = 5; //3) member variables with relevant data types.
    //has sequencer
    int sequencer = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) create drumsounds
    void drumSounds();
    //2) make grooves
    void grooves();
    //2) send midi 
    void sendMidi();

};

/*
5) Oscillator
5 properties:
    1) volume
    2) sin
    3) square
    4) triangle
    5) noise
3 things it can do:
    1) create waveforms
    2) design sounds
    3) change volume
 */

struct Oscillator       
{
    //has volume
    int volume = 127; //3) member variables with relevant data types.
    //has sin
    int sin = 127; //3) member variables with relevant data types.
    //has square
    int square = 23; //3) member variables with relevant data types.
    //has triangle
    int triangle = 27; //3) member variables with relevant data types.
    //has noise
    int noise = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) create waveforms
    void waveform();
    //2) design sounds
    void sounds();
    //2) change volume 
    void changeVolume();

};

 /*
6) Adsr
5 properties:
    1) attack
    2) decay
    3) sustain
    4) release
    5) amount
3 things it can do:
    1) define attack of a sound
    2) decay a sound
    3) define the release of a sound
 */

struct Adsr       
{
    //has attack
    int attack = 127; //3) member variables with relevant data types.
    //has decay
    int decay = 127; //3) member variables with relevant data types.
    //has sustain
    int sustain = 23; //3) member variables with relevant data types.
    //has release
    int release = 27; //3) member variables with relevant data types.
    //has amount
    int amount = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) define attack of a sound
    void changeAttack();
    //2) decay a sound
    void changeDecay();
    //2) define the release of a sound
    void changeRelease();

};

 /*
7) Midi
5 properties:
    1) value
    2) channel
    3) input
    4) output
    5) sync type
3 things it can do:
    1) send midi
    2) receive midi
    3) controll instruments
 */

struct Midi       
{
    //has value
    int value = 127; //3) member variables with relevant data types.
    //has channel
    int channel = 127; //3) member variables with relevant data types.
    //has input
    int input = 127; //3) member variables with relevant data types.
    //has output
    int output = 127; //3) member variables with relevant data types.
    //has sync type
    int syncType = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) send midi
    void sendMidi();
    //2) receive midi
    void receiveMidi();
    //2) controll instruments
    void controllInstrument();

};

 /*
8) Lfo
5 properties:
    1) rate
    2) amount
    3) waveform
    4) adsr
    5) retrigger
3 things it can do:
    1) create waveform
    2) controll other parameters with waveform
    3) define waveform with adsr
 */

struct Lfo       
{
    //has rate
    int rate = 127; //3) member variables with relevant data types.
    //has amount
    int amount = 127; //3) member variables with relevant data types.
    //has waveform
    int waveform = 127; //3) member variables with relevant data types.
    //has adsr
    int adsr = 127; //3) member variables with relevant data types.
    //has retrigger
    int retrigger = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) create waveform
    void createWaveform();
    //2) controll other parameters with waveform
    void sendWaveform();
    //2) define waveform with adsr
    void defineWaveformAdsr();
};

 /*
9) Sampler
5 properties:
    1) sample slot
    2) start
    3) loop
    4) lenght
    5) fade
3 things it can do:
    1) play sample
    2) set start point
    3) loop sound
 */

struct Sampler       
{
    //has sample slot
    int sampleSlot = 127; //3) member variables with relevant data types.
    //has start
    int start = 127; //3) member variables with relevant data types.
    //has loop
    int loop = 127; //3) member variables with relevant data types.
    //has lenght
    int lenght = 127; //3) member variables with relevant data types.
    //has fade
    int fade = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) play sample
    void playSample();
    //2) set start point
    void setStartPoint();
    //2) loop sound
    void loopSound();
};

/*
Thing 10) Synthesizer
5 properties:
    1) oscillator
    2) adsr
    3) filter
    4) midi 
    5) lfo
3 things it can do:
    1) create sounds
    2) send midi
    3) manipulate the sound with adsr evelopes
 */

 struct Synthesizer       
{
    //has oscillator
    Oscillator oscillator; //3) member variables with relevant data types.
    //has adsr
    Adsr adsr; //3) member variables with relevant data types.
    //has filter
    Filter filter; //3) member variables with relevant data types.
    //has midi
    Midi midi; //3) member variables with relevant data types.
    //has lfo
    Lfo lfo; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) create sounds
    void createSounds();
    //2) send midi
    void sendMidi();
    //2) manipulate the sound with adsr evelopes
    void manipulateSoundAdsr();
};


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
