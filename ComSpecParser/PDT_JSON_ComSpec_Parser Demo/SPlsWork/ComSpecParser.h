namespace ComSpecParser;
        // class declarations
         class BoolChangeEventArgs;
         class UshrtChangeEventArgs;
         class StringChangeEventArgs;
         class ComSpecParse;
         class portComSpec;
     class BoolChangeEventArgs 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER StateValue;
        INTEGER Type;
        INTEGER Index;
    };

     class UshrtChangeEventArgs 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER IntValue;
        INTEGER Type;
        INTEGER Index;
    };

     class StringChangeEventArgs 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING StringValue[];
        INTEGER Type;
        INTEGER Index;
    };

     class ComSpecParse 
    {
        // class delegates

        // class events
        EventHandler UShortChange ( ComSpecParse sender, UshrtChangeEventArgs e );

        // class functions
        FUNCTION ProcessComSpec ( STRING data );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static INTEGER ChangeTypeBaud;
        static INTEGER ChangeTypeParity;
        static INTEGER ChangeTypeDataBits;
        static INTEGER ChangeTypeStopBit;
        static INTEGER ChangeTypeSoftHS;
        static INTEGER ChangeTypeHardHS;
        static INTEGER ChangeTypeProtocol;
        static INTEGER ChangeTypePacing;

        // class properties
        INTEGER maxPorts;
        INTEGER PortOffset;
    };

     class portComSpec 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER Port;
        INTEGER Baud;
        INTEGER Parity;
        INTEGER DataBits;
        INTEGER StopBit;
        INTEGER SoftHS;
        INTEGER HardHS;
        INTEGER Protocol;
        INTEGER Pacing;
    };

