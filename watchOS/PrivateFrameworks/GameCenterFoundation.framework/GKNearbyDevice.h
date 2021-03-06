//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKDiscovery, GKPlayer, NSString;

@interface GKNearbyDevice : NSObject
{
    NSString *_deviceID;
    GKDiscovery *_discovery;
    GKPlayer *_player;
    int _state;
}

+ (id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKDiscovery *discovery; // @synthesize discovery=_discovery;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)sendDictionary:(id)arg1;
- (void)dealloc;

@end

