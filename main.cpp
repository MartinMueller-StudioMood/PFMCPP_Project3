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

struct Person 
{
    int age;
    int height; 
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;
    float speed;


    struct Foot   
    {
        int steps;
        int size = 30;

        void stepForward()
        {
            steps++;
        }
        int stepSize()
        {
            return size;  
        }
    };

    Foot leftFoot;
    Foot rightFoot;

    void run(int howFast, bool startWithLeftFood);
};

void Person::run(int howFast, bool startWithLeftFood)
{
    if(startWithLeftFood)
    {
       leftFoot.stepForward();
       rightFoot.stepForward();
    }
    else
    {
       rightFoot.stepForward();
       leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    speed = float(howFast)*1.2f;
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */
#include <iostream>
using namespace std;

struct Delay       
{
    int timeKnob = 63;
    float feedback = 127.0f;
    int repeat = 10;
    double spread = 50.0; 
    int dryWet = 100;

    struct Echo   
    {
        bool isEnabled = false;
        float echoTime = 20.47f;  
        double stereo = 10;      

        void repeatSignal(double echoSpeed = 3.0);   
    };

    float repeatSignal( Echo echo )
    {
        float speed = 10.8f + echo.echoTime / 360.0f;
        echo.repeatSignal();
        return speed;
    }

    double calculateFeedback(double echoFeedback)
    {
        double feedbackSignal = echoFeedback * double(repeat)/7.89;
        return feedbackSignal;
    }

    double spreadSignal( Echo echo  )
    {
        if (echo.isEnabled)
        {
            echo.stereo += spread;
        }
        return echo.stereo;
    }

    Echo echoRunning;  
};

struct Filter       
{
    float frequenceKnob = 12456.58f;
    float resonanceKnob = 127.0f; 
    float saturationValue = 23.9f;
    double modulationKnob = 127.0; 
    int lfoKnob = 127;
    int filterTypKnob = 100; 
    bool lfoFilter = false; 

    struct Bandpass   
    {
        bool isAnabled = false;
        float bandFrequency = 10.0f;       

        double filterSignal(double resonanceAmount = 3.0);   
    };

    float cutSignal( Filter filter )
    {
        float filterFrequence = filter.frequenceKnob + 10.3f;
        return filterFrequence;
    }

    float modulateFrequencies(float lfoFrequence, Filter filter)
    {
        float filterFrequence = 0.0f;

        if(lfoFilter)
        {
            filterFrequence = filter.frequenceKnob * lfoFrequence /100;
        }
        return filterFrequence;
    }

    float colorSound( Filter filter )
    {
        float colorFrequency = filter.frequenceKnob * saturationValue;

        return colorFrequency;
    }

    Bandpass bandpassRunning;  
};

struct Phaser       
{
    double polesKnob = 5; 
    float colorKnob = 127.0f; 
    int envelopeKnob = 127;
    double lfoKnob = 127.0;
    int feedbackKnob = 127; 
    int stereo = 127;


    int phasingSound(int phaseFrequence)
    {   
        int phaseAmplitude = 0;
        int i = 0;
            while (i < 57) 
            {
                phaseAmplitude = phaseFrequence * i / int(polesKnob) * feedbackKnob;
                i++;
            }
        return phaseAmplitude;
    }

    void stereoEffects(int frequence, int spread)
    {
        stereo = frequence * spread / 100;
    }

    double lfo(double time)
    {
        double lfoModulation = lfoKnob * double(envelopeKnob) / time;
        
        return lfoModulation;
    }
};

struct DrumMachine       
{
    int bassdrum = 12; 
    int snare = 8; 
    int tom = 4; 
    int hihat = 5; 
    int sequencer = 127; 

    void drumSounds(int sampleNumber)
    { 
        switch (sampleNumber) {
            case 1:
                cout << "808";
                break;
            case 2:
                cout << "909";
                break;
            case 3:
                cout << "707";
                break;
            case 4:
                cout << "606";
                break;
            case 5:
                cout << "Linndrum";
                break;
            case 6:
                cout << "505";
                break;
            case 7:
                cout << "Oberheim";
                break;
        }
    }

    int grooves(int shuffle)
    {
        for (int i = 0; i < 78; i++) {
             shuffle = i * rand() % 100;  
        }
        return shuffle;
    }

    bool sendMidi(bool midiSend, bool midiInterface)
    {   
        if(midiSend & midiInterface)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

struct Oscillator       
{
    int volume = 127; 
    double sin = 127.0; 
    double square = 23.0; 
    double triangle = 27.0; 
    float noise = 127.0f;

    double waveform(int waveform)
    {   
        double modulatedWaveform = 0;
        
        if(waveform == 1)
        {
            modulatedWaveform = sin * 345;
        }
        else if(waveform == 2)
        {
            modulatedWaveform = square * 333;
        }
        else if(waveform == 3)
        {
            modulatedWaveform = triangle * 360;
        }
        return modulatedWaveform;
    }
    bool sounds(bool oscillatorOn)
    {
        if(oscillatorOn && sin >= 30)
        {
            oscillatorOn = true;
        }
        else
        {
            oscillatorOn = false;
        }
        return oscillatorOn;
    }
    int changeVolume();
};

struct Adsr       
{
    int attack = 127;
    int decay = 127;
    int sustain = 23;
    int release = 27; 
    float amount = 127.0;

    int changeAttack(int knobValue)
    {
        attack = knobValue * int(amount)/100;
        return attack;
    }

    int changeDecay(int knobValue)
    {
        decay = knobValue * int(amount)*23;
        return decay;
    }

    int changeRelease(int knobValue)
    {
        release = knobValue/123*100;
        return release;
    }
};

struct Midi       
{
    int value = 127;
    int channel = 127; 
    int input = 127;
    int output = 127;
    bool syncType = true; 

    struct MidiMessage   
    {
        bool isEnabled = false;
        int midiChannel = 1;        

        void sendSignal(int midiMessage); 
        void getSignal(); 
    };


    void sendMidi(MidiMessage midiMessage)
    {
        if(midiMessage.isEnabled)
        {
            midiMessage.sendSignal(value);
        }
    }
    void receiveMidi(MidiMessage midiMessage)
    {
        if(midiMessage.isEnabled)
        {
            midiMessage.getSignal();
        }
    }
    void enableMidi(bool enableMidi, MidiMessage midiMessage)
    {
        if(enableMidi)
        {
            midiMessage.isEnabled = true;
        }
    }

};


struct Lfo       
{
    int rate = 127; 
    int amount = 127; 
    float waveform = 127.0; 
    int adsr = 127; 
    double retrigger = 127.0;

    void setRate(int value, int modulate)
    {
        rate = value + modulate;
    }
    int getAmount()
    {
        return amount;
    }
    double getRetrigger()
    {
        return retrigger * amount / rate;
    }
};

struct Sampler       
{
    int retrigger = 127;
    int startSample = 127; 
    bool isLooped = true;
    float loopLength = 127.0f; 
    float loopSample = 0.0f;
    double fadeLengthInMilliseconds = 127.0;

    void playSample(bool play, int load)
    {
        if(play)
        {
            load = startSample*retrigger;
        }      
    }
    void setStartPoint(int knobValue)
    {
        startSample = knobValue/100;
    }
    void loopSound(bool loop, int repeat)
    {
        if(loop)
        {
            loopSample = loopLength * float(repeat);
        }
    }
};

struct Synthesizer       
{
    Oscillator oscillator;
    Adsr adsr; 
    Filter filter; 
    Midi midi; 
    Lfo lfo; 

    void createSounds(Oscillator oscillatorSynth, int waveform)
    {
        oscillatorSynth.waveform(waveform);
    }
    void sendMidi(Midi midiSynth, Midi::MidiMessage midiMessage)
    {
        midiSynth.sendMidi(midiMessage);
    }
    void manipulateSoundAdsr(Adsr adsrSynth, int parameter, int knobValue)
    { 
        if(parameter == 0)
        {
            adsrSynth.changeAttack(knobValue);
        }
        else if(parameter == 1)
        {
            adsrSynth.changeDecay(knobValue);
        }
        else if(parameter == 2)
        {
            adsrSynth.changeRelease(knobValue);
        }    
    }
};


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
