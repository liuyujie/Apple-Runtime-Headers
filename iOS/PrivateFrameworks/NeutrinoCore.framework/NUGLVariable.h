//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUGLVariable : NSObject
{
    unsigned int _type;
    int _size;
    int _location;
}

@property(readonly) int location; // @synthesize location=_location;
@property(readonly) int size; // @synthesize size=_size;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) unsigned int valueType;
- (_Bool)isEqualToVariable:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2 location:(int)arg3;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2;
- (id)initWithType:(unsigned int)arg1;
- (id)init;

@end

