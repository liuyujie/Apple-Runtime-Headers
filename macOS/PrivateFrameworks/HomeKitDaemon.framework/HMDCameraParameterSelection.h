//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDCameraAudioParameterSelection, HMDCameraSessionID, HMDCameraVideoParameterSelection, NSString;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>
{
    HMDCameraSessionID *_sessionID;
    HMDCameraVideoParameterSelection *_videoParameterSelection;
    HMDCameraAudioParameterSelection *_audioParameterSelection;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // @synthesize audioParameterSelection=_audioParameterSelection;
@property(retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // @synthesize videoParameterSelection=_videoParameterSelection;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;
- (void)setSelectedConfigParameters:(id)arg1;
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;
- (BOOL)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
