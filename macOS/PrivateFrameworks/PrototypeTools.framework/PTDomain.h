//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PTDomainClient.h"

@class NSMutableDictionary, NSString, NSXPCConnection, PTDomainInfo, PTSettings, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient>
{
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    BOOL _registrationRequested;
    BOOL _registrationCompleted;
    double _delayBeforeRegisteringAfterInterruption;
    BOOL _archiveIsApplied;
}

+ (Class)rootSettingsClass;
+ (id)domainName;
+ (id)domainGroupName;
+ (id)_sharedInstance;
+ (void)registerTestRecipe:(id)arg1;
+ (id)rootSettings;
- (void).cxx_destruct;
- (void)_noteRegistrationCompleted;
- (void)_registerWithServerIfNecessary;
- (void)_handleConnectionInvalidated;
- (void)_handleConnectionInterrupted;
- (void)_tearDownConnection;
- (void)_createConnection;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)_disableObservationIfNecessary;
- (void)_restoreDefaultSettings;
- (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_applyArchive:(id)arg1;
- (void)_updateActiveTestRecipe;
- (void)_registerTestRecipe:(id)arg1;
- (id)_rootSettings;
- (void)sendActiveTestRecipeEvent:(long long)arg1;
- (void)invokeOutletAtKeyPath:(id)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)restoreDefaultSettings;
- (void)updateSettingsFromArchive:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
