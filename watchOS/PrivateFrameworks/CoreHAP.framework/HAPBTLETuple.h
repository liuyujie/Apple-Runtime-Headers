//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HAPBTLETuple : NSObject
{
    unsigned int _atvState;
    int _maxHAPConnections;
    float _minBandwidth;
    float _maxBandwidth;
    struct BTStatus _state;
}

+ (id)state2String:(struct BTStatus *)arg1;
+ (id)makeTupleWithState:(struct BTStatus *)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)atvState2String:(unsigned int)arg1;
+ (void)bandwidthFromATVState:(unsigned int)arg1 MinBandwidth:(float *)arg2 MaxBandwidth:(float *)arg3;
+ (id)makeTupleWithATVState:(unsigned int)arg1 MaxHAPConnections:(int)arg2;
+ (id)makeTupleWithATVState:(unsigned int)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
@property(nonatomic) float maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) float minBandwidth; // @synthesize minBandwidth=_minBandwidth;
@property(nonatomic) int maxHAPConnections; // @synthesize maxHAPConnections=_maxHAPConnections;
@property(nonatomic) struct BTStatus state; // @synthesize state=_state;
@property(nonatomic) unsigned int atvState; // @synthesize atvState=_atvState;
- (id)description;

@end

