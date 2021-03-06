//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLAssertionInternal {
    id _field1;
    struct CLConnectionClient *_field2;
};

struct CLConnectionClient;

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct _CLLocationManagerStateTrackerState {
    double distanceFilter;
    double desiredAccuracy;
    _Bool updatingLocation;
    _Bool requestingLocation;
    _Bool requestingRanging;
    _Bool updatingRanging;
    _Bool updatingHeading;
    double headingFilter;
    _Bool persistentMonitoringEnabled;
    _Bool allowsLocationPrompts;
    _Bool allowsAlteredAccessoryLocations;
    _Bool dynamicAccuracyReductionEnabled;
    _Bool previousAuthorizationStatusValid;
    int previousAuthorizationStatus;
    int activityType;
    int pausesLocationUpdatesAutomatically;
    _Bool paused;
    _Bool allowsBackgroundLocationUpdates;
    _Bool showsBackgroundLocationIndicator;
    _Bool allowsMapCorrection;
    _Bool batchingLocation;
    _Bool updatingVehicleSpeed;
    _Bool updatingVehicleHeading;
    _Bool matchInfoEnabled;
    _Bool courtesyPromptNeeded;
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct ostream;

struct value_ostream {
    _Bool _field1;
    struct ostream *_field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    double speed;
    double timestamp;
    double machContinuousTime;
    double machAbsoluteTime;
} CDStruct_6a5f25ec;

typedef struct {
    int padding1;
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double padding2;
    double padding3;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
    int rawReferenceFrame;
} CDStruct_05ee51d2;

typedef struct {
    char identifier[512];
    char onBehalfOfIdentifier[512];
    int type;
    _Bool notifyOnEntry;
    _Bool notifyOnExit;
    _Bool conservativeEntry;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            _Bool notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
            int referenceFrame;
            _Bool allowMonitoringWhileNearby;
        } circularAttributes;
    } ;
} CDStruct_5652eb1b;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

