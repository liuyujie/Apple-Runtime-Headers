//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAudioPowerProviding.h"

@class AFXPCWrapper, NSString, _AFAudioPowerXPCSharedMemory;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding>
{
    AFXPCWrapper *_wrapper;
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

- (void).cxx_destruct;
- (void)didEndAccessPower;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)willBeginAccessPower;
- (id)initWithXPCWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
