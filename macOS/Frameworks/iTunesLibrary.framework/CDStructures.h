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

struct ITLibArtworkInternal;

struct ITLibDBParserImpl {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    int _field3;
    struct TrackBitFields *_field4;
    _Bool _field5;
    id _field6;
    unsigned int _field7;
    id _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    id _field16;
    id _field17;
    id _field18;
    id _field19;
    id _field20;
    id _field21;
    id _field22;
    unsigned long long _field23;
    _Bool _field24;
};

struct TrackBitFields;

struct unique_ptr<ITLibArtworkInternal, std::__1::default_delete<ITLibArtworkInternal>> {
    struct __compressed_pair<ITLibArtworkInternal *, std::__1::default_delete<ITLibArtworkInternal>> {
        struct ITLibArtworkInternal *_field1;
    } _field1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct unique_ptr<ITLibArtworkInternal, std::__1::default_delete<ITLibArtworkInternal>> {
    struct __compressed_pair<ITLibArtworkInternal *, std::__1::default_delete<ITLibArtworkInternal>> {
        struct ITLibArtworkInternal *_field1;
    } _field1;
} unique_ptr_33c325f0;

