//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSCloudAvailability.h"

@class NSString;

@interface NMCCloudAvailabilityController : NSObject <HSCloudAvailability>
{
    _Bool _hasProperNetworkConditionsToPlayMedia;
    _Bool _canShowCloudMusic;
}

+ (id)sharedController;
- (void)_handleCloudAvailabilityMessage:(id)arg1;
- (void)_fetchCompanionCloudAvailability;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)canShowCloudVideo;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudDownloadButtons;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

