 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1EVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.


 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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


struct Delay       
{
    //has time knob
    int timeKnob = 63; //3) member variables with relevant data types.
    //has feedback knob
    float feedback = 127.0f; //3) member variables with relevant data types.
    //has repeat knob
    int repeat = 10; //3) member variables with relevant data types.
    //has spread knob
    double spread = 50.0; //3) member variables with relevant data types.
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
    int repeatSignal( Echo echo );
    //2) feedback the signal
    float feedbackSignal();
    //2) spread the signal
    double spreadSignal( Echo echo );
    
               
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
    double modulationKnob = 127.0; //3) member variables with relevant data types.
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
        double filterSignal(double resonanceAmount = 3.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) cut out frequencies
    int cutSignal( Filter filter );
    //2) modulate frequencies
    float modulateFrequencies();
    //2) color the sound
    float colorSound( Filter filter );
    
               
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
    double polesKnob = 5; //3) member variables with relevant data types.
    //has color knob
    float colorKnob = 127.0f; //3) member variables with relevant data types.
    //has modulation knob
    int envelopeKnob = 127; //3) member variables with relevant data types.
    //has lfo knob
    float lfoKnob = 127.0f; //3) member variables with relevant data types.
    //has feedback knob
    int feedbackKnob = 127; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) phasing sounds
    int phasingSound();
    //2) make stereo effects
    void stereoEffects();
    //2) manipulate the sound with lfo
    double lfo(double time);

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
    int drumSounds();
    //2) make grooves
    int grooves();
    //2) send midi 
    bool sendMidi();

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
    double sin = 127.0; //3) member variables with relevant data types.
    //has square
    double square = 23.0; //3) member variables with relevant data types.
    //has triangle
    double triangle = 27.0; //3) member variables with relevant data types.
    //has noise
    float noise = 127.0f; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) create waveforms
    int waveform();
    //2) design sounds
    bool sounds();
    //2) change volume 
    int changeVolume();

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
    float amount = 127.0; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) define attack of a sound
    int changeAttack();
    //2) decay a sound
    int changeDecay();
    //2) define the release of a sound
    int changeRelease();

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
    bool syncType = true; //3) member variables with relevant data types.

    struct MidiMessage   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAnabled = false;
        int midiChannel = 1;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void sendSignal(int midiMessage);   
    };
    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) send midi
    void sendMidi(MidiMessage);
    //2) receive midi
    void receiveMidi(MidiMessage);
    //2) controll instruments
    void controllInstrument(MidiMessage);

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
    float waveform = 127.0; //3) member variables with relevant data types.
    //has adsr
    int adsr = 127; //3) member variables with relevant data types.
    //has retrigger
    double retrigger = 127.0; //3) member variables with relevant data types.

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) set rate
    void setRate();
    //2) get amount
    int getAmount();
    //2) get retrigger
    double getRetrigger();
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
    int startSample = 127; //3) member variables with relevant data types.
    //has loop
    bool isLooped = true; //3) member variables with relevant data types.
    //has lenght
    float loopLength = 127.0f; //3) member variables with relevant data types.
    //has fade
    double fadeLengthInMilliseconds = 127.0; //3) member variables with relevant data types.

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
