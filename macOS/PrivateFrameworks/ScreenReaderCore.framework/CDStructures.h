//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ProcessSerialNumber {
    unsigned int highLongOfPSN;
    unsigned int lowLongOfPSN;
};

struct SCRCFingerState {
    unsigned long long identifier;
    int xDirection;
    int yDirection;
    struct SCRCMathAverageValue normalizedVelocityPerSample;
    struct SCRCMathAverageValue deltaXPerSample;
    struct SCRCMathAverageValue deltaYPerSample;
    struct SCRCMathAverageValue distancePerSample;
    double distanceTraveledWithInertiaApplied;
    char dragStalled;
    unsigned long long type;
    struct CGPoint startTouchPoint;
    struct CGPoint mostRecentTouchPoint;
    struct CGPoint lastDownPoint;
    double pressure;
    double altitude;
    double azimuth;
};

struct SCRCMathAverageValue {
    unsigned int samples;
    double fifo[50];
    int fifoIndex;
    double sum;
    double average;
    double current;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    char _field10;
    struct CGPoint _field11;
    double _field12;
    double _field13;
    double _field14;
    struct CGPoint _field15;
    struct CGPoint _field16;
    struct CGPoint _field17;
    struct CGRect _field18;
    struct CGRect _field19;
    struct CGPoint _field20;
    struct CGPoint _field21;
    double _field22;
} CDStruct_1c7a58cf;

