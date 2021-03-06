//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIPressInfo : NSObject
{
    _Bool _longClick;
    int _phase;
    int _type;
    unsigned int _source;
    unsigned int _gameControllerComponent;
    float _force;
    unsigned int _clickCount;
    double _timestamp;
}

+ (id)_keyboardPressInfoForType:(int)arg1 isKeyDown:(_Bool)arg2 timestamp:(double)arg3;
@property(nonatomic, getter=isLongClick) _Bool longClick; // @synthesize longClick=_longClick;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) float force; // @synthesize force=_force;
@property(nonatomic) unsigned int gameControllerComponent; // @synthesize gameControllerComponent=_gameControllerComponent;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)_sourceDescription;
- (id)description;
- (id)init;

@end

