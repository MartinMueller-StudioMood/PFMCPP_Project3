/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};

/*
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
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




/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.

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
